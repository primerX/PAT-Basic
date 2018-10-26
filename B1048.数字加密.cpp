#include<cstdio>
#include<cstring>

const int manx = 110;
char A[manx], B[manx], ans[manx];

void reverse(char s[]){		//反转字符串
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
	reverse(A);		//将A,B反转
	reverse(B);
	int lenA = strlen(A);	//A和B对应的长度
	int lenB = strlen(B);
	int len = lenA > lenB ? lenA : lenB;	//A和B的较大长度
	for(int i=0; i<len; i++){	//从低位开始
		int numA = i < lenA ? A[i] - '0' : 0;	//numA对应A[i]
		int numB = i < lenB ? B[i] - '0' : 0;	//numB对应B[i]
		if(i % 2 == 0){		//当前位 i 是偶数
			int temp = (numA + numB) % 13;		//和再模上13
			if(temp == 10) ans[i] = 'J';		//特判10,11,12
			else if(temp == 11) ans[i] = 'Q';
			else if(temp == 12) ans[i] = 'K';
			else ans[i] = temp + '0';  //0~9
		}else{		//当前位是奇数
			int temp = numB - numA;		//差
			if(temp < 0) temp += 10;	//如果小于0，则加上10
			ans[i] = temp + '0';		//赋相应的字符
		}
	}
	reverse(ans);	//反转结果字符串
	puts(ans);		//输出结果
	return 0;
}
