#include<cstdio>

const int Galleon = 17 * 29;	//1��Galleon �һ� 17*29��Kunt
const int Sickle = 29;		//1�� Sickle �һ� 29 �� Kunt

int main()
{
	int a1, a2, a3, b1, b2, b3;
	scanf("%d.%d.%d %d.%d.%d", &a1, &a2, &a3, &b1, &b2, &b3);
	int price = a1*Galleon + a2*Sickle + a3;
	int money = b1*Galleon + b2*Sickle + b3;
	int changed = money - price;	//�����ǰ
	if(changed < 0){
		printf("-");
		changed = -changed;
	} 
	printf("%d.%d.%d", changed/Galleon, changed%Galleon/Sickle, changed%Sickle);
	return 0;
 } 
