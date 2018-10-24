#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;

int hashTable[128] = {0};	//标记珠串出现的次数 

int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);
	for(int i=0; i<str1.length(); i++){
		hashTable[str1[i]]++;
	}
	int miss = 0;
	for(int i=0; i<str2.length(); i++){
		hashTable[str2[i]]--;
		if(hashTable[str2[i]] < 0){
			miss++;
		}
	}
	if(miss > 0) printf("No %d", miss);
	else printf("Yes %d", str1.length()-str2.length());
	return 0;
 } 
