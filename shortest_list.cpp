#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int sublist_size(vector<int> arr)
{
  vector<int> sublist;

  for (int i = 0; i < arr.size(); i++)
  {
    if (sublist.empty())
    {
      sublist.push_back(arr.at(i));
    }else {
      int counter = 0;
      for (int j = 0; j < sublist.size(); j++)
      {
        // Need to improve algorithm here!
        if (abs(sublist.at(j) - arr.at(i)) <= 1 )
        {
          counter ++;
        } else {
          sublist.erase(sublist.begin() + j);
        }
      }

      if (counter == sublist.size())
      {
        sublist.push_back(arr.at(i));
      }

    }
  }

  return sublist.size()
}

int main()
{
  // test case input
  vector<int> test_case_1{0, 1, 2, 1, 2, 3};
  // final sublist should be [1, 2, 1, 2]
  // therefore should have solution being 4.
  vector<int> test_case_2{5, 1, 2, 3, 4, 5};
  // final sublist should be [1, 2]
  // therefore should have solution being 2.
  int soultion = sublist_size(test_case_1);
  cout << solution;



}
