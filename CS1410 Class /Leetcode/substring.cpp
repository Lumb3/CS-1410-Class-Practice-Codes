#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    unordered_set<char> uniques; // {'a', 'b', 'c'}
    int left = 0, right = 0, maxLen = 0;
    while (right < s.length())
    {
      if (uniques.find(s[right]) == uniques.end())
      {
        uniques.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
        right++;
      } else {
        uniques.erase(s[left]);
        left++;
      }
    }
    return maxLen;
  }
};
int main()
{
  Solution obj;
  std::string s = "abcabcbb";
  std::cout << obj.lengthOfLongestSubstring(s) << std::endl;
}