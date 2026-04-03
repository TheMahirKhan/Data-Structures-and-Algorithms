#include <iostream>
using namespace std;

void display(vector<int>& arr)
{
    for(auto x : arr)
    {
        cout << x << ' ';
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {2,3,4,12,13,1,2,3,14,15};
    display(arr);

    return 0;
}