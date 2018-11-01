#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
	int T, k;
	cin >> T >> k;
	int n1, b, t, n2;
	int total = T;		//玩家一共有的筹码 
	for(int i=0; i<k; i++){
		cin >> n1 >> b >> t >> n2;
		if(total <= 0){
			printf("Game Over.\n");
			break;
		}else if(t > total){	//下注超过total 
			printf("Not enough tokens.  Total = %d.\n", total);
			continue;
		}
		if((n1 > n2 && b == 0) || (n1 < n2 && b == 1)){	// 赌对了
			total += t; 
			printf("Win %d!  Total = %d.\n", t, total);
			continue;
		}else if( (n1 > n2 && b == 1) || (n1 < n2 && b == 0)){	//赌错了 
			total -= t;
			printf("Lose %d.  Total = %d.\n", t, total);
		}
		
	}
	return 0;
}
