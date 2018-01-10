d = raw_input()
_ = list(d)[::-1]
if d == "".join(_):
    print "yes"
else:
    print "no"
