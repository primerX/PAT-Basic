#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T;		//T ������Ҫ�����ַ������� 
	string str;
	cin >> T;
	getchar();	//���ջ��з� 
	while(T--)
	{
		getline(cin, str);
		// �ַ����� p ��������T ��������PAT ������ĸ�����ĸ������  
		int num_p = 0, num_t = 0, others = 0;
		int pos_p, pos_t;	//P ���ڵ�λ�ã�T���ڵ�λ�� 
		for(int i=0; i<str.length(); i++){
			if(str[i] == 'P'){
				num_p++;
				pos_p = i;
			}else if(str[i] == 'T'){
				num_t++;
				pos_t = i;
			}else if(str[i] != 'A'){
				others++;	//��PAT�������ĸ���� 
			}
		}
		if((num_p!=1) || (num_t!=1) || (others>0) ||(pos_t-pos_p<=1)){
			printf("NO\n");
			continue;	//���ַ������ϸ� 
		}
		int x = pos_p, y = pos_t-pos_p-1, z = str.length()-1-pos_t;
		if(z - x*(y-1) == x){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
 } 
