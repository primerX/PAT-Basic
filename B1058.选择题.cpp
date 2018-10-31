#include<cstdio>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int n, m, temp, k;	// n个学生，m道题目
	scanf("%d %d", &n, &m);
	//right[i]用来存储第 i 题的正确答案 
	vector<set<char> > right(m);	
	//total[i] 用来存储题目的总分,wrongCnt[i]用来存储第 i 题错误的人数
	vector<int> total(m), wrongCnt(m);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &total[i], &temp, &k);
		for(int j=0; j<k; j++){
			char c;
			scanf(" %c", &c);		//注意控制格式的空格 
			right[i].insert(c);
		}
	}
	for(int i=0; i<n; i++){
		int score = 0;
		getchar();		//吸收换行符
		for(int j=0; j<m; j++){
			if(j != 0) scanf(" ");
			scanf("(%d", &k);
			set<char> st;	//将每一个学生的答案插入集合st中
			char c;
			for(int l=0; l<k; l++){
				scanf(" %c", &c);	//注意空格
				st.insert(c); 
			} 
			scanf(")");
			if(st == right[j]){		//答案正确 
				score += total[j];
			}else{
				wrongCnt[j]++;
			}
		} 
		printf("%d\n", score);
	}
	
	int maxWrongCnt = 0;
	for(int i=0; i<m; i++){
		if(wrongCnt[i] > maxWrongCnt){
			maxWrongCnt = wrongCnt[i];
		}
	}
	if(maxWrongCnt == 0){
		printf("Too simple");
	}else{
		printf("%d", maxWrongCnt);
		for(int i=0; i<m; i++){
			if(wrongCnt[i] == maxWrongCnt){
				printf(" %d", i+1);
			}
		}
	}
	return 0;
}
