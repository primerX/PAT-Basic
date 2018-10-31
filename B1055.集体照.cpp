#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<vector>
using namespace std;

const int MAXN = 10010;

struct Person{
	char name[10];		//����
	int high;		//���
}per[MAXN];

bool cmp(Person a, Person b)
{
	//��߸ߵ�����ǰ�����һ�������ְ��ֵ������� 
	if(a.high != b.high) return a.high > b.high;
	else return strcmp(a.name, b.name) < 0;
}

int main()
{
	int n, k;
	int m;		//m ��ʾÿ�ŵĸ��� 
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%s %d", &per[i].name, &per[i].high);
	}
	sort(per, per+n, cmp);
	int t = 0, row = k;
	while(row){ 
		if(row == k){		//�������һ�ŵĸ��� 
			m = n - n / k * (k - 1);	 
		}else{
			m = n / k;
		}
		vector<string> stemp(m);
		stemp[m / 2] = per[t].name;
		// ���һ�� 
		int j = m/2 - 1;
		for(int i=t+1; i<t+m; i+=2){
			stemp[j--] = per[i].name;
		}
		//�ұ�һ��
		j = m/2 + 1;
		for(int i=t+2; i<t+m; i+=2){
			stemp[j++] = per[i].name;
		}
		//�����ǰ�� 
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

