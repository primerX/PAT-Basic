#include<cstdio>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a > b;		//�Ӵ�С���� 
}

int to_number(int a[]){	//������ת�������� 
	int result = 0;
	for(int i=0; i<4; i++){
		result = result * 10 + a[i];
	}
	return result;
} 

void to_array(int n, int num[]){
	for(int i=0; i<4; i++){
		num[i] = n % 10;
		n /= 10;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	int num[5];
	while(1){
		to_array(n, num);
		sort(num, num+4, cmp);		//�Ӵ�С����
		int max = to_number(num);
		sort(num, num+4);		//��С��������
		int min = to_number(num);
		int ans = max - min;
		printf("%04d - %04d = %04d\n", max, min, ans);
		n = ans;
		if(ans == 0 || ans == 6174) break; 
	}
	return 0;
 } 
