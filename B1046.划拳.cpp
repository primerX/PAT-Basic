#include<cstdio>

int main()
{
	int n, A1, A2, B1, B2;
	int ansA = 0, ansB = 0;		//���ռ��Ҹ��ԺȾƵı��� 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d %d %d", &A1, &A2, &B1, &B2);
		int sum = A1 + B1;
		if(A2 == sum && B2 != sum){	//��Ӯ 
			ansB++;		//�Ѽ�һ�� 
		}else if(A2 != sum && B2 == sum){	//��Ӯ
			ansA++; 
		}
	}
	printf("%d %d", ansA, ansB);
	return 0;
}
