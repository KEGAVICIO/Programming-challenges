#include <iostream>
#include <unordered_map>
#include <string>
#include <stack>
using namespace std;

// Create by kega

class Solution {
public:
    bool isValid(string s) {
        // First we declare a stack
        stack<char> pila;
        // Declare un unordered_map (his function is like a dictionary)
        unordered_map<char, char> pares = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        // Use a for to read all the string
        for (char ch : s) {
            // If the parenthesis is closing
            if (pares.count(ch)) {
                // If the stack is empty or does not match the last opened one
                if (pila.empty() || pila.top() != pares[ch]) {
                    return false;
                }
                pila.pop();  // Close Correct
            } else { // if the parenthesis is opening
                pila.push(ch);  
            }
        }

        return pila.empty();  // If is empty return True, else return False 
    }
};

int main() 
{
    Solution sol;
    cout<<"The string is valid '([])' "<<sol.isValid("([])")<<endl;
    cout<<"The string is unvalid '([)]' "<<sol.isValid("([)]")<<endl;
    return 0;
}
