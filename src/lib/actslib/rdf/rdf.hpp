#pragma once
#include "../actslib.hpp"

namespace actslib::rdf {

	enum RDFComponentType {
		RDF_SUBJECT = 0,
		RDF_PREDICATE = 1,
		RDF_OBJECT = 2,
		RDF_TRIPLE_COUNT = 3,
		RDF_GRAPH = 3,
		RDF_QUAD_COUNT = 4,
	};
	
	class StringComponent;

	struct Component {
		const char* buffer;
		size_t offset;
		size_t length;

		char operator[](size_t idx) {
			return buffer[offset];
		}

		friend std::ostream& operator<<(std::ostream& out, const Component& cmp) {
			out << std::string_view{ cmp.buffer + cmp.offset, cmp.length };
			return out;
		}

		size_t GetDeltaLen(const Component& next) {
			size_t d{};
			size_t ml = length > next.length ? next.length : length;

			while (d < ml && next.buffer[next.offset + d] == buffer[offset + d]) {
				d++;
			}

			return d;
		}
	};

	class StringComponent : public Component {
	public:
		std::string strbuf;
		StringComponent(Component& cmp) : strbuf{ cmp.buffer + cmp.offset, cmp.buffer + cmp.offset + cmp.length }, Component{ nullptr, 0, cmp.length } {
			Component::buffer = strbuf.data();
		}
		StringComponent() : strbuf{}, Component{ nullptr, 0, 0 } {
			Component::buffer = strbuf.data();
		}
		StringComponent(const std::string& str) : strbuf{ str }, Component{ nullptr, 0, str.size() } {
			Component::buffer = strbuf.data();
		}

		void ReplaceString(const Component& cmp) {
			if (strbuf.capacity() < cmp.length) {
				strbuf.reserve(cmp.length * 2);
			}

			strbuf.resize(cmp.length);
			memcpy(strbuf.data(), cmp.buffer + cmp.offset, cmp.length);

			Component::offset = 0;
			Component::length = cmp.length;
			Component::buffer = strbuf.data();
		}
		void ResizeString(size_t len) {
			if (strbuf.capacity() < len) {
				strbuf.reserve(len * 2);
			}

			strbuf.resize(len);
			Component::offset = 0;
			Component::length = len;
			Component::buffer = strbuf.data();
		}
	};

	class StreamAppendStringComponent : public StringComponent {
		std::string linebuf;
	public:
		StreamAppendStringComponent() : linebuf{}, StringComponent{} {
		}

		void Append(std::istream& is, size_t offset = 0) {
			if (offset) {
				if (is && std::getline(is, linebuf, '\0')) {
					ResizeString(offset + linebuf.size());
					memcpy(strbuf.data() + offset, linebuf.data(), linebuf.size());
				}
				return;
			}
			std::getline(is, strbuf, '\0');
			Component::offset = 0;
			Component::length = strbuf.size();
			Component::buffer = strbuf.data();
		}
	};

	struct Triple {
		Component* subject{};
		Component* predicate{};
		Component* object{};

		bool IsFull() const {
			return subject && predicate && object;
		}

		void Clear() {
			subject = predicate = object = nullptr;
		}

		friend std::ostream& operator<<(std::ostream& out, const Triple& triple) {
			if (triple.subject) {
				out << *triple.subject;
			}
			else {
				out << "null";
			}
			out << ", ";
			if (triple.predicate) {
				out << *triple.predicate;
			}
			else {
				out << "null";
			}
			out << ", ";
			if (triple.object) {
				out << *triple.object;
			}
			else {
				out << "null";
			}
			return out;
		}
	};

}

template<>
struct std::formatter<actslib::rdf::Triple, char> : actslib::BasicFormatter<actslib::rdf::Triple> {};
template<>
struct std::formatter<actslib::rdf::Component, char> : actslib::BasicFormatter<actslib::rdf::Component> {};