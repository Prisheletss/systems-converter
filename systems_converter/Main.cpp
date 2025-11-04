# include "Functions.h"
# include "Imports.h"


int main() {
	vector<int> a = convert_10(13, 2);
	print(a);

	vector<int> b = convert_10(-40, 3);
	print(b);

	vector<int> c = convert_10(10, 1);
	print(c);
}