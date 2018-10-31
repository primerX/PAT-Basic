#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
using namespace std;

const int MAXN = 10010;

struct Person{
	char name[10];		//姓名
	int high;		//身高
}per[MAXN];

bool cmp(Person a, Person b)
{
	//身高高的排在前，身高一样的名字按字典序排序 
	if(a.high != b.high) return a.high > b.high;
	else return strcmp(a.name, b.name) < 0;
}

int main()
{
	int n, k;
	int m;		//m 表示每排的个数 
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%s %d", &per[i].name, &per[i].high);
	}
	sort(per, per+n, cmp);
	int t = 0, row = k;
	while(row){ 
		if(row == k){		//计算最后一排的个数 
			m = n - n / k * (k - 1);	 
		}else{
			m = n / k;
		}
		vector<string> stemp(m);
		stemp[m / 2] = per[t].name;
		// 左边一列 
		int j = m/2 - 1;
		for(int i=t+1; i<t+m; i+=2){
			stemp[j--] = per[i].name;
		}
		//右边一列
		j = m/2 + 1;
		for(int i=t+2; i<t+m; i+=2){
			stemp[j++] = per[i].name;
		}
		//输出当前排 
		cout << stemp[0];
		for(int i=1; i<m; i++){
			cout << " " << stemp[i];
		}
		printf("\n");
		t += m;
		row--;
	}
	return 0;
}

