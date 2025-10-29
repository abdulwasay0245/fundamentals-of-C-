#include<iostream>
#include<string>
using namespace std;

int main(){
	int t;
	int testCase;
	int output;
	cin>>testCase;
		string name;

	string name2 = "codeforces";
	while(testCase--){
		 output = 0;
		 t = 0;
	
		cin >> name;
		while(t <= 9 ){
		
		if(name[t] != name2[t] ){
			output ++;
		
		}
	
		t++;
	}
		cout << output << endl;

	}
	
	
}
