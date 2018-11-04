#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

const int MAXN = 10010;
int ans[MAXN];	

int main()
{
	//ans �����洢ÿ�����ֳ��ֵĴ���, ��ʼȫ��Ϊ -1 
	fill(ans, ans + MAXN, -1);
	int n, num[MAXN];	// num �����洢��������� 
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &num[i]);
		ans[abs(num[i] - i)]++;
	}
	
	for(int i = MAXN-1; i >= 0; i--){
		if(ans[i] > 0){		// ans[i] == 0 ��ʾ i ֻ����һ�Σ�û���ظ� 
			printf("%d %d\n", i, ans[i]+1);
		}
	} 
	return 0;
 } 
