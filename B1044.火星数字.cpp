#include<cstdio>
#include<string>
#include<vector>
#include<map>
#include<iostream>
using namespace std;

//0~12 的低位 
string low[13] = {"tret", "jan", "feb", "mar", "apr","may",
					 "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
//13 的 [0~12]倍 
string high[13] = {"tret", "tam", "hel", "maa", "huh", "tou", "kes",
						 "hei", "elo", "syy", "lok", "mer", "jou"};

string NumToString[170];
map<string, int> StringToNum;

void init()
{
	for(int i=0; i<13; i++){
		NumToString[i] = low[i];
		StringToNum[low[i]] = i;
		NumToString[i*13] = high[i];
		StringToNum[high[i]] = i*13;
	}
	for(int i=1; i<13; i++){
		for(int j=1; j<13; j++){
			string str = high[i] + " " + low[j];
			NumToString[j+i*13]	= str;
			StringToNum[str] = j+i*13;
		}
	}
}
int main()
{
	init();
	int n;
	scanf("%d", &n);
	getchar();			//吸收换行符 
	for(int i=0; i<n; i++){
		string s1;
		getline(cin, s1);
		int num = 0;
		if(s1[0] >= '0' && s1[0] <= '9'){	//如果是数字 
			for(int j=0; j<s1.length(); j++){
				num = num * 10 + (s1[j] - '0');
			}
			cout << NumToString[num] << endl;
		}else{
			cout << StringToNum[s1] << endl; 
		}
	}
	return 0;
 } 
