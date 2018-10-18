#include<cstdio>

int main()
{
	int n;
	int num[1010];
	int A[6] = {0};		//记录A1~A5的个数
	int ans[6] = {0};		//存储每一种条件的结果 
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &num[i]);
	}
	for(int i=0; i<n; i++){
		if(num[i] % 5 == 0){	//A1
			if(num[i] % 2 == 0){
				A[0]++;
				ans[0] += num[i];
			}
		}else if(num[i] % 5 == 1){	//A2
			if(A[1] % 2 == 0){
				ans[1] += num[i];
			}else{
				ans[1] -= num[i];
			}
			A[1]++;
		}else if(num[i] % 5 == 2){	//A3
			A[2]++;
			ans[2]++;
		}else if(num[i] % 5 == 3){	//A4
			A[3]++;		//个数加一
			ans[3] += num[i]; 
		}else{		//A5
			A[4]++;
			if(ans[4] < num[i]){
				ans[4] = num[i];
			}
		}
	}
	if(A[0] == 0) printf("N ");
	else printf("%d ", ans[0]);
	
	if(A[1] == 0) printf("N ");
	else printf("%d ", ans[1]);
	
	if(A[2] == 0) printf("N ");
	else printf("%d ", ans[2]);
	
	if(A[3] == 0) printf("N ");
	else printf("%.1f ", (double)ans[3]/A[3]);
	
	if(A[4] == 0) printf("N");
	else printf("%d", ans[4]);
	return 0;
}
