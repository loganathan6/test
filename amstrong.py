def ams(n):
    l = len(str(n))
    sum = 0
    for i in list(str(n)):
        sum += int(i) ** l
    return sum == n

x,y = map(int,raw_input().split(" "))

for i in range(x,y):
    if ams(i):
        print i
