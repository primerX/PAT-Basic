#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;

const int MAXN = 10010;

struct Player{
	int id, x, y;
	double dis;	//dis 为点(x,y)到原点的距离 
}play[MAXN];

bool cmp(Player a, Player b)
{
	return a.dis < b.dis;	//距离越小越准 
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d %d %d", &play[i].id, &play[i].x, &play[i].y);
		double ans = sqrt(play[i].x * play[i].x + play[i].y * play[i].y);
		play[i].dis = ans;
	}
	sort(play, play + n, cmp);
	printf("%04d %04d", play[0].id, play[n-1].id); 
	return 0;
 } 
