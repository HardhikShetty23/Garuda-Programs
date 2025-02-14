list = []
list.append(input("Enter any element: "))
list.append(input("Enter any other element: "))
list.append(input("Enter any other element: "))

copy_list = list.copy()

print(copy_list)
list.reverse()
print(list)

if(copy_list == list):
    print("Palindrome")
else:
    print("Not Palindrome")