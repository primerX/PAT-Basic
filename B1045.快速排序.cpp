#include<cstdio>
#include<algorithm>
using namespace std;
const int MAXN = 100010;
int leftMax[MAXN] = {0};
int rightMin[MAXN] = {0};
int main()
{
	int n, num[MAXN];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	leftMax[0] = 0;
	for(int i=1; i<n; i++){
		leftMax[i] = max(leftMax[i-1], num[i-1]);
	}
	rightMin[n-1] = 0x3fffffff;		//一个很大的数 
	for(int i=n-2; i>=0; i--){
		rightMin[i] = min(num[i+1], rightMin[i+1]);
	}
	int ans[MAXN], cnt = 0;
	for(int i=0; i<n; i++){
		if(num[i] > leftMax[i] && num[i] < rightMin[i]){
			ans[cnt++] = num[i];
		}
	}
	sort(ans, ans+cnt);		//从小到大排序
	printf("%d\n", cnt);
	for(int i=0; i<cnt; i++){
		printf("%d", ans[i]);
		if(i < cnt-1) printf(" ");
	} 
	printf("\n");
	return 0;
 } 
