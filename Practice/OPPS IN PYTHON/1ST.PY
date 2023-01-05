class a:
    def __init__(self,roll,mark):
        self.roll=roll
        self.mark=mark
        print(mark,roll)
class b(a):
    def __init__(self,r):
        super().__init__(45,"raja")
        print("AAAA")
com=b(1)
