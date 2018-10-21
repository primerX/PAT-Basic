#include<cstdio>


int main()
{
	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);
	int num[100], cnt = 0;
	int sum = a + b;
	do{
		num[cnt++] = sum % d;
		sum /= d;
	}while(sum != 0);
	
	for(int i=cnt-1; i>=0; i--){
		printf("%d", num[i]);
	}
	return 0;
 } 
