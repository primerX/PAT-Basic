#include<cstdio>

const int MAXN = 110;

int main()
{
	int n, m;	//学生人数，题目数量
	scanf("%d %d", &n, &m);
	// 每道题的满分，答案, 学生的回复 
	int fullScore[MAXN], answers[MAXN], response[MAXN];
	for(int i=0; i<m; i++){
		scanf("%d", &fullScore[i]);		//存储每道题的满分 
	} 
	for(int i=0; i<m; i++){
		scanf("%d", &answers[i]);		//存储每道题的答案 
	}
	for(int i=0; i<n; i++){
		int score = 0;
		for(int j=0; j<m; j++){
			scanf("%d", &response[j]);	//学生的答案 
		}
		for(int j=0; j<m; j++){
			if(response[j] == answers[j]){
				score += fullScore[j];
			}
		}
		printf("%d\n", score);
	} 
	return 0;
}
