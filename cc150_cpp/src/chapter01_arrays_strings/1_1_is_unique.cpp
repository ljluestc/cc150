#include <string>
#include <vector>

namespace cc150 {
namespace chapter01 {

// 判断字符串是否所有字符唯一（假设 ASCII 128）
inline bool isUnique(const std::string& s) {
	if (s.size() > 128) return false;
	std::vector<bool> seen(128, false);
	for (unsigned char c : s) {
		if (seen[c]) return false;
		seen[c] = true;
	}
	return true;
}

} // namespace chapter01
} // namespace cc150


