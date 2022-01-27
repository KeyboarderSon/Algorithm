num = int(input())

class Student:
    def __init__(self, n, k, e, m):
        self.name = n
        self.kor = k
        self.eng = e
        self.math = m

students=[]

for _ in range(num):
    name, k, e, m = input().split()
    k, e, m = int(k), int(e), int(m)
    student = Student(name, k, e, m)
    students.append(student)

# 국어, 영어, 수학 우선순위 순으로 점수가 높은 학생부터 아래로 정렬
students.sort(key = lambda x : (-x.kor, -x.eng, -x.math))


for i in range(num):
    print(students[i].name, students[i].kor, students[i].eng, students[i].math)

