#include<cstdio>
#include<cstring>

const int manx = 110;
char A[manx], B[manx], ans[manx];

void reverse(char s[]){		//��ת�ַ���
	int len = strlen(s);
	for(int i=0; i<len/2; i++){
		int temp = s[i];
		s[i] = s[len - i - 1];
		s[len - 1 - i] = temp;
	}
}

int main(int argc, char const *argv[])
{
	scanf("%s %s", &A, &B);		
	reverse(A);		//��A,B��ת
	reverse(B);
	int lenA = strlen(A);	//A��B��Ӧ�ĳ���
	int lenB = strlen(B);
	int len = lenA > lenB ? lenA : lenB;	//A��B�Ľϴ󳤶�
	for(int i=0; i<len; i++){	//�ӵ�λ��ʼ
		int numA = i < lenA ? A[i] - '0' : 0;	//numA��ӦA[i]
		int numB = i < lenB ? B[i] - '0' : 0;	//numB��ӦB[i]
		if(i % 2 == 0){		//��ǰλ i ��ż��
			int temp = (numA + numB) % 13;		//����ģ��13
			if(temp == 10) ans[i] = 'J';		//����10,11,12
			else if(temp == 11) ans[i] = 'Q';
			else if(temp == 12) ans[i] = 'K';
			else ans[i] = temp + '0';  //0~9
		}else{		//��ǰλ������
			int temp = numB - numA;		//��
			if(temp < 0) temp += 10;	//���С��0�������10
			ans[i] = temp + '0';		//����Ӧ���ַ�
		}
	}
	reverse(ans);	//��ת����ַ���
	puts(ans);		//������
	return 0;
}
