#include<cstdio>

const int Galleon = 17 * 29;	//1个Galleon 兑换 17*29个Kunt
const int Sickle = 29;		//1个 Sickle 兑换 29 个 Kunt

int main()
{
	int a1, a2, a3, b1, b2, b3;
	scanf("%d.%d.%d %d.%d.%d", &a1, &a2, &a3, &b1, &b2, &b3);
	int price = a1*Galleon + a2*Sickle + a3;
	int money = b1*Galleon + b2*Sickle + b3;
	int changed = money - price;	//找零的前
	if(changed < 0){
		printf("-");
		changed = -changed;
	} 
	printf("%d.%d.%d", changed/Galleon, changed%Galleon/Sickle, changed%Sickle);
	return 0;
 } 
