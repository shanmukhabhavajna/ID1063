import numpy as np

n = int(input())
x = np.array(list(map(float, input().split())))

rms = np.sqrt(np.sum(x**2) / n)

print(f"{rms:.2f}")
