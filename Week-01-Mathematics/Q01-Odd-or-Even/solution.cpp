#include <stdio.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isEven(int n) {
        return n % 2 == 0;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;
    bool result = obj.isEven(n);

    cout << (result ? "true" : "false");

    return 0;
}
