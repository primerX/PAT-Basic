#include<cstdio>

int main()
{
	int a, da, b, db;
	scanf("%d %d %d %d", &a, &da, &b, &db);
	int ansA = 0, ansB = 0;
	while(a != 0){
		int temp = a % 10;
		if(temp == da){
			ansA = ansA * 10 + da;
		}
		a /= 10;
	}
	while(b != 0){
		int temp = b % 10;
		if(temp == db){
			ansB = ansB * 10 + db;
		}
		b /= 10;
	}
	printf("%d\n", ansA + ansB);
	return 0;
}
