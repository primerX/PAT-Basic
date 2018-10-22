#include<cstdio>

struct person{
	char name[10];		//姓名
	int yy, mm, dd;		//年 月 日 
}temp, youngest, oldest, right, left;

void init()
{
	youngest.yy = left.yy = 1814;
    oldest.yy = right.yy = 2014;
    youngest.mm = oldest.mm = left.mm = right.mm = 9;
    youngest.dd = oldest.dd = left.dd = right.dd = 6;
}

bool less(person a, person b) {
    if(a.yy != b.yy) return a.yy <= b.yy;
    else if(a.mm != b.mm) return a.mm <= b.mm;
    else return a.dd <= b.dd;
}
bool more(person a, person b) {
    if(a.yy != b.yy) return a.yy >= b.yy;
    else if(a.mm != b.mm) return a.mm >= b.mm;
    else return a.dd >= b.dd;
}

int main()
{
	init();
	int n, cnt = 0;		//cnt 计算有效个数 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s %d/%d/%d", temp.name, &temp.yy, &temp.mm, &temp.dd);
		if(more(temp, left) && less(temp, right)) {
            cnt++;
            if(less(temp, oldest)) oldest = temp;
            if(more(temp, youngest)) youngest = temp;
        }
	}
	if(cnt == 0) printf("0\n");
	else printf("%d %s %s\n", cnt, oldest.name, youngest.name);
	return 0;
}
