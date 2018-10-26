#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 100010;

struct Node{
	int address, data, next;
	int order;		//顺序 
}node[maxn];

bool cmp(Node a, Node b)
{
	return a.order < b.order;
}

int main()
{
	for(int i=0; i<maxn; i++){
		node[i].order = maxn;	//初始时，所有结点都设置为无效 
	}
	int origin, n, k;
	int address, data, next;
	scanf("%d %d %d", &origin, &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &address);
		scanf("%d %d", &node[address].data, &node[address].next);
		node[address].address = address;
	}
	int p = origin, cnt = 0;	//cnt 用来记录有效结点个数 
	while(p != -1){
		node[p].order = cnt;
		p = node[p].next;
		cnt++;
	}
	sort(node, node+maxn, cmp);	//将链表从头到尾排序 
	n = cnt;	//有效个数 
	for(int i=0; i<n/k; i++){
		for(int j=(i+1)*k-1; j>i*k; j--){	//不包括最后一块
			printf("%05d %d %05d\n", node[j].address, node[j].data, node[j-1].address); 
		} 
		//对于最后一个结点
		printf("%05d %d ", node[i*k].address, node[i*k].data); 
		if(i < n/k-1){	//不是最后一块
			printf("%05d\n", node[(i+2)*k-1].address); 
		}else{		//是最后一块 
			if(n % k == 0){		//刚好是最后一个结点
				printf("-1\n");	
			}else{		//不是最后一个结点
				printf("%05d\n", node[(i+1)*k].address);
				for(int j = n/k * k; j<n; j++){
					printf("%05d %d ", node[j].address, node[j].data);
					if(j < n-1){
						printf("%05d\n", node[j+1].address);
					}else{
						printf("-1\n");
					}
				} 
			}
		}
	} 
	return 0;
}
