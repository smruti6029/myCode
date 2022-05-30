def func(a=[]):
    if len(a)<3:
        return ("array length is too short")
    elif len(a)>3:
        return (a[2])
result1=func([4,5,2,6])
print(result1)