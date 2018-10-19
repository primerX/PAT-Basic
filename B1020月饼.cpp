#include<cstdio>
#include<algorithm>
using namespace std;

struct MoonCake{
	double store, allMoney;		//库存量, 总售价 
	double price;		//单价 
}moon[1010];

bool cmp(MoonCake a, MoonCake b)
{
	return a.price > b.price;		//单价高的在前 
}

int main()
{
	int n, d;
	scanf("%d %d", &n, &d);
	for(int i=0; i<n; i++){
		scanf("%lf", &moon[i].store);
	}
	for(int i=0; i<n; i++){
		scanf("%lf", &moon[i].allMoney);
		moon[i].price = moon[i].allMoney / moon[i].store;	//单价 
	}
	sort(moon, moon+n, cmp);
	double ans = 0.0;
	for(int i=0; i<n; i++){
		if(moon[i].store < d){
			ans += moon[i].allMoney;
			d -= moon[i].store;
		}else if(moon[i].store >= d){
			ans += moon[i].price * d;
			break;		//达到最大需求时，退出 
		}
	}
	printf("%.2lf\n", ans);
	return 0;
}
