#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int hashTable[6];	//��� PATest ������ĸ���ֵĴ��� 
char aim[6] = {'P', 'A', 'T', 'e', 's', 't'};
int main()
{
	string str;
	int cnt = 0;	//��¼�ܸ��� 
	getline(cin, str);
	for(int i=0; i<str.length(); i++){
		for(int j=0; j<6; j++){
			if(str[i] == aim[j]){
				hashTable[j]++;
				cnt++;		//������һ 
			}
		}
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
