#pragma once
#include <cstddef>

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	explicit TreeNode(int v) : val(v), left(nullptr), right(nullptr) {}
};


