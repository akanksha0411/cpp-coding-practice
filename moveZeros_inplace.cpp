#include <iostream>
#include <vector>

using namespace std;

class Solution{
    public:
        void moveZeros(vector<int> &nums){
            int p = 0;
            for(int i : nums){
                if(i != 0){
                    nums[p] = i;
                    p++;
                }
            }
            for(int i=p; i<nums.size(); i++){
                nums[i] = 0;
            }
        }
};


int main(){
    vector<int> v = {0, 1, 0, 3, 12, 19, 0, 21, 0, 13};
    Solution x = Solution();
    x.moveZeros(v);

    cout <<  "{ ";
    for(int i : v){
        cout << i << " ";
    }
    cout << "}";
}