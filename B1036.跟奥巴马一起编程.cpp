#include<cstdio>

int main()
{
	int n;
	char c;
	scanf("%d %c", &n, &c);
	int row, col = n;
	if(n % 2 == 1) row = col / 2 + 1;
	else row = col / 2;
	for(int i=0; i<col; i++){	//��һ�� 
		printf("%c", c);
	}
	printf("\n");
	for(int i=0; i<row-2; i++){		//�� 2~row-1�� 
		printf("%c", c);
		for(int j=0; j<col-2; j++){
			printf(" ");
		}
		printf("%c", c);
		printf("\n");
	}
	for(int i=0; i<col; i++){		//���һ�� 
		printf("%c", c);
	}
	
	return 0;
}
