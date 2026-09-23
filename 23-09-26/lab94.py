import numpy as np

m, n = map(int, input().split())
T = int(input())

a = np.array([list(map(int, input().split())) for i in range(m)])

a[a >= T] = 255
a[a < T] = 0

for row in a:
    print(*row)
