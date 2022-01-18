#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string s;
	char c;
	cout << "Input text" << endl;
	getline(cin, s);

		vector <int> a;
		for (char c : s) 
			a.push_back(c);
		
	for (int i = 0; i < s.size(); i++) {
		int temp = 0;
		for (int j = 0; j < s.size(); j++) {
			if (a[j] == a[i] && i != j)
			temp++;	}
		if (temp == 0) {
			cout << '(';}
		else {
			cout << ')';}
	}
	return 0;
}