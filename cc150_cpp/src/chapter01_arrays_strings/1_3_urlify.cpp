#include <string>

namespace cc150 {
namespace chapter01 {

// URL化：将空格替换为%20；传入真实长度 trueLen
inline std::string urlify(const std::string& s, int trueLen) {
	std::string out;
	out.reserve(s.size());
	for (int i = 0; i < trueLen && i < static_cast<int>(s.size()); ++i) {
		char c = s[i];
		if (c == ' ') {
			out += "%20";
		} else {
			out.push_back(c);
		}
	}
	return out;
}

} // namespace chapter01
} // namespace cc150


