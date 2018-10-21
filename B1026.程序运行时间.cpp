#include<cstdio>

const int CLK_TCK = 100;

int main()
{
	int c1, c2;
	scanf("%d %d", &c1, &c2); 
	int ans = (c2-c1) / CLK_TCK;
	printf("%02d:%02d:%02d", ans/3600, ans%3600/60, ans%60);
	return 0;
}
