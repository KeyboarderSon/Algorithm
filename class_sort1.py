""" 객체 정렬 """
# 키를 기준으로 정렬하는 경우

class Person:
    def __init__(self, n, h, w):
        self.name = n
        self.height = h
        self.weight = w



num=int(input())

People=[]

for _ in range(num):
    n, h, w = input().split()
    h = int(h)
    w = int(w)
    man = Person(n, h, w)
    People.append(man)


# 키를 기준으로 오름차순 정렬
# 만약 내림차순 정렬을 하고자 한다면 -x.height
People.sort(key=lambda x : x.height)

for i in range(num):
    print(People[i].name, People[i].height, People[i].weight)
