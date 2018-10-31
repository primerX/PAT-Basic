#include<cstdio>
#include<vector>
#include<set>
using namespace std;

vector<int> couple(100000, -1);
vector<int> guest(10000);
vector<int> isExist(100000, 0);	//isExist[1111] = 1 ��ʾ 1111 �İ��³������ɶ��� 
int main()
{
	int n, manID, femanID;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &manID, &femanID);
		couple[manID] = femanID;
		couple[femanID] = manID;
	}
	int m;
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d", &guest[i]);
		if(couple[guest[i]] != -1){	//�ÿ��˴��ڰ���
			isExist[couple[guest[i]]] = 1;
		}
	}
	set<int> st;
	for(int i=0; i<m; i++){
		if(!isExist[guest[i]]){		//������˵���żû���ֻ򲻴��� 
			st.insert(guest[i]); 
		}
	}
	printf("%d\n", st.size());
	for(set<int>::iterator it = st.begin(); it!=st.end(); it++){
		if(it != st.begin()) printf(" ");
		printf("%05d", *it);
	}
	return 0;
}
