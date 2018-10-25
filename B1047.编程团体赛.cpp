#include<cstdio>

const int MAXN = 1010;
int hashTable[MAXN] = {0};	//初始时，每个队伍的总分为0 

int main()
{
	int n, teamID, playID, grade;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d-%d %d", &teamID, &playID, &grade);
		hashTable[teamID] += grade;
	}
	
	int max = 0;
	for(int i=0; i<MAXN; i++){
		if(hashTable[i] > hashTable[max]) max = i;
	}
	printf("%d %d", max, hashTable[max]);
	return 0;
}
