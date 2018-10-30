#include<cstdio>
#include<algorithm>
using namespace std;

int gcd(int a, int b){
	return b == 0? a : gcd(b, a%b);
}

int main()
{
	int n1, m1, n2, m2, k;
	scanf("%d/%d %d/%d %d", &n1, &m1, &n2, &m2, &k);
	if(n1*m2 > n2*m1){	//�����һ�������ȵڶ������� 
		swap(n1, n2);	//����˳�� 
		swap(m1, m2);
	}
	int num = 1;
	int cnt = 1;	//���������ʽ
	while(n1*k >= num*m1) num++;	//n1/m1 >= num/k
	//n1/m1 < num/k && num/k < n2/m2
	while(n1*k < num*m1 && num*m2 < n2*k){
		if(gcd(num, k) == 1){	//û�й�����
			printf("%s%d/%d", cnt==1?"":" ", num, k);
			cnt++; 
		}
		num++;
	} 
	return 0;
}
