students = ["s1", "s2", "s3"]

students.append("s4")
students.insert(1, "s5")

print(students)

a = students

students.remove("s1")

b = a 
c = students.copy()

students.remove("s3")

# print the 3 lists
print(a)  
print(b)  
print(c)