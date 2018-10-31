#include<cstdio>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int n, m, temp, k;	// n��ѧ����m����Ŀ
	scanf("%d %d", &n, &m);
	//right[i]�����洢�� i �����ȷ�� 
	vector<set<char> > right(m);	
	//total[i] �����洢��Ŀ���ܷ�,wrongCnt[i]�����洢�� i ����������
	vector<int> total(m), wrongCnt(m);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &total[i], &temp, &k);
		for(int j=0; j<k; j++){
			char c;
			scanf(" %c", &c);		//ע����Ƹ�ʽ�Ŀո� 
			right[i].insert(c);
		}
	}
	for(int i=0; i<n; i++){
		int score = 0;
		getchar();		//���ջ��з�
		for(int j=0; j<m; j++){
			if(j != 0) scanf(" ");
			scanf("(%d", &k);
			set<char> st;	//��ÿһ��ѧ���Ĵ𰸲��뼯��st��
			char c;
			for(int l=0; l<k; l++){
				scanf(" %c", &c);	//ע��ո�
				st.insert(c); 
			} 
			scanf(")");
			if(st == right[j]){		//����ȷ 
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
