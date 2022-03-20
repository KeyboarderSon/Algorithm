## my solution

import sys

class Student:
    def __init__(self, name, kor, eng, math):
        self.name = name
        self.kor = kor
        self.eng = eng
        self.math = math


num = int(sys.stdin.readline())
students=[]
for _ in range(num):
    name, kor, eng, math = sys.stdin.readline().split(' ')
    kor, eng, math = int(kor), int(eng), int(math)
    students.append(Student(name, kor, eng, math))

students.sort(key = lambda x:(-x.kor, x.eng, -x.math, x.name))
for i in range(num):
    print(students[i].name)


## modify my solution

import sys

num = int(sys.stdin.readline())

students = []
for _ in range(num):
    name, a, b, c = sys.stdin.readline().split(' ')
    students.append((-int(a), int(b), -int(c), name))
students.sort()
for s in students: 
    print(s[3])