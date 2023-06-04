a = int(input("enter a number upto which you want even  " ))
c=int(input("enter a number from which you want even number "))
n=0
while(c<=a):
    if(c%2==0):
        print("even no are",c)
        n=n+1
    c+=1
print("the no of even numbers are ",n)