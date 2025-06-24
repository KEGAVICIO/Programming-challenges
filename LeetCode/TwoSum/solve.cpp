#include <vector>
#include <iostream>
#include <algorithm> // to use std::find
using namespace std;


class Solution
{
public:
  vector<int> twoSum(vector<int>& nums, int target){
    vector<int> res;
    bool entry = false;
    if (nums.size() >= 2) // Check that the list have 2 or more numbers
    {
      for(int i = 0; i < nums.size()-1; i++)
      {
        entry = false;
        for(int j = nums.size() - 1; j > 0; j--)
        {
          if(nums[i]+nums[j] == target && i!=j) // check that the sum is correct and are diferents numbers
          {
            if (find(res.begin(), res.end(), j) == res.end()) // add the first number if we dont have in the list
            {
              entry = true;
              res.push_back(j);
            }
          }
        }
        //Add the second number if we dont have in the list
        if (entry == true && find(res.begin(), res.end(), i) == res.end())
        {
            res.push_back(i);
            break;
        }
      }
    }
    return res;
  }
};

int main(){
  Solution sol;
  vector<int> nums;
  vector<int> numsres;
  int tam, target;

  cout<<"Cuantos numeros meteras: ";
  cin>> tam;

  for(int i = 0; i<tam; i++)
  {
    cout<<"Ingresa numero: ";
    cin>>target;
    nums.push_back(target);
  }
  cout<<"Ingresa numero objetivo: ";
  cin>>target;

  numsres = sol.twoSum(nums, target);
  cout<<"Valores de los indices"<<endl;
  for(int j : numsres)
  {
    cout<<j<<" ";
  }
}
