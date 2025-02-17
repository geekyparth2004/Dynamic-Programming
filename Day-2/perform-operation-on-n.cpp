#include<iostream>
#include<algorithm>
#include<climits> 
#include<vector>

using namespace std; 
vector<int> dp; 
using namespace std;
#define inf INT_MAX

int f(int n)
{
    // base cases
    if(n == 1) return 0; 
    if(n == 2 || n == 3) return 1; 
    if(dp[n]!=-1) return dp[n];

    int val1 = f(n - 1);
    int val2, val3;

    if(n % 2 == 0) val2 = f(n / 2);
    else val2 = inf;

    if(n % 3 == 0) val3 = f(n / 3);
    else val3 = inf;

    return dp[n] = 1 + min(val1, min(val2, val3)); 
}

int main()
{
    dp.clear();
    dp.resize(100,-1);
    int n = 10; 
    cout << f(n); 
    return 0; 
}
