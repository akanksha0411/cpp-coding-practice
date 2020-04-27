#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

class Bitmask{
    public:
        int subset(vector<int> &nums, int S){
            int len = binaryLength(*max_element(nums.begin(), nums.end()));
            // cout << len << " length";
            bool flag = false;
            for(int mask=0; mask<(1<<len); mask++){
                long long subset_sum = 0;
                for(int i=0; i<len; i++){
                    // cout << i << " " << mask << "\n";
                    if(mask&(1<<i)){
                        // cout << i << " ";
                        subset_sum += nums[i];
                    }
                }
                if(subset_sum == S){
                    flag = true;
                    return flag;
                    printf("\n");
                }
            }
            return flag;
        }

        int binaryLength(int x){
            string s = "";
            for(int i=30; i>=0; i--){
                if(x&(1<<i))
                    s += '1';
                else
                    s += '0';
                }
            x = stoi(s);
            return to_string(x).length();
        }
};

int main(){
    vector<int> v = {2, 3, 14, 59, 12, 5};
    int S;
    cin >> S;
    Bitmask x = Bitmask();
    cout << x.subset(v, S) << "\n";
}