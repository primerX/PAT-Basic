#include<iostream>
#include<vector>
using namespace std;

const int MAXN = 100010;

struct Node{
	int data, next;
}list[MAXN];

// 将 < 0 , [0, k], >k 的三部分结点分别保存在 v[0], v[1], v[2] 中 
vector<int> v[3]; 

int main()
{
	int start, n, k, address;
	scanf("%d %d %d", &start, &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &address);
		scanf("%d %d", &list[address].data, &list[address].next);
	}
	int p = start;
	while(p != -1){
		int data = list[p].data;
		if(data < 0){
			v[0].push_back(p);
		}else if(data >= 0 && data <= k){
			v[1].push_back(p);
		}else{
			v[2].push_back(p);
		}
		p = list[p].next;
	}
	int flag = 0;	//用来控制输出格式 
	for(int i=0; i<3; i++){
		for(int j=0; j<v[i].size(); j++){
			if(flag == 0){
				printf("%05d %d ", v[i][j], list[v[i][j]].data);
				flag = 1;
			}else{
				printf("%05d\n%05d %d ", v[i][j], v[i][j], list[v[i][j]].data);
			}
		}
	}
	printf("-1");
	return 0;
}
