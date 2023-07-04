#include <vector>
using namespace std;
#include <iostream>

void reverseArray(vector<int> &arr, int m)
{
    // Write your code here.
    arr.push_back(4);
    arr.push_back(8);
    arr.push_back(7);

    int size = arr.size() - 1;
    cout << size;
    vector<int> new_arr = {1, 2, 3, 4, 5};
    for (int i = size; i > 0; i--)
    {
        new_arr[size - i] = arr[i];
    }

    for (int j = 0; j > m - 1; j++)
    {

        cout << new_arr[j] << " " << endl;
    }
}

int main() {}

vector<int> arr;
reverseArray(arr, 100);