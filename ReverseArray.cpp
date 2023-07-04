#include <vector>
using namespace std;
#include <iostream>

void reverseArray(vector<int> &arr)
{
}
    int size = arr.size();

    vector<int> v;
    
    for (int i = size-1; i >= 0; i--)
    {
        v.push_back(arr[i]);
    }
    
    for (int k = 0; k < size; k++)
    {
        cout << v[k] << " ";
    }

}

int main(){
	
	vector<int> arr;
	reverseArray(arr);
	cout<< "This works!";
	
	return 0;
}





