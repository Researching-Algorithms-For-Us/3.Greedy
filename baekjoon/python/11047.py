# source code
N, K = map(int, input().split())
c_list = []
for _ in range(0,N):
    i = input()
    c_list.append(int(i))
c_list.reverse()

out = 0
for c in c_list:
    out += K//c
    K %= c
print(out)