#include <bits/stdc++.h>
// leetcode number of students working
using namespace std;

class Solution
{
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count = 0;
		for (int i = 0; i < startTime.size(); i++){
            if(startTime[i] <= queryTime && endTime[i] >= queryTime){
                count++;
            }
        }
        return count;
	}
};

int main(){
    Solution x;
    vector<int> startTime{1, 2, 3};
      vector<int> endTime{3, 2, 7};
    cout << x.busyStudent(startTime, endTime, 3);
}
// student one worked from 1 to 3
// student two worked form 2 to 2
// student three worked from 3 to 7