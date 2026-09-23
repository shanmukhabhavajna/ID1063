def firstStable(a, n, tolerance):
    for i in range(n - 1):
        if abs(a[i + 1] - a[i]) <= tolerance:
            return i

    return -1


n = int(input())
a = list(map(float, input().split()))
tolerance = float(input())

print(firstStable(a, n, tolerance))
