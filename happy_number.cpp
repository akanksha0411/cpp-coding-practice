// A happy number is a number defined by the following process: Starting with any positive integer,
// replace the number by the sum of the squares of its digits, and repeat the process until the
// number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. 
// Those numbers for which this process ends in 1 are happy numbers.

#include <iostream>
#include <string>
#include <set>

 using namespace std;

 class Solution{
     public:
        int number_squared(int n){
            int square = 0;
            while(n){
                square += (n%10) * (n%10);
                n = n/10;
            }
            return square;
        }

        bool isHappy(int n){
            set <int> s;
            while(1){
                n = number_squared(n);
                if(n == 1){
                    return true;
                }
                if(s.find(n) != s.end()){
                    return false;
                }
                s.insert(n);
            }
        }
 };

 int main(){
     int n;
     cout << "Enter a number to check if it is a happy number or not : " << "\n";
     cin >> n;
     Solution x = Solution();
      cout << x.isHappy(n) << "\n";
     return 0;
 }

 // 19 is my number
 // 19%10 = 9 (one digit)
 // 9%10 = 