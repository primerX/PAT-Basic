#include<cstdio>

int main()
{
	int n, cnt = 0;		//cnt �������㲽���� 
	scanf("%d", &n);
	while(n != 1){
		if(n % 2 == 0) n = n / 2;
		else n = (3*n + 1) / 2;
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
 } 
