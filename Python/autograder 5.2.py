largest = None
smallest = None
while True:
    num1 = input("Enter a number: ")
    if (num1 == "done") :
        break
    try:
        num = int(num1)
    except:
        print ("Invalid input")
    
    else: 
        if smallest is None: 
            smallest = num
            largest = num
        elif num < smallest:
            smallest = num
        elif num > largest:
            largest = num

print ("Maximum is",largest)
print ("Minimum is",smallest)

