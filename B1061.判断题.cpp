#include<cstdio>

const int MAXN = 110;

int main()
{
	int n, m;	//ѧ����������Ŀ����
	scanf("%d %d", &n, &m);
	// ÿ��������֣���, ѧ���Ļظ� 
	int fullScore[MAXN], answers[MAXN], response[MAXN];
	for(int i=0; i<m; i++){
		scanf("%d", &fullScore[i]);		//�洢ÿ��������� 
	} 
	for(int i=0; i<m; i++){
		scanf("%d", &answers[i]);		//�洢ÿ����Ĵ� 
	}
	for(int i=0; i<n; i++){
		int score = 0;
		for(int j=0; j<m; j++){
			scanf("%d", &response[j]);	//ѧ���Ĵ� 
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
