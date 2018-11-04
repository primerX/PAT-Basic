#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	int ans = a * b;
	string s = to_string(ans);
	reverse(s.begin(), s.end());
	cout << stoi(s) << endl;
	return 0;
}
