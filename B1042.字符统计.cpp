#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int hashTable[128];		//记录每个字符出现的次数 

int main()
{
	memset(hashTable, 0, sizeof(hashTable));
	string str;
	getline(cin, str);
	for(int i=0; i<str.length(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] = str[i] - 'A' + 'a';	//将大写转换为小写 
		}
		if(!(str[i] >= 'a' && str[i] <= 'z')) continue;
		hashTable[str[i] - 'a']++;
	}
	int max = 0;
	for(int i=0; i<128; i++){
		if(hashTable[i] > hashTable[max]) max = i;
	}
	printf("%c %d",'a'+max, hashTable[max]);
	return 0;
}
