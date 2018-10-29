#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, d;	//居民住房总套数，电量阈值，天数
	double e;
	int possible = 0, must = 0;
	cin >> n >> e >> d;
	for(int i=0; i<n; i++){
		int k, cnt = 0;		//cnt 用来记录低于e的天数	
		double num;
		cin >> k;
		for(int j=0; j<k; j++){
			cin >> num;
			if(num < e) cnt++;
		}
		if(cnt > k/2){
			if(k > d) must++;
			else possible++;
		}
	}
	printf("%.1f%% %.1f%%\n", (double)possible/n*100, (double)must/n*100);
	return 0;
}
