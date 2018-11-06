#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n+1);		//将每人说的数字保存在 V 数组中 
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			//数组 a 表示该人是好人还是狼人，-1表示狼人, 1表示好人初始全为 1 
			//数组 lie 表示是谁在说谎 
			vector<int> lie, a(n+1, 1);
			a[i] = a[j] = -1;		//刚开始时，假设 i 和 j 都是狼人
			//对于每个人，判断其是否说谎 
			for(int k = 1; k <= n; k++){
				//如果 v[k] * a[ans(v[k])] < 0 则表示该人说谎l 
				if(v[k] * a[abs(v[k])] < 0){	
					lie.push_back(k);
				}
			}
			// 说谎的人数为 2， 并且只有一个狼人和一个好人说谎 
			if(lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0){
				cout << i << " " << j;
				return 0;
			}
		}
	}
	cout << "No Solution" << endl;
	return 0;
}
