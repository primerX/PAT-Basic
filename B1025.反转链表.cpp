#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 100010;

struct Node{
	int address, data, next;
	int order;		//˳�� 
}node[maxn];

bool cmp(Node a, Node b)
{
	return a.order < b.order;
}

int main()
{
	for(int i=0; i<maxn; i++){
		node[i].order = maxn;	//��ʼʱ�����н�㶼����Ϊ��Ч 
	}
	int origin, n, k;
	int address, data, next;
	scanf("%d %d %d", &origin, &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &address);
		scanf("%d %d", &node[address].data, &node[address].next);
		node[address].address = address;
	}
	int p = origin, cnt = 0;	//cnt ������¼��Ч������ 
	while(p != -1){
		node[p].order = cnt;
		p = node[p].next;
		cnt++;
	}
	sort(node, node+maxn, cmp);	//�������ͷ��β���� 
	n = cnt;	//��Ч���� 
	for(int i=0; i<n/k; i++){
		for(int j=(i+1)*k-1; j>i*k; j--){	//���������һ��
			printf("%05d %d %05d\n", node[j].address, node[j].data, node[j-1].address); 
		} 
		//�������һ�����
		printf("%05d %d ", node[i*k].address, node[i*k].data); 
		if(i < n/k-1){	//�������һ��
			printf("%05d\n", node[(i+2)*k-1].address); 
		}else{		//�����һ�� 
			if(n % k == 0){		//�պ������һ�����
				printf("-1\n");	
			}else{		//�������һ�����
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
