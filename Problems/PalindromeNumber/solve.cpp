#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      bool res = false;
      string palindrome = to_string(x);
      string number = "";
      for (int i = palindrome.size() - 1; i >= 0; i--)
      {
        number = number + palindrome[i];
      }
      if (number == palindrome)
      { res = true; }
      return res;          
    }
};

int main() {
    Solution sol;
    int num = 0;
    cout<<"Ingresa el nuero: ";
    cin>>num;
    cout << (sol.isPalindrome(num) ? "Es un palíndromo" : "No es un palíndromo") << endl;
    return 0;
}
