#include<cstdio>
#include<cmath>

const int maxn = 1000000;
int Prime[maxn];	//��־ i �ǲ������� 
int num = 0;	//��¼�����ĸ���

bool isPrime(int n)		//�ж� n �ǲ������� 
{
//	if(n == 2) return true;
	double sqr = sqrt(n);
	for(int i=2; i<=sqr; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main()
{
	int n, cnt = 0;
	int ans = 0;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		if(isPrime(i) == true){
			Prime[cnt++] = i;
		}
	}
	for(int i=0; i<cnt; i++){
		if(Prime[i+1] - Prime[i] == 2){
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
