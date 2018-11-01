#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string, int> mp;
int main()
{
	int m, n, s;
	bool flag = false;	//用来标记是否有人中奖	 
	cin >> m >> n >> s;
	getchar();		//吸收换行符 
	for(int i=1; i<=m; i++){
		string nickname;
		getline(cin, nickname);
		if(mp[nickname] != 0) s += 1;	//改名字已经出现过，往后移一位 
		if(i == s && mp[nickname] == 0){	//只出现一次
			cout << nickname << endl;
			mp[nickname]++;
			s += n;
			flag = true;
		}
	}
	if(flag == false) cout << "Keep going..." << endl;
	return 0;
 } 
