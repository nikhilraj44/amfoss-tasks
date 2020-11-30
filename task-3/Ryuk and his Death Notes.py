n = int(input())
for i in range(n):
    n, m = map(int, input().split())
    s= list(map(int, input().split()))
    mx = s.index(max(s))
    s[mx] = int(s[mx])-m
    mul = 1
    for i in s:
        val=int(i)
        mul*=val
    print(mul)
