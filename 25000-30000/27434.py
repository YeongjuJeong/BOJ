# 27434 팩토리얼 3

n = int(input())

ans = 1

for i in range(1, n + 1):
    ans *= i

print(ans)
