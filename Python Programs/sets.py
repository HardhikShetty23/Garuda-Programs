collection = {1, 2, 3, "Hello", "World"}

print(collection)
print(type(collection))
print(len(collection))

collect = {} #This is Empty Dictionary
print(type(collect))

_collect = set() #This is Empty Set
print(type(_collect))

_collect.add(2)
_collect.add(3)

print(_collect)

_collect.remove(3)
#_collect.remove(4)    Error-> Since 4 is not there in the Sets

print(_collect)

_collect.add("ApnaCollege")
_collect.add((1, 2, 3, 4))
#_collect.add([1, 2, 3])    Error-> Since List cannot be added to Sets

#_collect.clear()
print(_collect)
print(len(_collect))
print(_collect.pop())

set1 = {1, 2, 3}
set2 = {3, 4, 5}

print(set1.union(set2))
print(set1.intersection(set2))



