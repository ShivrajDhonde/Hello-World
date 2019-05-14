hrs = input("Enter Hours:")
h = float(hrs)
rph = float(input("Enter the rate:"))
if(h<=40):
    gross_pay = rph*h
else:
    gross_pay = 40*rph + 1.5*rph*(h-40)
    
print(gross_pay)