
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        res ^= arr[i];
    }

    int rmsb = res & (-res);

    cout << rmsb << endl;

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {