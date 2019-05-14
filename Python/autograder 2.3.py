#Q. 2.3 Write a program to prompt the user for hours and rate per hour using input to compute gross pay.
#   Use 35 hours and a rate of 2.75 per hour to test the program (the pay should be 96.25). 
#   You should use input to read a string and float() to convert the string to a number. 
#   Do not worry about error checking or bad user data.


hrs = input("Enter Hours:")
rph = input("Enter rate per hour")
gross_pay = float(hrs)*float(rph)
print(gross_pay)