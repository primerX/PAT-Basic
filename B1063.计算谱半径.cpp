#include<cstdio>
#include<cmath>

int main()
{
	int n;
	scanf("%d", &n);
	double a, b, max = 0.0;	//max 用来记录最大值 
	for(int i=0; i<n; i++){
		scanf("%lf %lf", &a, &b);
		double ans = sqrt(a*a + b*b);
		if(ans > max){
			max = ans;
		} 
	}
	printf("%.2lf\n", max);
	return 0;
}
