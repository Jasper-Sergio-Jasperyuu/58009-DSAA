print("RECTANGLE AREA CALCULATOR")
class Shape:
    def __init__ (self,a,b):
        self.a = a
        self.b = b
    def ans (self):
        return self.a*self.b
    def display (self):
        print(f"The area of your rectangle is {self.ans()} units!")
        
a = float(input("Please input your first number:"))
b = float(input("Please input your second number:"))
dis = Shape(a, b)
dis.display()
