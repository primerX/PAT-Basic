#include<iostream>
using namespace std;

int main()
{
	int T, cnt = 1;		//cnt 用来控制输出格式 
	long long a, b, c;
	cin >> T;
	for(int i=0; i<T; i++){
		cin >> a >> b >> c;
		if(a + b > c){
			printf("Case #%d: true\n", cnt++);
		}else{
			printf("Case #%d: false\n", cnt++);
		}
	}
	return 0;
 } 
