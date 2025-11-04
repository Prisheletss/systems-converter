#pragma once

# include "Imports.h"



template <typename T>
void print(vector<T> list) {
	for (auto i : list) { cout << i; }
	cout << endl;
}



vector<int> convert_10(int sign_num, int base) {
	int num = abs(sign_num);
	vector<int> ans;

	if (base < 0) { throw runtime_error("base cannot be las then zero"); }
	else if (base == 0) { throw runtime_error("base cannot be 0"); }
	else if (base == 1) {
		for (int i = 0; i < num; i++) { ans.push_back(1); }
	} else {
		while (num > 0) {
			ans.push_back(num % base);
			num /= base;
		}
	}

	// sing
	ans.push_back(-1);
	if (sign_num > 0) { ans.push_back(1); }
	else if (sign_num < 0) { ans.push_back(-1); }
	else if (sign_num == 0) { ans.push_back(0); }

	// mantiss
	reverse(ans.begin(), ans.end());
	ans.push_back(-1);
	ans.push_back(0);

	return ans;
}
