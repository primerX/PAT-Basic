#include<cstdio>

int main()
{
	int n, A1, A2, B1, B2;
	int ansA = 0, ansB = 0;		//最终甲乙各自喝酒的杯数 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
		int sum = A1 + B1;
		if(A2 == sum && B2 != sum){	//甲赢 
			ansB++;		//已加一杯 
		}else if(A2 != sum && B2 == sum){	//已赢
			ansA++; 
		}
	}
	printf("%d %d", ansA, ansB);
	return 0;
}
