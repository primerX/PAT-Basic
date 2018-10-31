#include<cstdio>
#include<vector>
#include<iostream>
using namespace std;

const int MAXN = 510;
int main()
{
	int m, n, a, b, replace;
	cin >> m >> n >> a >> b >> replace;
	int ans[MAXN][MAXN]; 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			int temp;
			cin >> temp;
			if(temp >= a && temp <= b){
				ans[i][j] = replace;
			}else{
				ans[i][j] = temp;
			}
		}
	}
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			printf("%03d", ans[i][j]);
			if(j < n-1) printf(" ");
		}
		printf("\n");
	}
	return 0;
}
