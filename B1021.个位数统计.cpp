#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int len = str.length();
	int num[10] = {0};
	for(int i=0; i<len; i++){
		num[str[i] - '0']++;
	}
	for(int i=0; i<10; i++){
		if(num[i] > 0){
			printf("%d:%d\n", i, num[i]);
		}
	}
	return 0;
}
