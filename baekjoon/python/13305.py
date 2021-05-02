# source code
'''
17:52 ~ 18:44 (풀지 못함)

N개 도시가 있음
도시들은 도시위 일직선으로 있음

기름통의 크기가 무제한

이동할때 1km 당 1L

도시마다 주유소 리터 가격은 다르다, 가격 단위는 원

도시의 개수 : citys
두 도시 연결 도로 길이 : roads
주유소의 리터당 가격 : prices

4
 2 3 1
5 2 4 1

# 처음에는 기름이 없음
5*2 = 10
2*3 = 6
4*1 = 4
##
4
 1 2 3
5 4 3 2

5*1 = 5
4*2 = 8
3*3 = 9
##
5
 3 2 1
1 2 3 4

'''
import sys

def set_input():
    size = int(input())
    roads = list(map(int,input().split()))
    prices = list(map(int,input().split()))
    #roads.append(0)
    return (size-1),roads,prices[:-1]

def main():
    size,roads,prices = set_input()
    #print(size,roads,prices)
    '''
    rp_map = [[sys.maxsize] * (size-1) for _ in range(size-1)]
    for i in range(len(prices)):
        for j in range(i,len(roads)):
            rp_map[j][i] = (prices[i]*roads[j])
    '''
    out = 0
    minimum = sys.maxsize;
    for i in range(size):
        if minimum > prices[i]:
            minimum = prices[i]
        out += minimum * roads[i]
    print(out)

if __name__ == '__main__':
    main()
    