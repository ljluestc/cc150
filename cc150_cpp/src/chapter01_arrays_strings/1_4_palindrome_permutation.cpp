#include <string>
#include <cctype>

namespace cc150 {
namespace chapter01 {

// 回文排列：忽略空格与大小写，仅考虑字母数字时也常见
inline bool isPalindromePermutation(const std::string& s) {
	// 用位掩码记录奇偶（仅按ASCII 128）
	unsigned int maskLow = 0u, maskHigh = 0u; // 64+64
	for (unsigned char c : s) {
		if (std::isspace(c)) continue;
		c = static_cast<unsigned char>(std::tolower(c));
		unsigned int idx = c;
		if (idx < 64u) {
			maskLow ^= (1u << idx);
		} else if (idx < 128u) {
			maskHigh ^= (1u << (idx - 64u));
		}
	}
	// 允许最多一个奇数计数
	auto hasAtMostOneBit = [](unsigned int x) { return (x & (x - 1u)) == 0u; };
	unsigned int totalBits = (maskLow != 0u) + (maskHigh != 0u);
	if (maskLow && maskHigh) return false; // 两个段同时有奇数位，至少两位为奇
	return hasAtMostOneBit(maskLow) && hasAtMostOneBit(maskHigh);
}

} // namespace chapter01
} // namespace cc150


