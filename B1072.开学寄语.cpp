#include<cstdio>
#include<vector>
using namespace std;

const int MAXN = 1010; 
bool hashTable[100000] = {false};	//������¼��Ʒ����Ƿ�ᱻ�� 

int main()
{
	int n, m;
	int itemID, queryID;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d", &itemID);
		hashTable[itemID] = true;
	}
	int k, temp;
	int stuCnt = 0, itemCnt = 0;	//ѧ����������Ʒ���� 
	
	for(int i=0; i<n; i++){
		char name[10];
		bool flag = false;
		scanf("%s %d", &name, &k);
		for(int j=0; j<k; j++){
			scanf("%d", &temp);
			if(hashTable[temp]){
				if(!flag){
					printf("%s:", name);
					flag = true;
				}
				printf(" %04d", temp);
				itemCnt++;
			}
		}
		if(flag){
			printf("\n");
			stuCnt++;
		}
	}
	printf("%d %d\n", stuCnt, itemCnt);
	return 0;
}
