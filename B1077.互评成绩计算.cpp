#include<cstdio>
#include<cmath>

const int MAXN = 110;

int main()
{
	int n, m;	//分组数，满分
	scanf("%d %d", &n, &m);
	int teaScore, score;		//老师给的分数, 其他组给的分数 
	for(int i=0; i<n; i++){
		scanf("%d", &teaScore);
		//最大分数, 最小分数,所有小组评分总和, 分数的有效个数 
		int max = 0, min = 100, sum = 0, cnt = n-3;
		for(int j=0; j<n-1; j++){
			scanf(" %d", &score);	
			if(score > m || score < 0){	//无效分数
				cnt--;
				continue;
			}else{		//分数有效
				if(max < score) max = score;
				if(min > score) min = score;
				sum += score;
			}
		}
		//printf("max = %d, min = %d", max, min);
		sum = (sum - max - min) / cnt;
		//printf(" sum = %d\n", sum);
		double ans = sum + teaScore;
		//可以对结果加上 0.5 后转换成 int 来实现四舍五入 
		printf("%d\n", (int)round(ans/2));
	} 
	return 0;
}
