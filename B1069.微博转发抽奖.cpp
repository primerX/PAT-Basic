#include<cstdio>
#include<iostream>
#include<map>
#include<string>
using namespace std;

map<string, int> mp;
int main()
{
	int m, n, s;
	bool flag = false;	//��������Ƿ������н�	 
	cin >> m >> n >> s;
	getchar();		//���ջ��з� 
	for(int i=1; i<=m; i++){
		string nickname;
		getline(cin, nickname);
		if(mp[nickname] != 0) s += 1;	//�������Ѿ����ֹ���������һλ 
		if(i == s && mp[nickname] == 0){	//ֻ����һ��
			cout << nickname << endl;
			mp[nickname]++;
			s += n;
			flag = true;
		}
	}
	if(flag == false) cout << "Keep going..." << endl;
	return 0;
 } 
