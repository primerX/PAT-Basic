#include<cstdio>
#include<cstring>
const int MAXN = 100;

int main()
{
	char a[MAXN], b[MAXN];
	int n, cnt = 0;		//cnt 用来记录有效的个数 
	double temp, sum = 0.0;	//sum 用来记录有效数字的和 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", a);
		sscanf(a, "%lf", &temp);
		sprintf(b, "%.2lf", temp);
		int flag = 0;
		for(int j=0; j<strlen(a); j++){
			if(a[j] != b[j]) flag = 1;
		}
		if(flag || temp <-1000 || temp > 1000){
			printf("ERROR: %s is not a legal number\n", a);
		}else{
			sum += temp;
			cnt++;
		}
	} 
	if(cnt == 1){
		printf("The average of 1 number is %.2lf\n", sum/cnt);
	}else if(cnt == 0){
		printf("The average of 0 numbers is Undefined\n");
	}else{
		printf("The average of %d numbers is %.2lf\n", cnt, sum/cnt);
	}
	return 0;
}
