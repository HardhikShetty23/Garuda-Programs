num1 = int(input("Enter the 1st number: "))
num2 = int(input("Enter the 2nd number: "))
num3 = int(input("Enter the 3rd number: "))
num4 = int(input("Enter the 4th number: "))

if(num1 >= num2 and num1 >= num3 and num1 >= num4):
    max = num1
elif(num2 >= num3 and num2 >= num4):
    max = num2
elif(num3 >= num4):
    max = num3
else:
    max = num4


print("Maximum number is: ", max)