#include<cstdio>
#include<cmath>
#include<set>
using namespace std;

const int MAXN = 10010;
int hashTable[10010] = {0};	//用来记录每个ID 的排名, 初始全为 0 

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
	int n, numId;	//参赛人数, numID用来存放ID 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &numId);
		hashTable[numId] = i+1; 
	}
	int k, queryID;
	set<int> st;	//集合 st 用来检查ID是否被重查 
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d", &queryID);
		printf("%04d: ", queryID);
		if(hashTable[queryID] == 0){	//学号不存在
			printf("Are you kidding?\n");
			continue;
		}
		if(st.find(queryID) == st.end()){	//没有重复
			st.insert(queryID); 
		}else{
			printf("Checked\n");
			continue;
		}
		if(isPrime(hashTable[queryID])){	//排名为素数
			printf("Minion\n"); 
		}else if(hashTable[queryID] == 1){	//排名第一 
			printf("Mystery Award\n");
		}else{
			printf("Chocolate\n");
		}
	}
	return 0;
}
