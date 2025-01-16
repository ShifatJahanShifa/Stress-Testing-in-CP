// // Bash Script for Stress Testing: (checker.sh)

// /*--------------------------------------------

// for((i = 1; ; ++i)); do
//     echo $i
//     ./gen $i > in.txt
//     diff -w <(./a < in.txt) <(./b < in.txt) || break
// done

// --------------------------------------------*/



// // Random Integer Number Generator:

// #include <random>
// #define ll long long

// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// inline ll gen_random(ll l, ll r) {
//     return uniform_int_distribution<ll>(l, r)(rng);
// }


// // Random Real Number Generator:

// mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

// inline double gen_random(double l, double r) {
//     return uniform_real_distribution<double>(l, r)(rng);
// }



#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline ll gen_random(ll l,ll r){
    return uniform_int_distribution<ll>(l,r)(rng);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // cout<<gen_random(1,10)<<"\n";
    freopen("input.txt","w",stdout);
    int n=gen_random(1,5);
    cout<<n<<"\n";
    for (int i = 0; i <n; i++)
    {
        cout<<gen_random(-20,20)<<" ";
    }
    
}