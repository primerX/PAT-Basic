#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
	char begin;
	string str, num;	//num ������¼��ѹ�������ַ����е����� 
	cin >> begin;	
	getchar();		//���ջ��з� 
	getline(cin, str);
	int cnt = 1;
	if(begin == 'C'){	//ѹ�� 
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
	}else{	//��ѹ
		for(int i = 0; i < str.length(); i++){
			if(str[i] >= '0' && str[i] <= '9'){	//����
				num += str[i]; 
			}else{
				// ��� num ��Ϊ�գ��� num ת���� int 
				if(num.length() > 0) cnt = stoi(num);
				while(cnt--) cout << str[i];
				cnt = 1;
				num = "";
			}
		} 
	}
	return 0;
}
