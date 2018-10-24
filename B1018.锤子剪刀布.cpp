#include<cstdio>

int change(char a){
	if(a == 'B') return 0;
	if(a == 'C') return 1;
	if(a == 'J') return 2;
}
char letter[3] = {'B', 'C', 'J'};
int main()
{
	int n;
	char a, b;
	int ansA[3] = {0}, ansB[3] = {0};		//�ֱ������ҵ�ʤ��ƽ���� 
	int handA[3] = {0}, handB[3] = {0};		//��¼A �� B������ 
	scanf("%d", &n);
	int numA, numB; 
	for(int i=0; i<n; i++){
		getchar();		//���ջ��з� 
		scanf("%c %c", &a, &b);
		numA = change(a);
		numB = change(b);
		if( (numA+1) % 3 == numB){	//��ʤ 
			ansA[0]++;		//��ʤһ�� 
			ansB[2]++;		//�Ѹ�һ�� 
			handA[numA]++;		//��Ӯ�����Ƽ�һ 
		}else if(numA == numB){		//ƽ��
			ansA[1]++;
			ansB[1]++;
		}else{		//��ʤ 
			ansA[2]++;		//�׸�һ�� 
			ansB[0]++;
			handB[numB]++;		//��Ӯ�����Ƽ�һ 
		}
	}
	printf("%d %d %d\n", ansA[0], ansA[1], ansA[2]);
	printf("%d %d %d\n", ansB[0], ansB[1], ansB[2]);
	int m1 = 0, m2 = 0;
	for(int i=0; i<3; i++){
		if(handA[i] > handA[m1]) m1 = i;
		if(handB[i] > handB[m2]) m2 = i;
	}
	printf("%c %c\n", letter[m1], letter[m2]);
	return 0;
 } 
