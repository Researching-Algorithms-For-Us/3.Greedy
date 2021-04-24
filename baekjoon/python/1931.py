# source code
'''
N = 11

start_list = [1,3,0,5,3,5,6,8,8,2,12]
end_list = [4,5,6,7,8,9,10,11,12,13,14]

print(start_list)
print(end_list)
#########################################
count = 0
s = start_list[0]
e = end_list[0]
#########################################
print(s,e)
count += 1
#없으면 +1
t = start_list.index(e+1)

s1 = start_list[t]
e1 = end_list[t]

print(s1, e1)
count += 1
#########################################
t = start_list.index(e1+1)

s2 = start_list[t]
e2 = end_list[t]

print(s2, e2)
count += 1
#########################################
t = start_list.index(e2+1)

s3 = start_list[t]
e3 = end_list[t]

print(s3, e3)
count += 1
#########################################

print(count)
#########################################
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
    #print(f"value_list(sort) = {value_list}")
    print(f"size = {size}")

    return value_list, size

def main():
    value_list, size = set_input()

    #print(value_list)
    count = 0
    finish = -1
    for i in range(size):
        if value_list[i][0] >= finish:
            count += 1
            finish = value_list[i][1]
            print(f"{i} : {count} : {value_list[i]}")

    print(count)

main()
