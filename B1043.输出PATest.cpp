#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int hashTable[6];	//标记 PATest 六个字母出现的次数 
char aim[6] = {'P', 'A', 'T', 'e', 's', 't'};
int main()
{
	string str;
	int cnt = 0;	//记录总个数 
	getline(cin, str);
	for(int i=0; i<str.length(); i++){
		if(str[i] == 'P') hashTable[0]++, cnt++;
		if(str[i] == 'A') hashTable[1]++, cnt++;
		if(str[i] == 'T') hashTable[2]++, cnt++;
		if(str[i] == 'e') hashTable[3]++, cnt++;
		if(str[i] == 's') hashTable[4]++, cnt++;
		if(str[i] == 't') hashTable[5]++, cnt++;
	}
	while(cnt > 0){
		for(int i=0; i<6; i++){
			if(hashTable[i] > 0){
				printf("%c", aim[i]);
				hashTable[i]--;
				cnt--;
			}
		}
	}
	
	return 0;
}
