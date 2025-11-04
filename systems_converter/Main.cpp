# include "Functions.h"
# include "Imports.h"


int main() {
	vector<int> bin = convert_10(13, 2);
	for (int i : bin) { cout << i; }
}