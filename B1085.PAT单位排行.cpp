#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

struct School{
	string school;	//ѧУ��
	int tws, ns;	//��Ȩ�ܷ֣��������� 
};

bool cmp(School a, School b)	//�ȽϺ��� 
{
	if(a.tws != b.tws) return a.tws > b.tws;
	else if(a.ns != b.ns) return a.ns < b.ns;
	else return a.school < b.school;
}

int main()
{
	int n;
	cin >> n;
	//cnt �����洢ѧУ���ƶ�Ӧ�Ĳ������� 
	unordered_map<string, int> cnt;
	//sum ��������ѧУ���ƶ�Ӧ���ܼ�Ȩ�ɼ� 
	unordered_map<string, double> sum;
	for(int i = 0; i < n; i++){
		string id, school;
		double score;
		cin >> id >> score >> school;
		for(int j = 0; j < school.length(); j++){
			school[j] = tolower(school[j]);		//��ѧУ��ת��ΪСд 
		}
		if(id[0] == 'B'){
			score /= 1.5;
		}else if(id[0] == 'T'){
			score *= 1.5;
		}
		cnt[school]++;
		sum[school] += score;
	}
	vector<School> ans;
	for(auto it = cnt.begin(); it != cnt.end(); it++){
		ans.push_back(School{it->first, (int)sum[it->first], cnt[it->first]});
	}
	sort(ans.begin(), ans.end(), cmp);	//��Ҫ������
	printf("%d\n", ans.size());
	int rank = 0, pres = -1;
	for(int i = 0; i < ans.size(); i++){
		if(pres != ans[i].tws) rank = i + 1;
		pres = ans[i].tws;
		printf("%d ", rank);
		cout << ans[i].school;
		printf(" %d %d\n", ans[i].tws, ans[i].ns);
	} 
	return 0;
}
