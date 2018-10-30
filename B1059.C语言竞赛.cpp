#include<cstdio>
#include<cmath>
#include<set>
using namespace std;

const int MAXN = 10010;
int hashTable[10010] = {0};	//������¼ÿ��ID ������, ��ʼȫΪ 0 

bool isPrime(int n)
{
	if(n <= 1) return false;
	int sqr = sqrt((double)n);
	for(int i=2; i <= sqr; i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main()
{
	int n, numId;	//��������, numID�������ID 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &numId);
		hashTable[numId] = i+1; 
	}
	int k, queryID;
	set<int> st;	//���� st �������ID�Ƿ��ز� 
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d", &queryID);
		printf("%04d: ", queryID);
		if(hashTable[queryID] == 0){	//ѧ�Ų�����
			printf("Are you kidding?\n");
			continue;
		}
		if(st.find(queryID) == st.end()){	//û���ظ�
			st.insert(queryID); 
		}else{
			printf("Checked\n");
			continue;
		}
		if(isPrime(hashTable[queryID])){	//����Ϊ����
			printf("Minion\n"); 
		}else if(hashTable[queryID] == 1){	//������һ 
			printf("Mystery Award\n");
		}else{
			printf("Chocolate\n");
		}
	}
	return 0;
}
