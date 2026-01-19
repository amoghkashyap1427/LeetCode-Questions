#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int n=x;
        while(n>0){
            int add_on = n%10;
            rev = rev*10 + add_on;
            n/=10;
        }
        return (rev==x);
    }
};