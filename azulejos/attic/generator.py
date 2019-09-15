import random
import sys

def weightedChoice(weight):
  return 1 if random.random() < weight else 0


random.seed(str(sys.argv))

m = int(sys.argv[2])
n = int(sys.argv[3])
w = float(sys.argv[4])
p = int(sys.argv[5])
q = int(sys.argv[6])

print(m, n, p, q)

for i in range(m):
  line = [0] * n
  for j in range(n):
    line[j] = weightedChoice(w)
  print(*line)
