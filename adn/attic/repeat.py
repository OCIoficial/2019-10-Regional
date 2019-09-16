import random
import sys

random.seed(sys.argv[1])

repeat = sys.argv[2]
times = int(sys.argv[3])
noise = float(sys.argv[4])
pattern = sys.argv[5]

sequence = list(repeat) * times
for i in range(int(noise * len(sequence))):
    sequence[random.randint(0, len(sequence) - 1)] = str(random.randint(0, 3))

print(len(sequence))
print(' '.join(sequence))
print(' '.join(list(pattern)))
