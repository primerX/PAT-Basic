#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	getline(cin, str);
	int pos = 0, exp = 0;
	
	while(str[pos] != 'E') pos++;
	if(str[0] == '-') printf("-");	//���� 
	for(int i=pos+2; i<str.length(); i++){
		exp = exp * 10 + (str[i] - '0');
	}
	if(exp == 0){	//ָ��Ϊ 0
		for(int i=1; i<pos; i++){
			printf("%c", str[i]);
		} 
	}else{		//ָ����Ϊ 0 
		if(str[pos + 1] == '-'){		//ָ��Ϊ��
			printf("0.");
			for(int i=0; i<exp-1; i++){
				printf("0");
			}
			for(int i=1; i<pos; i++){
				if(i == 2) continue;
				else{
					printf("%c", str[i]);
				}
			}
		}else{		//ָ��Ϊ�� 
			for(int i=1; i<pos; i++){
				if(i == 2) continue;
				printf("%c", str[i]);
				if(i == exp+2 && pos-3 != exp){
					printf(".");
				}
			}
			for(int i=0; i<exp-(pos-3); i++){
				printf("0");
			}
		}
	}
	
	return 0;
 } 
