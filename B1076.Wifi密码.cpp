#include<cstdio>

const int MAXN = 110;

int main()
{
	int n, cnt = 0;
	scanf("%d", &n); 
	int ans[MAXN];
	char a, b;
	for(int i=0; i<n; i++){
		for(int j=0; j<4; j++){
			scanf(" %c-%c", &a, &b);
			if(b == 'T'){
				ans[cnt++] = a - 'A' + 1;
			}
		}
	}
	for(int i=0; i<cnt; i++){
		printf("%d", ans[i]);
	}
	return 0;
 } 
