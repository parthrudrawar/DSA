#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int N = 1000000;
vector<bool> sieve(N+1, true);

void createSieve() {
    sieve[0] = sieve[1] = false;
    for (int i = 2; i * i <= N; ++i) {
        if (sieve[i]) {
            for (int j = i * i; j <= N; j += i)
                sieve[j] = false;
        }
    }
}

vector<int> generate_primes(int limit) {
    vector<int> primes;
    for (int i = 2; i <= limit; ++i)
        if (sieve[i])
            primes.push_back(i);
    return primes;
}

int main() {
    createSieve();
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        vector<bool> isPrime(r - l + 1, true);
        vector<int> primes = generate_primes(sqrt(r));

        for (int prime : primes) {
            for (int j = max(prime * prime, (l + prime - 1) / prime * prime); j <= r; j += prime)
                isPrime[j - l] = false;
        }

        for (int i = 0; i <= r - l; ++i)
            if (isPrime[i] && (i + l) > 1)
                cout << (i + l) << " ";
        cout << endl;
    }
    return 0;
}
