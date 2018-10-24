#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

const int MAXN = 100010;
const int MOD = 1000000007;
int leftNumP[MAXN] = {0};

int main()
{
	string str;
	getline(cin, str);
	for(int i=0; i<str.length(); i++){
		if(str[i] == 'P'){
			leftNumP[i]++;
		}
		if(i > 0){
			leftNumP[i] += leftNumP[i-1];
		}
	}
	int rightNumT = 0, ans = 0;
	for(int i=str.length()-1; i>=0; i--){
		if(str[i] == 'T'){
			rightNumT++;
		}else if(str[i] == 'A'){
			ans = (ans + leftNumP[i]*rightNumT) % MOD;
		}
	}
	printf("%d", ans);
	return 0;
}
