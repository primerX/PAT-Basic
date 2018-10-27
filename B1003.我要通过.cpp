#include<iostream>
#include<string>
using namespace std;

int main()
{
	int T;		//T 代表需要检测的字符串个数 
	string str;
	cin >> T;
	getchar();	//吸收换行符 
	while(T--)
	{
		getline(cin, str);
		// 字符串中 p 的数量，T 的数量，PAT 三个字母外的字母的数量  
		int num_p = 0, num_t = 0, others = 0;
		int pos_p, pos_t;	//P 所在的位置，T所在的位置 
		for(int i=0; i<str.length(); i++){
			if(str[i] == 'P'){
				num_p++;
				pos_p = i;
			}else if(str[i] == 'T'){
				num_t++;
				pos_t = i;
			}else if(str[i] != 'A'){
				others++;	//除PAT以外的字母数量 
			}
		}
		if((num_p!=1) || (num_t!=1) || (others>0) ||(pos_t-pos_p<=1)){
			printf("NO\n");
			continue;	//此字符串不合格 
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
