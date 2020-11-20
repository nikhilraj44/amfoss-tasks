t=int(input())
for i in range(t):
    a,b,c=1,2,3
    evsum=2
    n=int(input())
    while c<n:
        c=a+b
        a=b
        b=c
        if c<n and c%2==0:
            evsum+=c
    print(evsum)
        
