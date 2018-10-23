#include<cstdio>

const int MAXN = 100010;

int main()
{
	int n, school[MAXN] = {0};
	scanf("%d", &n);
	int id, gd;
	for(int i=0; i<n; i++){
		scanf("%d %d", &id, &gd);
		school[id] += gd;
	}
	int max = 1;
	for(int i=0; i<n; i++){
		if(school[i] > school[max]){
			max = i;
		} 
	}
	printf("%d %d", max, school[max]);
	return 0;
}
