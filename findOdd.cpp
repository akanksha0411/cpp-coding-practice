#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution{
    public:
        int findOdd(vector<int> &nums){
            int result = 0;
            for(int i : nums){
                result ^=i;
            }
            
            return result;
        }
};

int main(){
    vector <int> v{ 12, 16, 16, 16, 16, 6, 18, 18, 12 };
    Solution x = Solution();
    cout << x.findOdd(v) << "\n";
}