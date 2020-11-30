t=int(input())
val=(10**9)+7
for i in range(0,t):
    a = 1
    b = 2
    c = 3 
    n=int(input())
    if n <=3: 
        c=n
        
    else: 
        for i in range(4,n+1): 
            d= (a + b +c) %val
            a = b 
            b = c 
            c = d
    s=str(c)
    print(s[::-1].lstrip("0"))
