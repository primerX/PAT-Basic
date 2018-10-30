#include<cstdio>
#include<set>
#include<algorithm>
using namespace std;

int calFri(int num)
{
	int sum = 0;
	while(num != 0){
		sum = sum + num % 10;
		num /= 10;
	}
	return sum;
}

int main()
{
	set<int> st;
	int n, num;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num);
		st.insert(calFri(num));
	}
	printf("%d\n", st.size());
	for(set<int>::iterator it = st.begin(); it!=st.end(); it++){
		if(it != st.begin()) printf(" ");
		printf("%d", *it);
	}
	return 0;
}
