#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	int n;
	cin >> n;
	getchar();		//吸收换行符 
	while(n--){
		string password;
		getline(cin, password);
		if(password.length() < 6){	//长度小于 6 
			cout << "Your password is tai duan le." << endl;
		}else {		//长度 >= 6 
			int invalid = 0, hasAlpha = 0, hasNum = 0;
			for(int j=0; j<password.length(); j++){
				if(password[j] != '.' && !isalnum(password[j])) invalid = 1;
				else if(isalpha(password[j])) hasAlpha = 1;
				else if(isdigit(password[j])) hasNum = 1;
			}
			if(invalid == 1) cout << "Your password is tai luan le.\n";
			else if(hasNum == 0) cout << "Your password needs shu zi.\n";
			else if(hasAlpha == 0) cout << "Your password needs zi mu.\n";
			else cout << "Your password is wan mei.\n";
		}
	}
	return 0;
}
