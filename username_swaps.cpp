// Usernames problem
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> shortenUsername(vector<string> usernames)
{
  vector<string> status;
  for (int i = 0; i < usernames.size(); i++)
  {
    // still need to account for CAPS
    string name = usernames.at(i);
    char c = int(name.at(0));
    bool isSwapped = false;
    for (int j = 1; j < name.size(); j++)
    {
       if (int(name.at(j)) < c)
       {
         status.push_back("YES");
         isSwapped = true;
         break;
       }
    }

    if (!isSwapped)
    {
      status.push_back("NO");
    }
  }
  return status;
}

int main()
{
  // Test case 1
  vector<string> usernames{"bee", "superhero", "ace"};
  // Solution: ["NO", "YES", "NO"]

  vector<string> solution = shortenUsername(usernames);

  for (int i = 0; i < solution.size(); i++)
  {
    cout << solution.at(i) << endl;
  }

  return 0;
}
