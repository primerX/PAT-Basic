#include<cstdio>

int main()
{
	int n;
	int num[6], cnt = 0;
	scanf("%d", &n);
	do{
		num[cnt++] = n % 10;
		n /= 10;
	}while(n != 0);
	for(int i=cnt-1; i>=0; i--)
	{
		if(i == 2){	//如果 n 是三位数
			for(int j=0; j<num[i]; j++){
				printf("B");
			}
		}else if(i == 1){	// n 是两位数
			for(int j=0; j<num[i]; j++){
				printf("S");
			}
		}else if(i == 0){
			for(int j=1; j<=num[i]; j++){
				printf("%d", j);
			}
		}
	}
	
	return 0;
 } 
