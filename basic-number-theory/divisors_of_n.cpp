#include<bits/stdc++.h>
using namespace std;

// brute force solution 
// time complexity => O(n)
void find_divisors_of_n(int n) {
    for(int i=1;i<=n;i++) {
        if(n%i==0) {
            cout << i << " ";
        }
    }
}


// time complexity => O(sqrt(n))
void find_divisors_of_n_improved(int n) {
    vector<int>divisors;
    for(int i=1;i*i<=n;i++) {
        if(n%i == 0) {
            divisors.push_back(i);
            if(i != n/i) divisors.push_back(n/i);
        }
    }

    sort(divisors.begin(), divisors.end());

    // for(int i=0;i<divisors.size();i++) {
    //     cout << divisors[i] << " ";
    // }

    for(auto d : divisors) cout << d << " ";
}


int main() {
    int n;
    cin >> n;
    
    find_divisors_of_n(n);
    cout << endl;
    find_divisors_of_n_improved(n);

    return 0;
}