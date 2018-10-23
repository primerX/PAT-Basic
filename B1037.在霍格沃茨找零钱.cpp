#include<cstdio>

struct money{
	int sickle, galleon, kunt;
	int sum;		//È«²¿»»³Ékunt 
}p, a, ans;

int main()
{
	scanf("%d.%d.%d %d.%d.%d", &p.galleon,&p.sickle, &p.kunt, &a.galleon, &a.sickle, &a.kunt);
	p.sum = p.galleon*17*29 + p.sickle*29 + p.kunt;
	a.sum = a.galleon*17*29 + a.sickle*29 + a.kunt; 
	ans.sum = a.sum - p.sum;
	int temp = 17 * 29;
	if(ans.sum < 0) {
		printf("-");
		ans.sum = -ans.sum;
	}
	printf("%d.%d.%d", ans.sum/temp, ans.sum%temp/29, ans.sum%29);
	return 0;
}
