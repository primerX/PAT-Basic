#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string corStr;
	int limitCnt;
	cin >> corStr >> limitCnt;
	int cnt = 0;
	getchar();	//ÎüÊÕ»»ĞĞ·û 
	while(true){
		string s;
		getline(cin, s);
		cnt++;
		if(s == "#") break;
		if(s == corStr && cnt <= limitCnt){
			cout << "Welcome in" << endl;
			break;
		}else if(s != corStr && cnt <= limitCnt){
			cout << "Wrong password: " << s << endl;
			if(cnt == limitCnt){
				cout << "Account locked" << endl;
				break;
			}
		}
	}
	return 0;
}
