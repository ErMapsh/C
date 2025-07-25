#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        unordered_map<int, int> m;
        for (auto n : m)
        {
            cout << n.first << " " << n.second;
        }
        cout << endl;

        for (auto num : arr)
        {
            m[num]++;
        }

        unordered_set<int> s;
        for (auto x : m)
        {
            cout << x.second << " ";
            s.insert(x.second);
        }
        return m.size() == s.size();
    }
};

int main(int argc, char const *argv[])
{
    vector<int> vec = {1, 2, 2, 1, 1, 3};
    Solution sol = Solution();
    cout << sol.uniqueOccurrences(vec) << endl;
    return 0;
}
