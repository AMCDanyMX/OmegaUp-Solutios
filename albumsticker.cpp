int ll n, a, b, len;
    int main()
    {
        cin >> n >> a >> b;
        len = b - a + 1;
        for (int i = n - 1; i >= 0; i--) {
            if (a)
                dp[i] = (sum / len + 1.0);
            else
                dp[i] = (sum + len) / (len - 1);
            sum -= dp[i + b];
            if (a)
                sum += dp[i + a - 1];
            else
                sum += dp[i];
        }
        cout << fixed << setprecision(10) << dp[0] << endl;
        return 0;
    }