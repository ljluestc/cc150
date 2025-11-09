#include <string>
#include <vector>

namespace cc150 {
namespace chapter01 {

// 判定是否互为字符重排（假设 ASCII 128）
inline bool checkPermutation(const std::string& a, const std::string& b) {
	if (a.size() != b.size()) return false;
	std::vector<int> counts(128, 0);
	for (unsigned char c : a) counts[c]++;
	for (unsigned char c : b) {
		if (--counts[c] < 0) return false;
	}
	return true;
}

} // namespace chapter01
} // namespace cc150


