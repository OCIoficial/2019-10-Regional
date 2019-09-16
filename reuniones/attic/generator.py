import random
import sys

random.seed(str(sys.argv))

n = int(sys.argv[2])
maxT = int(sys.argv[3])
case = int(sys.argv[4])

print(n)

if case == 0:
    start1 = random.randint(0, maxT - 3)
    end1 = random.randint(start1 + 1, maxT - 2)
    start2 = random.randint(end1, maxT - 1)
    end2 = random.randint(start2 + 1, maxT)
    print("{} {}".format(start1, end1))
    print("{} {}".format(start2, end2))

else:
    for i in range(n):
        start = random.randint(0, maxT - 1)
        end = random.randint(start, maxT)
        print("{} {}".format(start, end))
