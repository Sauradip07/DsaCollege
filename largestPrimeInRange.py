lower = int(input("Enter lower Range:"))
upper = int(input("Enter Upper Range:"))
for i in range(upper,lower-1,-1):
    falg = False
    for j in range(2,i):
        if(i % j) == 0 :
            falg = True
            break
    if(falg != True):
        print(i,"is a prime Number")
        break
