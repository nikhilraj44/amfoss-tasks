import math 

t=int(input())


for i in range(t):
    n=int(input())
    l=[]
    while n % 2 == 0: 
        l.append(2) 
        n =int( n / 2)
    for i in range(3,int(math.sqrt(n))+1,2): 
        while n % i== 0: 
            l.append(i) 
            n =int( n / i )
    if n > 2: 
        l.append(n)
    print(max(l))
    
