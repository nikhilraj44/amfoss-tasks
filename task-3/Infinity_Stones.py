t = int(input())
for _ in range(t):
    n,m,k = map(int,input().split())
    s = input()
    b = list(map(int,input().split()))
    if m<=k:
        print("YES")
    else:
        b = sorted(b,reverse=True)
        boxmax = 0
        for i in range(0,k):
            boxmax += b[i]
        if n <= boxmax:
            print("YES")
        else :
            print("NO")
