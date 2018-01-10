d = input()
def mul(d):
    n = 1
    for i in d:
        n *= i
    return n
print mul([i for i in range(1,d+1)])
