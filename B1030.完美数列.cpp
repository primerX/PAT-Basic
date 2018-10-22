#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
	int n, p, ans = 1;;
	int num[100010];
	scanf("%d %d", &n, &p);
	for(int i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	sort(num, num+n);		//从小到大排序
	int i = 0, j = 0;
	while(i<n && j<n){
		while(j<n && num[j] <= (long long)num[i]*p){
			j++;
		}
		ans = max(ans, j-i);
		i++;
	}
	printf("%d", ans);
	return 0;
}
