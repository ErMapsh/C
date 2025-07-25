#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comparePairs(pair<int, int> p1, const pair<int, int> p2)
{
    return p1.second < p2.second; // sort based on second element of the pair
}
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    sort(arr, arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> vec = {3, 1, 4, 1, 5, 9, 2, 6};
    sort(vec.begin(), vec.end()); // sort function sorts the vector in ascending order
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    sort(vec.begin(), vec.end(), greater<int>()); // greater is functure that sorts in descending order
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;

    vector<pair<int, int>> vecPairs = {{1, 2}, {3, 1}, {5, 0}, {2, 4}};
    sort(vecPairs.begin(), vecPairs.end(), greater<>()); // sorts pairs based on first element, then second
    for (auto p : vecPairs)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    /* sort on the basis of second number of pair => need to create functure*/
    sort(vecPairs.begin(), vecPairs.end(), comparePairs); // sorts pairs based on first element, then second
    for (auto p : vecPairs)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    reverse(vecPairs.begin(), vecPairs.end()); // reverse the order of elements in the vector
    for (auto p : vecPairs)
    {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
    return 0;
}