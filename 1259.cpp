#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sorting(vector <int> &arr){
    int index = 0;
    vector <int> even,odd;
    for(int i = 0; i < arr.size(); i ++){
        if(arr[i] % 2 == 0)
        {
            even.push_back(arr[i]);
        }else{
            odd.push_back(arr[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    vector<int>result(even);
    result.insert(result.end(),odd.begin(), odd.end());
    arr = result;
}

int main()
{
    int n,num;
    vector <int> arr;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    sorting(arr);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] <<  endl;
    }
    return 0;
}
