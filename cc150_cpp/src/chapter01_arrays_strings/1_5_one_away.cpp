#include <string>
#include <cstdlib>

namespace cc150 {
namespace chapter01 {

inline bool oneAway(const std::string& a, const std::string& b) {
	const int la = static_cast<int>(a.size());
	const int lb = static_cast<int>(b.size());
	if (std::abs(la - lb) > 1) return false;

	// 保证 a 为较短或相等
	const std::string& s1 = (la <= lb) ? a : b;
	const std::string& s2 = (la <= lb) ? b : a;
	int i = 0, j = 0;
	bool foundDiff = false;
	while (i < static_cast<int>(s1.size()) && j < static_cast<int>(s2.size())) {
		if (s1[i] == s2[j]) {
			++i; ++j;
		} else {
			if (foundDiff) return false;
			foundDiff = true;
			if (s1.size() == s2.size()) {
				// 替换
				++i; ++j;
			} else {
				// 插入/删除（跳过长串当前字符）
				++j;
			}
		}
	}
	return true;
}

} // namespace chapter01
} // namespace cc150


