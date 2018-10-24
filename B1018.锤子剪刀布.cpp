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
	int ansA[3] = {0}, ansB[3] = {0};		//分别代表甲乙的胜负平次数 
	int handA[3] = {0}, handB[3] = {0};		//记录A 和 B的手势 
	scanf("%d", &n);
	int numA, numB; 
	for(int i=0; i<n; i++){
		getchar();		//吸收换行符 
		scanf("%c %c", &a, &b);
		numA = change(a);
		numB = change(b);
		if( (numA+1) % 3 == numB){	//甲胜 
			ansA[0]++;		//甲胜一次 
			ansB[2]++;		//已负一次 
			handA[numA]++;		//甲赢的手势加一 
		}else if(numA == numB){		//平局
			ansA[1]++;
			ansB[1]++;
		}else{		//已胜 
			ansA[2]++;		//甲负一次 
			ansB[0]++;
			handB[numB]++;		//已赢的手势加一 
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
