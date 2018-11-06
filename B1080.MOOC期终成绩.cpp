#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std; 

struct Student{
	string name;	//姓名;
	int Gp, Gm, Gf, G;	//各项成绩 
};

bool cmp(Student a, Student b)
{
	if(a.G != b.G) return a.G > b.G;
	else return a.name < b.name;
}

map<string, int> index;

int main()
{
	int p, m, n, score, cnt = 1;
	cin >> p >> m >> n;
	vector<Student> v, ans;
	string s;
	for(int i = 0; i < p; i++){
		cin >> s >> score;
		if(score >= 200){	//编程分大于200 才有资格
			v.push_back(Student{s, score, -1, -1, 0});
			index[s] = cnt++; 
		}
	}
	for(int i = 0; i < m; i++){
		cin >> s >> score;
		if(index[s] != 0){
			v[index[s] - 1].Gm = score;
		}
	}
	for(int i = 0; i < n; i++){
		cin >> s >> score;
		if(index[s] != 0){
			int temp = index[s] - 1;
			v[temp].Gf = v[temp].G = score;
			if(v[temp].Gm > v[temp].Gf){
				v[temp].G = int(v[temp].Gm * 0.4 + v[temp].Gf * 0.6 + 0.5);
			}
		}
	}
	for(int i = 0; i < v.size(); i++){
		if(v[i].G >= 60) ans.push_back(v[i]);
	}
	sort(ans.begin(), ans.end(), cmp);
	for(int i = 0; i < ans.size(); i++){
		printf("%s %d %d %d %d\n", ans[i].name.c_str(), ans[i].Gp, ans[i].Gm, ans[i].Gf, ans[i].G);
	}
	return 0;
}
