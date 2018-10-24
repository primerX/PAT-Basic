#include<cstdio>
#include<algorithm>
using namespace std;

typedef long long ll;
struct Fraction{
	ll up, down;	//分子,分母 
}a, b;

int gcd(ll a, ll b){
	return b == 0 ? a : gcd(b, a%b);
}

Fraction simp(Fraction f){
	if(f.down < 0){
		f.down = -f.down;
		f.up = - f.up;
	}
	ll n = gcd(abs(f.up), f.down);
	f.up = f.up / n;
	f.down = f.down / n;
	return f;
}

Fraction add(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up*f2.down + f1.down*f2.up;
	result.down = f1.down * f2.down;
	return simp(result);
}

Fraction sub(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up*f2.down - f1.down*f2.up;
	result.down = f1.down * f2.down;
	return simp(result);
}

Fraction multi(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up * f2.up;
	result.down = f1.down*f2.down;
	return simp(result);
}


Fraction divide(Fraction f1, Fraction f2)
{
	Fraction result;
	result.up = f1.up * f2.down;
	result.down = f1.down * f2.up;
	return simp(result);
}

void show(Fraction f1)
{
	f1 = simp(f1);
	if(f1.up < 0){
		printf("(");
	}
	if(f1.down == 1) printf("%lld", f1.up);
	else if(f1.down == 0) printf("Inf");
	else if(abs(f1.up) > f1.down){
		printf("%lld %lld/%lld", f1.up/f1.down, abs(f1.up)%f1.down, f1.down);
	}else{
		printf("%lld/%lld", f1.up, f1.down);
	}
	if(f1.up < 0) printf(")");
	
}
int main()
{
	scanf("%lld/%lld %lld/%lld", &a.up, &a.down, &b.up, &b.down);
	 //加法
    show(a);
    printf(" + ");
    show(b);
    printf(" = ");
    show(add(a, b));
    printf("\n");
    //减法
    show(a);
    printf(" - ");
    show(b);
    printf(" = ");
    show(sub(a, b));
    printf("\n");
    //乘法
    show(a);
    printf(" * ");
    show(b);
    printf(" = ");
    show(multi(a, b));
    printf("\n");
    //除法
    show(a);
    printf(" / ");
    show(b);
	printf(" = ");
//    if(b.up == 0) printf("Inf");
//    else showResult(divide(a, b));
	show(divide(a, b));
	return 0;
 } 
