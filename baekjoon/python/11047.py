# source code
'''
out += value//coin
value %= coin
'''
def set_input():
    size, value = map(int, input().split())
    
    coin_list = []
    for _ in size:
        coin = input()
        coin_list.append(int(coin))

    return value, coin_list

def main():   
    value, coin_list = set_input()
    coin_list.reverse()

    out = 0
    for coin in coin_list:
        out += value//coin
        value %= coin
    print(out)

if __name__ == '__main__':
    main()
    