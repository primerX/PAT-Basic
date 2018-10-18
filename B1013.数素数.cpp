#include<cstdio>
#include<cmath>
const int maxn = 1000010;
int Prime[1000010];

bool isPrime(int a) {
    for (int i = 2; i * i <= a; i++)
        if(a % i == 0) return false;
    return true;
}


int main()
{
	int m, n;
	int cnt=0;
	scanf("%d %d", &m, &n);
	
	for(int i=2; i<maxn; i++){
		if(isPrime(i) == true){
			Prime[cnt++] = i; 
			if(cnt == n) break;
		}
	}
	cnt = 0;
	for(int i=m-1; i<n; i++){
		printf("%d", Prime[i]);
		cnt++;
		if(cnt%10 != 0 && i<n-1) printf(" ");
		else printf("\n");
	}
	return 0;
}
