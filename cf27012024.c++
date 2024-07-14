#include <iostream>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, k;
        std::cin >> n >> k;

        // Create a vector of characters from 'a' to 'a' + k - 1
        std::vector<char> alphabet;
        for (int i = 0; i < k; ++i) {
            alphabet.push_back('a' + i);
        }

        // Repeat the alphabet n//k times and add any remaining characters
        std::string s;
        for (int i = 0; i < n / k; ++i) {
            s += std::string(alphabet.begin(), alphabet.end());
        }
        s += std::string(alphabet.begin(), alphabet.begin() + n % k);

        std::cout << s << std::endl;
    }

    return 0;
}

