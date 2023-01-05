def func(a,b):
    a=a+b
    b=a-b
    a=a-b
    return a,b,11
res=func(1,2)
print("premikara bariade")
print(res)
print(type(res))
print(type(str(res)))