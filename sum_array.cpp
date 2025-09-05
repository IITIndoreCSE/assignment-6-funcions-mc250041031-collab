#include <iostream>
#include <vector>
using namespace std;

int sumArray(const vector<int>& arr) {
    // TODO: complete the function as per instructions
    int sum = 0;
    int size = arr.size();
    for(int x = 0; x < size; x++){
    	sum = sum + arr[x];
    	}
    return sum;
    
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++)
        cin >> arr[i];

    cout << sumArray(arr) << "\n";
    return 0;
}
