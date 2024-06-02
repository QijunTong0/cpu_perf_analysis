#include <iostream>
#include <vector>

int main() {
    // Create a vector with 100 million elements, each initialized to 1
    std::vector<int> a(10000000, 1);

    // Summing up all elements in the vector
    long long sum = 0;  // Use long long to prevent overflow
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
    }
    return 0;
}
