#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

const int MAXN = 10^110;
char num_to_string[15][6] = {"ling", "yi",
	"er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
int main()
{
	string n;
	int sum = 0;
	cin >> n;
	for(int i=0; i<n.length(); i++){
		sum = sum + (n[i] - '0');
	}
	int ans[11], cnt = 0;
	do{
		ans[cnt++] = sum % 10;
		sum /= 10;
	}while(sum != 0);
	
	for(int i=cnt-1; i>=0; i--){
		printf("%s", num_to_string[ans[i]]);
		if(i > 0) printf(" ");
	}
	return 0;
}
