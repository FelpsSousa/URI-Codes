while True:
    F, P, E, A = map(int, input().split())

    if F == 0 and P == 0 and E == 0 and A == 0:
        break

    dp = [[float('inf')] * (F + 1) for _ in range(P + 1)]
    dp[0][1] = 0

    for i in range(1, P + 1):
        for j in range(1, F + 1):
            energy, time = map(int, input().split())
            dp[i][j] = min(dp[i][j], dp[i - 1][j] + energy + E)

            for k in range(1, j):
                dp[i][j] = min(dp[i][j], dp[i - 1][k] + energy + abs(j - k) * A + E)

    minEDP = min(dp[P])
    print(minEDP)
