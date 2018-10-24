#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
using namespace std;

//bool hashTable[256] = {true}; 只对第一个元素赋值为true，后面元素都为false 
bool hashTable[256];	//用来标记按键是否完好 

int main()
{
	memset(hashTable, true, sizeof(hashTable));
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	for(int i=0; i<s1.length(); i++){
		if(s1[i] >= 'A' && s1[i] <= 'Z'){	//大写转换为小写 
			s1[i] = s1[i] - 'A' + 'a';
		}
		hashTable[s1[i]] = false;
	}
	
	for(int i=0; i<s2.length(); i++){
		if(s2[i] >= 'A' && s2[i] <= 'Z'){		//要输出大写字母 
			char low = s2[i] - 'A' + 'a';			//转换为大写
			if(hashTable[low] == true && hashTable['+'] == true){	//上档键与该键都完好 
				printf("%c", s2[i]);
			} 
		}else if(hashTable[s2[i]] == true){
			printf("%c", s2[i]);
		}
	}
	return 0;
}
