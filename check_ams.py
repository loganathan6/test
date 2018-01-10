def ams(n):
    l = len(str(n))
    sum = 0
    for i in list(str(n)):
        sum += int(i) ** l
    return sum == n

if ams(input()):
    print "yes"
else:
    print "no"
