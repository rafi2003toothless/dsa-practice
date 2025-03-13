#include<bits\stdc++.h>
using namespace std;

// Example
// input 12
// output : 2 2 3

void prime_divisor_of_n(int n) {
    vector<int>prime_divisors; // stores the prime divisors
    for(int i=2;i*i<=n;i++) {
        while(n%i==0) { // while n is divisible by i loop will run
            prime_divisors.push_back(i);
            n /= i;
        }
    }

    if(n>1) {
        prime_divisors.push_back(n);
    }

    
    for(auto p : prime_divisors) cout << p << " ";
}


int main() {
	int n;
	cin >> n;
    prime_divisor_of_n(n);
    return 0;
}

