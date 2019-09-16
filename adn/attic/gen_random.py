import random
import sys

random.seed(sys.argv[1])

N = int(sys.argv[2])

print(N)
print(' '.join(str(random.randint(0, 3)) for i in range(N)))
print(' '.join(str(random.randint(0, 3)) for i in range(3)))
