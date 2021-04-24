'''
# p1 = 3
# p2 = 1
# p3 = 4
# p4 = 3
# p5 = 2

# [1, 2, 3, 3, 4] 5
# 1 = 1
# 1+2 = 3
# 1+2+3 = 6
# 1+2+3+3 = 9
# 1+2+3+3+4 = 13

# 1+ 3 + 6 + 9 + 13
'''

def set_input():
    size = int(input())
    value_list = list(map(int, input().split()))
    
    return value_list, size

def main():
    value_list, _ = set_input()

    value_list.sort()
    out, sum = 0, 0
    for v in value_list:
        sum += v
        out += sum

    print(out)

main()