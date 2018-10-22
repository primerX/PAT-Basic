#include<cstdio>
#include<cstring>

struct bign{
	int d[1010];
	int len;
	bign(){
		memset(d, 0, sizeof(d));
		len = 0;
	}
};

bign change(char a[])	//������Ԫ�ش洢��bign�� 
{
	bign c;
	c.len = strlen(a);
	for(int i=0; i<c.len; i++){
		c.d[i] = a[c.len-1-i] - '0';
	}
	return c;
}

bign divide(bign a, int b, int &r){		//a ���� b������Ϊ r 
	bign c;
	c.len = a.len;
	for(int i=a.len-1; i>=0; i--){
		r = r * 10 + a.d[i];
		if(r/b < 0){
			c.d[i] = 0;
		}else{
			c.d[i] = r/b;
			r = r % b;
		}
	}
	// ȥ������� 0 ����������һ�� 0 
	while(c.len-1 >= 1 && c.d[c.len-1]==0) c.len--;
	return c;
}

void print(bign a)
{
	for(int i=a.len-1; i>=0; i--){
		printf("%d", a.d[i]);
	}
}

int main()
{
	char a[1010];
	int b, r=0;
	scanf("%s %d", a, &b);
	bign c = change(a);
	print(divide(c, b, r));
	printf(" %d", r);
	return 0;
}
