list = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]

for val in list: 
    print(val)

n = int(input("Enter the number: "))

i = 0
for val in list: 
    if (n == val):
        print("The Value",val, "is found index ", i)

    i += 1    