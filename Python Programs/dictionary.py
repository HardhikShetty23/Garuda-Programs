student = {
    "name" : "Tony Stark",
    "subjects" : {
        "phy" : 99,
        "chem" : 98,
        "math" : 97
    },
    "age" : 19
}

new_dict = {"city" : "Delhi", "name" : "Harvard Stark"}

student.update(new_dict)
print(student)