#include<cstdio>
#include<algorithm>
using namespace std;

bool Override[5000] = {false};	//标记数是否被覆盖
int number[200];	//记录输入的数 

bool cmp(int a, int b)
{
	return a > b;			//从大到小排序 
}

int main()
{
	int n, num;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &number[i]);
		num = number[i];
		while(num != 1){
			if(num % 2 == 0){
				num /= 2; 
			}else{
				num = (3 * num + 1) / 2;
			}
			Override[num] = true;
		}
	}
	int cnt = 0;		//记录没被覆盖的数字
	for(int i=0; i<n; i++){
		if(Override[number[i]] == false){
			cnt++;
		}
	} 
	sort(number, number + n, cmp);	//从大到小排序
	for(int i=0; i<n; i++){
		if(Override[number[i]] == false){
			//输出未被覆盖的数 
			printf("%d", number[i]);
			cnt--;
			if(cnt > 0) printf(" ");
		}
	} 
	return 0;
}
