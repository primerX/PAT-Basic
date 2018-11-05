#include<iostream>
using namespace std;

int main()
{
	string s;
	int n;
	cin >> s >> n;
	for(int i = 0; i < n-1; i++){
		string temp;
		int k;
		for(int j = 0; j < s.length(); j = k){
			for(k = j; k < s.length() && s[k] == s[j]; k++);
			temp += to_string((s[j] - '0') * 10 + k - j);
		}
		s = temp;
	}
	cout << s;
	return 0;
}
