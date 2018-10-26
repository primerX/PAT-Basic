#include<cstdio>

const int manx = 100010;

int main()
{
	int n;
	double value, ans = 0.0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%lf", &value);
		ans += value * i * (n-i+1);
	}
	printf("%.2lf", ans);
	return 0;
 } 
