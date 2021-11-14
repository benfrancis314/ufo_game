#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int  N = 50;
    std::vector<double> possible_primes(N);
    // define possible primes
    for (size_t i = 2; i < N+1; ++i) { // why ++i?
        possible_primes[i] = i; // is there a faster way of doing this?
    }
    // pass through sieve
    int floor_sqrt_N = std::sqrt(N);
    for (size_t i = 2; i < floor_sqrt_N; ++i) {
        size_t j = i * i;
        while (j < N) {
            if j // what is the C++ equivalent of  "in"?
        }
    }
}