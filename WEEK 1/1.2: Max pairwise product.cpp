#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::max;

int MaxPairwiseProduct(const vector<int>& numbers) {
    int max_product = 0;
    int n = numbers.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            max_product = max(max_product, numbers[i] * numbers[j]);
        }
    }

    return max_product;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
  
    int max_product = MaxPairwiseProduct (numbers);
    cout << MaxPairwiseProduct(numbers); << "\n";
    return 0;
}
