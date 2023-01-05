a=1
flag=0
while a<=50:
    flag=0
    for i in range(2,a):
        if a%i==0:
            flag=1
            break
    if flag==0:
        print(a)
    a+=1
    
    