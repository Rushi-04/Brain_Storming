#include<bits/stdc++.h>
using namespace std;


int main(){
	
	string name = "PAYPALISHIRING";
	
	
	vector <vector<char>> answer = {};
	
	for(int i=0;i<numRows;i++){
		vector<int> currentRow = {}
		for(int index=i;index<name.length();index+=4){
			currentRow.pushback(name[index]);
		}
		answer.push_back(currentRow);
		
	}
	cout<<answer<<endl;
	
	
	return 0 ;
	
	
}