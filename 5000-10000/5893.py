from collections import deque

n = input()

s = 0
l = len(n) - 1
for i in n:
    s += int(i) * (2 ** l)
    l -= 1

s *= 17

d = deque()
while s > 0:
    d.append(s % 2)
    s //= 2

while d:
    print(d.pop(), end = '')
