/*#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		
		vector<vector<int>> answer = {};
		
		vector<int> firstRow = {1};
		answer.push_back(firstRow);
			
		int middleElements = 0;
		
		for(int i=1; i<numRows; i++){
			vector<int> currentRow = {}
			
			currentRow.push_back(1);
			
			//MiddleElements
			for(int j=1;j<=middleElements;j++){
				int element = answer[i-1][j] + answer[i-1][j-1];
				currentRow.push_back(element);
				}
			middleElements++;
			currentRow.push_back(1);
			
			answer.push_back(currentRow);
		}
		
		return answer;
		
    }
};  */


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		vector<vector<int>> answer = {};
		
		vector<int> firstRow = {1};
		answer.push_back(firstRow);
		
		int middleElements = 0;
		for(int i =1; i<numRows;i++){
			vector<int> currentRow = {};
			
			currentRow.push_back(1);
			
			//MiddleElements
			for(int j = 1;j<=middleElements;j++){
				int element = answer[i-1][j] + answer[i-1][j-1];
				currentRow.push_back(element);
			}
			
			middleElements++;
			currentRow.push_back(1);
			
			answer.push_back(currentRow);
		}
	
	
		return answer;
    }
};



class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> answer = {};
        
        vector<int> firstRow = {1};
        answer.push_back(firstRow);
        
        
        int middleElements = 0;
        for(int i=1; i<n; i++)
        {   
            vector<int> currentRow = {};
            currentRow.push_back(1);
        
        
            //MiddleElements
            
            for(int j=1; j<=middleElements;j++)
            {
                int element = answer[i-1][j] + answer[i-1][j-1];
                currentRow.push_back(element);
            }
            
            middleElements++;
            currentRow.push_back(1);
        
        
            answer.push_back(currentRow);
        }
        
        
        return answer;
    }
};