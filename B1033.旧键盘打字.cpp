#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;

//bool hashTable[256] = {true}; ֻ�Ե�һ��Ԫ�ظ�ֵΪtrue������Ԫ�ض�Ϊfalse 
bool hashTable[256];	//������ǰ����Ƿ���� 

int main()
{
	memset(hashTable, true, sizeof(hashTable));
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for(int i=0; i<s1.length(); i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z'){	//��дת��ΪСд 
			s1[i] = s1[i] - 'A' + 'a';
		}
		hashTable[s1[i]] = false;
	}
	
	for(int i=0; i<s2.length(); i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z'){		//Ҫ�����д��ĸ 
			char low = s2[i] - 'A' + 'a';			//ת��Ϊ��д
			if(hashTable[low] == true && hashTable['+'] == true){	//�ϵ�����ü������ 
				printf("%c", s2[i]);
			} 
		}else if(hashTable[s2[i]] == true){
			printf("%c", s2[i]);
		}
	}
	return 0;
}
