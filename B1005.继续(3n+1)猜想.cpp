#include<cstdio>
#include<algorithm>
using namespace std;

bool Override[5000] = {false};	//������Ƿ񱻸���
int number[200];	//��¼������� 

bool cmp(int a, int b)
{
	return a > b;			//�Ӵ�С���� 
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
	int cnt = 0;		//��¼û�����ǵ�����
	for(int i=0; i<n; i++){
		if(Override[number[i]] == false){
			cnt++;
		}
	} 
	sort(number, number + n, cmp);	//�Ӵ�С����
	for(int i=0; i<n; i++){
		if(Override[number[i]] == false){
			//���δ�����ǵ��� 
			printf("%d", number[i]);
			cnt--;
			if(cnt > 0) printf(" ");
		}
	} 
	return 0;
}
