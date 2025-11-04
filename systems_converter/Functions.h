#pragma once

# include "Imports.h"


vector<int> convert_10(int num, int base) {
	vector<int> ans;
	while (num > 0) {
		ans.push_back(num % base);
		num /= base;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}
