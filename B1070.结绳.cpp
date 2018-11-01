#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	scanf("%d", &n);
	vector<int> num(n);
	for(int i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	sort(num.begin(), num.end());	//从小到大排序 
	int sum = num[0];
	for(int i=1; i<n; i++){
		sum = (sum + num[i]) / 2;
	}
	printf("%d", sum);
	return 0;
}
