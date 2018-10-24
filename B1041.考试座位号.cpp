#include<cstdio>

const int MAXN = 1010; 

struct Student{
	long long id;
	int examSeat;
}stu[MAXN];

int main()
{
	int n, m, num, examSeat, testSeat;
	long long id;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%lld %d %d", &id, &testSeat, &examSeat);
		stu[testSeat].id = id;
		stu[testSeat].examSeat = examSeat;
	}
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &num);
		printf("%lld %d\n", stu[num].id, stu[num].examSeat);
	} 
	return 0;
}
