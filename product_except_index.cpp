#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    long long prefix = 1;
    for(int x = 0; x < size; x++) {
        output[x] = prefix;
        prefix *= arr[x];
    }

    long long suffix = 1;
    for(int x = size - 1; x >= 0; x--) {
        output[x] *= suffix;
        suffix *= arr[x];
    }

    return output;
}

int main() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}
