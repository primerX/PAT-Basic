#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	char begin;
	string str, num;	//num 用来记录解压过程中字符串中的数字 
	cin >> begin;	
	getchar();		//吸收换行符 
	getline(cin, str);
	int cnt = 1;
	if(begin == 'C'){	//压缩 
		char pre = str[0];
		for(int i = 1; i < str.length(); i++){
			if(str[i] == pre){
				cnt++;
			}else{
				if(cnt >= 2) cout << cnt;
				cout << pre;
				cnt = 1;
				pre = str[i];
			}
		}
		if(cnt >= 2) cout << cnt;
		cout << pre;
	}else{	//解压
		for(int i = 0; i < str.length(); i++){
			if(str[i] >= '0' && str[i] <= '9'){	//数字
				num += str[i]; 
			}else{
				// 如果 num 不为空，则将 num 转换成 int 
				if(num.length() > 0) cnt = stoi(num);
				while(cnt--) cout << str[i];
				cnt = 1;
				num = "";
			}
		} 
	}
	return 0;
}
