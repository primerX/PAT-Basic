#include<cstdio>
#include<cmath>

int main()
{
	double R1, P1, R2, P2;
	scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);
	double A1 = R1*cos(P1), B1 = R1*sin(P1);
	double A2 = R2*cos(P2), B2 = R2*sin(P2);
	double A = A1*A2 - B2*B1;
	double B = A1*B2 + A2*B1;
	if(A >= -0.005 && A < 0){
		printf("0.00");
	}else{
		printf("%.2lf", A);
	}
	if(B >= -0.005 && B<0){
		printf("+0.00i", B);
	}else if(B >= 0){
		printf("+%.2lfi", B);
	}else{
		printf("%.2lfi", B);
	}
	return 0;
 } 
