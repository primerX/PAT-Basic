#include<cstdio>
#include<vector>
#include<map>
using namespace std;

vector<vector<int> > v;
int m, n, tol, cnt = 0, x, y;
//��λ���� 
int dir[8][2] = { {-1, -1}, {-1, 0}, {-1, 1}, {0, 1},
				  {1, 1}, {1, 0}, {1, -1}, {0, -1}
				}; 
bool judge(int i, int j){
	for(int k=0; k<8; k++){
		int tx = i + dir[k][0];
		int ty = j + dir[k][1];
		if(tx >= 0 && tx < n && ty >= 0 && ty < m
		&&v[i][j] - v[tx][ty] >= 0-tol && v[i][j] - v[tx][ty] <= tol){
			return false;
		}
	}
	return true;
}

int main()
{
	scanf("%d %d %d", &m, &n, &tol);
	v.resize(n, vector<int>(m));
	map<int, int> mp;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%d", &v[i][j]);
			mp[v[i][j]]++;
		}
	} 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(mp[v[i][j]] == 1 && judge(i, j) == true){
				cnt++;
				x = i + 1;
				y = j + 1;
			}
		}
	}
	if(cnt == 1){
		printf("(%d, %d): %d", y, x, v[x-1][y-1]);
	}else if(cnt == 0){
		printf("Not Exist");
	}else{
		printf("Not Unique");
	}
	return 0;
}
