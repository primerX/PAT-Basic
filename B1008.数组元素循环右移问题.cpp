#include<cstdio>

const int maxn = 110;
int begin[110];

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	m = m % n;
	for(int i=0; i<n; i++){
		scanf("%d", &begin[i]);
	}
	for(int i=n-m; i<n; i++){
		printf("%d ", begin[i]);
	}
	for(int i=0; i<n-m; i++){
		printf("%d", begin[i]);
		if(i < n-1-m) printf(" "); 
	}
	return 0;
}
