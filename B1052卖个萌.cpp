#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

int main()
{
	vector<vector<string> > v;		//��ά���� v �����洢�洢���б���
	for(int i = 0; i < 3; i++){
		string str;
		getline(cin, str);
		vector<string> now;		//�����洢��ǰ�еı���
		int j = 0, k = 0;
		while(j < str.length()){
			if(str[j] == '['){
				while(k++ < str.length()){
					if(str[k] == ']'){
						now.push_back(str.substr(j+1, k-j-1));
						break;
					}
				}
			}
			j++;
		}
		v.push_back(now);
	}
	int n, a, b, c, d, e;
	cin >> n;
	for(int i=0; i<n; i++){;
		cin >> a >> b >> c >> d >> e;
		if(a>v[0].size() || b>v[1].size() || c>v[2].size() || d>v[1].size() || e > v[0].size()||
			a < 1 || b < 1 || c < 1 || d < 1 || e < 1){
			printf("Are you kidding me? @\\/@\n");
			continue;
		}else{
			cout << v[0][a-1] << "(" << v[1][b-1] << v[2][c-1] << v[1][d-1] << ")" << v[0][e-1] << endl;
		}
	}
	return 0;
 } 
