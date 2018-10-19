#include<cstdio>
#include<algorithm>
using namespace std;

struct MoonCake{
	double store, allMoney;		//�����, ���ۼ� 
	double price;		//���� 
}moon[1010];

bool cmp(MoonCake a, MoonCake b)
{
	return a.price > b.price;		//���۸ߵ���ǰ 
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
		moon[i].price = moon[i].allMoney / moon[i].store;	//���� 
	}
	sort(moon, moon+n, cmp);
	double ans = 0.0;
	for(int i=0; i<n; i++){
		if(moon[i].store < d){
			ans += moon[i].allMoney;
			d -= moon[i].store;
		}else if(moon[i].store >= d){
			ans += moon[i].price * d;
			break;		//�ﵽ�������ʱ���˳� 
		}
	}
	printf("%.2lf\n", ans);
	return 0;
}
