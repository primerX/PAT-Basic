#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n+1);		//��ÿ��˵�����ֱ����� V ������ 
	for(int i = 1; i <= n; i++) cin >> v[i];
	
	for(int i = 1; i <= n; i++){
		for(int j = i+1; j <= n; j++){
			//���� a ��ʾ�����Ǻ��˻������ˣ�-1��ʾ����, 1��ʾ���˳�ʼȫΪ 1 
			//���� lie ��ʾ��˭��˵�� 
			vector<int> lie, a(n+1, 1);
			a[i] = a[j] = -1;		//�տ�ʼʱ������ i �� j ��������
			//����ÿ���ˣ��ж����Ƿ�˵�� 
			for(int k = 1; k <= n; k++){
				//��� v[k] * a[ans(v[k])] < 0 ���ʾ����˵��l 
				if(v[k] * a[abs(v[k])] < 0){	
					lie.push_back(k);
				}
			}
			// ˵�ѵ�����Ϊ 2�� ����ֻ��һ�����˺�һ������˵�� 
			if(lie.size() == 2 && a[lie[0]] + a[lie[1]] == 0){
				cout << i << " " << j;
				return 0;
			}
		}
	}
	cout << "No Solution" << endl;
	return 0;
}
