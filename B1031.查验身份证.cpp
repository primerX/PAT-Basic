#include<cstdio>

int weight[20] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char check[15] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};

int main()
{
	int n;
	char str[20];
	bool flag = true;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%s", str); 
		int j, last = 0;
		for(j=0; j<17; j++){
			last = last + (str[j] - '0')*weight[j];
			if(!(str[j] >= '0' && str[j] <= '9')){
				break;
			}
		}
		if(j < 17){
			flag = false;
			printf("%s\n", str);
		}else{
			if(check[last % 11] != str[17]){
				flag = false;
				printf("%s\n", str);
			}	
		}
	}
	if(flag == true) printf("All passed\n");
	return 0;
 } 
