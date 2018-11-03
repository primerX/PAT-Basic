#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string add(string a)
{
	string b = a;
	string ans;
	reverse(b.begin(), b.end());
	int carry = 0;	//��λ 
	for(int i = 0; i < a.length(); i++){
		int num = (a[i]-'0' + b[i]-'0') + carry;
		carry = 0;
		if(num >= 10){
			carry = 1;
			num -= 10;
		}
		ans += char(num + '0');		//ǿ������ת�� 
	}
	if(carry == 1) ans += '1';
	reverse(ans.begin(), ans.end());
	return ans; 
}

int main()
{
	string s;
	cin >> s;
	int cnt = 0;
	while(cnt < 10){
		string temp = s;
		reverse(temp.begin(), temp.end());
		if(temp == s){	//�ǻ�����
			cout << s << " is a palindromic number." << endl;
			break; 
		}else{
			cout << s << " + " << temp << " = " << add(s) << endl;
			s = add(s);
			cnt++;
		}
	}
	if(cnt == 10) cout << "Not found in 10 iterations." << endl;
	return 0;
}
