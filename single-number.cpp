// Given a non-empty array of integers, every element appears twice except for one. 
// Find that single one.

#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution{
    public:
      int SingleNumber(vector <int>& nums){
        map<int, int> m;
        int twice_sum = 0, sum_all = 0;
        for(int i : nums){
          if(m[i] == 0){
            twice_sum += i;
            m[i]++;
          }
          sum_all += i;
        }
         return 2*twice_sum - sum_all;
      }
};

int main(){
  vector<int> a{2, 2, 1};
  Solution x = Solution();
  cout << "Non repeatitive number is " << x.SingleNumber(a) << " ";
}

// 1 1 3 3 4 5 5