a, b = map(int, input().split())
nilaia, nilaib = a, b

if a > b:
    print("%d %d - " % (a, b), end='')
    for i in range(a - b):
        nilaia -= 1
        nilaib += 1
        if i < a - b - 1:
            print("%d %d - " % (nilaia, nilaib), end='')
        else:
            print("%d %d" % (nilaia, nilaib), end='')
else:
    print("%d %d - " % (a, b), end='')
    for i in range(b - a):
        nilaia += 1
        nilaib -= 1
        if i < b - a - 1:
            print("%d %d - " % (nilaia, nilaib), end='')
        else:
            print("%d %d" % (nilaia, nilaib), end='')
