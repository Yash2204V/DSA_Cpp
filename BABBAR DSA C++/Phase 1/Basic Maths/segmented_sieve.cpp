#include <iostream>
#include <math.h>
#include <vector>

void segmentedSieve(int low, int high) {
    int limit = floor(sqrt(high)) + 1;
    std::vector<bool> isPrime(limit, true);
    
    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= limit; i += p) {
                isPrime[i] = false;
            }
        }
    }

    std::vector<bool> primes(high - low + 1, true);
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p]) {
            for (int i = std::max(p * p, (low + p - 1) / p * p); i <= high; i += p) {
                primes[i - low] = false;
            }
        }
    }

    // Print the primes in the range [low, high]
    for (int i = std::max(2, low); i <= high; ++i) {
        if (primes[i - low]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int low = 2, high = 16;
    segmentedSieve(low, high);

    return 0;
}
