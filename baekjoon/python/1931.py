# source code
'''
N = 11

start_list = [1,3,0,5,3,5,6,8,8,2,12]
end_list = [4,5,6,7,8,9,10,11,12,13,14]
list = [
    [start,end],
    [start,end],
    [start,end],
]
list.sort()

count = 0
s = start_list[0]
e = end_list[0]
print(s,e)
count += 1
#없으면 +1
t = start_list.index(e)

s1 = start_list[t]
e1 = end_list[t]

count += 1
t = start_list.index(e1)

s2 = start_list[t]
e2 = end_list[t]

count += 1
t = start_list.index(e2)

s3 = start_list[t]
e3 = end_list[t]

count += 1

'''

def set_input():
    size = int(input())
    value_list = []
    for _ in range(int(size)):
        value_list.append(
            list(map(int, input().split()))
        )
    value_list.sort(
        key = lambda v : (v[1],v[0])
    )
    return value_list, size

def main():
    value_list, size = set_input()

    count = 0
    finish = -1
    for i in range(size):
        if value_list[i][0] >= finish:
            count += 1
            finish = value_list[i][1]

    print(count)

main()
