def bubblesort(elements):
for n in range(len(elements)-1, 0, -1):
for i in range(n):
if elements[i] > elements[i + 1]:
elements[i], elements[i + 1] = elements[i + 1], elements[i]
print(elements)
elements = []
size = int(input("Enter How many number you want to sort:"))
for i in range(size):
value = int(input("Enter the element:"))
elements.append(value)
print("Array :", elements)
bubblesort(elements)
print("Sorted Array is, ")
for i in range(size):
print(elements[i], end =" ")
