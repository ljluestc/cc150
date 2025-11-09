#include <string>

namespace cc150 {
namespace chapter01 {

inline std::string compressString(const std::string& s) {
	if (s.empty()) return s;
	std::string out;
	out.reserve(s.size());
	int count = 1;
	for (size_t i = 1; i <= s.size(); ++i) {
		if (i < s.size() && s[i] == s[i - 1]) {
			++count;
		} else {
			out.push_back(s[i - 1]);
			out += std::to_string(count);
			count = 1;
		}
	}
	return out.size() < s.size() ? out : s;
}

} // namespace chapter01
} // namespace cc150


