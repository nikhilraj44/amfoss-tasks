t=int(input())
for i in range(0,t):
    k=int(input())
    s=input()
    ls=s.split()
    e=0
    if k<len(ls):
        t1=ls[k]
        for j in t1:
            e+=ord(j)
        print(e)
    else:
        print(-1)
