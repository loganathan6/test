data = raw_input().split(" ")
c = 0
k = map(len,data)
for i in range(min(k)):
    if data[0][i] != data[1][i]:
        c += 1
print c + max(k) - min(k)
