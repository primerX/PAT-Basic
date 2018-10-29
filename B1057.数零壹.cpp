#include<cstdio>
#include<cstring>

const int MAXN = 100010;
char str[MAXN];

int main()
{
	fgets(str, MAXN, stdin);
	int len = strlen(str);
	int sum = 0;	//记录字母的和 
	for(int i=0; i<len; i++){
		if(str[i] >= 'a' && str[i] <= 'z'){		//小写字母
			sum += str[i] - 'a' + 1; 
		}else if(str[i] >= 'A' && str[i] <= 'Z'){	//大写字母
			sum += str[i] - 'A' + 1;
		}
	}
	int num[MAXN], cnt = 0;	//用来记录 sum 的二进制, 个数 
	
	while(sum != 0){
		num[cnt++] = sum % 2;
		sum /= 2;
	} 
	int cnt0 = 0, cnt1 = 0;		//记录 0，1 的个数 
	for(int i=0; i<cnt; i++){
		if(num[i] == 1) cnt1++;
		else cnt0++;
	}
	printf("%d %d\n", cnt0, cnt1);
	return 0;
 } 
