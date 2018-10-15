#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 100000;
struct Student{
	char name[15], id[15];		//姓名，学号
	int grade; 
}stu[maxn];

bool cmp(Student a, Student b)
{
	return a.grade < b.grade;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s %s %d", &stu[i].name, &stu[i].id, &stu[i].grade);
	}
	sort(stu, stu + n, cmp);		//从小到大排序
	printf("%s %s\n", stu[n-1].name, stu[n-1].id);
	printf("%s %s\n", stu[0].name, stu[0].id); 
	return 0;
}
