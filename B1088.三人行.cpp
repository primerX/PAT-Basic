#include<iostream>
#include<cmath>
using namespace std;

int m, x, y;

void Print(double t)
{
	if(m == t) printf(" Ping");
	else if(m < t) printf(" Cong");
	else printf(" Gai");
}
int main()
{
	scanf("%d %d %d", &m, &x, &y);
	for(int i = 99; i >= 10; i--){		//�״� 99~10 ö�� 
		int j = i % 10 * 10  + i / 10;	//�� 
		double k = abs(j - i) * 1.0 / x;	//�� 
		if(j == k * y){
			printf("%d", i);
			Print(i);
			Print(j);
			Print(k);
			return 0;
		}
	}
	printf("No Solution");
	return 0;
}
