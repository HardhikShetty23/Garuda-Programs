list = [1, 4, 9, 16, 25, 36, 49, 64, 81, 100]
len = len(list)

n = int(input("Enter the number to be searched: "))

i = 0
while i <= (len - 1):
    if(list[i] == n):
        print("The number found in the index: ", i)
    i += 1