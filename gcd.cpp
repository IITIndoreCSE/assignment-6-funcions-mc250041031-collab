#include <iostream>
#include <climits>
#include <vector>
using namespace std;

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    // TODO: complete the function as per instructions
    if(a == 0){
        return b;
    } else
    if(b == 0){
        return a;
    }
    int limit = min(a, b);
    int i;
    int grtcd;
    for(i = a; i <= limit; i++){
        if(a%i == 0 && b%i == 0){
            grtcd = i;
        }
    }return grtcd;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    cout << gcd(num1, num2) << "\n";

    return 0;
}
