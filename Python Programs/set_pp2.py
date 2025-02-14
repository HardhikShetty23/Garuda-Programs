marks = {}

x = int(input("Enter physics marks: "))
marks.update({"phy" : x})

x = int(input("Enter maths marks: "))
marks.update({"math" : x})

x = int(input("Enter chemistry marks: "))
marks.update({"chem" : x})

print(marks)
