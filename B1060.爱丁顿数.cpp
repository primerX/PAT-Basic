#include<cstdio>
#include<algorithm>
using namespace std;

const int MAXN = 100010;

bool cmp(int a, int b){
	return a > b;		//�Ӵ�С���� 
}

int main()
{
	int n, num[MAXN];
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &num[i]);
	}
	sort(num+1, num+n+1, cmp);	//��������дӴ�С����
	int ans = 0, p = 1;
	while(p < n+1 && num[p] > p){
		p++;
		ans++;
	} 
	printf("%d\n", ans);
	return 0;
}
