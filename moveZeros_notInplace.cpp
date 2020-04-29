// Given an array nums, write a function to move all 0's to the end of it 
// while maintaining the relative order of the non-zero elements.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
    public:
        void moveZeros(vector<int> &nums){
            vector<int> temp;
            vector<int>::iterator it1;
            int count = 0; 
            int removeNumber = 0;
            for(it1 = nums.begin(); it1!=nums.end(); ++it1){
                if(*it1 == removeNumber){
                    nums.erase(nums.begin());
                    count += 1;
                }
                temp.push_back(*it1);
                // cout << *it1 << " ";
            }
            cout << "\n";
            temp.insert(temp.end(), count, 0);
            for(int i : temp){
                cout << i << " ";
            }
        }
};


int main(){
    vector<int> v = {0, 1, 0, 3, 12, 19, 0, 21, 0, 13};
    // output - [1, 3, 12, 19, 21, 13, 0, 0, 0, 0]
    Solution x = Solution();
    x.moveZeros(v);
}

// I implemented this soltution in linear time O(N) but is wasn't inplace.
// I used an extra array to store numbers>0.