#include <iostream>
#include <vector>
using namespace std;
int main() {
    // Create a vector with 100 million elements, each initialized to 1
    vector<vector<int>> a(3000, vector<int>(3000, 1));

    // Summing up all elements in the vector
    long long sum = 0;  // Use long long to prevent overflow
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            sum += a[i][j];
        }
    }
    return 0;
}
