#include<cstdio>
#include<cmath>

const int MAXN = 110;

int main()
{
	int n, m;	//������������
	scanf("%d %d", &n, &m);
	int teaScore, score;		//��ʦ���ķ���, ��������ķ��� 
	for(int i=0; i<n; i++){
		scanf("%d", &teaScore);
		//������, ��С����,����С�������ܺ�, ��������Ч���� 
		int max = 0, min = 100, sum = 0, cnt = n-3;
		for(int j=0; j<n-1; j++){
			scanf(" %d", &score);	
			if(score > m || score < 0){	//��Ч����
				cnt--;
				continue;
			}else{		//������Ч
				if(max < score) max = score;
				if(min > score) min = score;
				sum += score;
			}
		}
		//printf("max = %d, min = %d", max, min);
		sum = (sum - max - min) / cnt;
		//printf(" sum = %d\n", sum);
		double ans = sum + teaScore;
		//���ԶԽ������ 0.5 ��ת���� int ��ʵ���������� 
		printf("%d\n", (int)round(ans/2));
	} 
	return 0;
}
