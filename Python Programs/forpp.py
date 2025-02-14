fact = 1

n = int(input("Enter the final number: "))

for val in range(1, n+1):
    fact *= val

print(fact)