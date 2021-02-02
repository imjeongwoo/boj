#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL); cout.tie(NULL);

    int dp[1000001];
    int N;
    cin >> N;
    
    for (int i = 2; i <= N; i++) {
        dp[i] = dp[i - 1] + 1;
        if(i % 3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
        if(i % 2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
    }
    cout << dp[N];
    return 0;
}

