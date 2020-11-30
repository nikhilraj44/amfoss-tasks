n,m=map(int,input().split())
l=input().split()

for i in l:
    a=int(i)
    b=m-a
    b=str(b)
    if b in l:
        flag=1
        break   
    else:
        flag=0
        
if flag==1:
    print("True")
else:
    print("False")
