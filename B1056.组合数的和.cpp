#include<cstdio>

int main()
{
	int n, num, sum = 0;	//sum ������¼��� 
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &num);
		sum += num * 10*(n-1) + num*(n-1);
	}
	printf("%d", sum);
	return 0;
}
