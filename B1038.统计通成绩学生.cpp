#include<cstdio>

const int MAXN = 100010;
int hashTable[110] = {0};		//记录每个分数出现的次数 
int main()
{
	int n, k, num[MAXN];
	int score[MAXN];
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &score[i]);
		hashTable[score[i]]++;
	} 
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d", &num[i]);
	}
	for(int i=0; i<k; i++){
		printf("%d", hashTable[num[i]]);
		if(i < k-1) printf(" ");
	}
	return 0;
}
