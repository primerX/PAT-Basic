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
	if(n1*m2 > n2*m1){	//如果第一个分数比第二个分数 
		swap(n1, n2);	//交换顺序 
		swap(m1, m2);
	}
	int num = 1;
	int cnt = 1;	//控制输出格式
	while(n1*k >= num*m1) num++;	//n1/m1 >= num/k
	//n1/m1 < num/k && num/k < n2/m2
	while(n1*k < num*m1 && num*m2 < n2*k){
		if(gcd(num, k) == 1){	//没有公因子
			printf("%s%d/%d", cnt==1?"":" ", num, k);
			cnt++; 
		}
		num++;
	} 
	return 0;
}
