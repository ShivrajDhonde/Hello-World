def computepay(h,rph):
    if(h<=40):
        return rph*h
    else:
        return 40*rph + 1.5*rph*(h-40)
  
hrs = float(input("Enter Hours:"))
rph = float(input("Enter rate"))
pay = computepay(hrs,rph)
print(pay)

