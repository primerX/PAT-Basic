#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

const int MAXN = 10010;
int ans[MAXN];	

int main()
{
	//ans 用来存储每个数字出现的次数, 初始全部为 -1 
	fill(ans, ans + MAXN, -1);
	int n, num[MAXN];	// num 用来存储输入的数字 
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &num[i]);
		ans[abs(num[i] - i)]++;
	}
	
	for(int i = MAXN-1; i >= 0; i--){
		if(ans[i] > 0){		// ans[i] == 0 表示 i 只出现一次，没有重复 
			printf("%d %d\n", i, ans[i]+1);
		}
	} 
	return 0;
 } 
