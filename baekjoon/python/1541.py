# source code

'''
17:05 ~ 17:37

양수, + - 괄호 식을 가지고 식을 만듬

만든후 괄호를 모두 지움

괄호를 쳐서 식의 값을 최소로 만든 프로그램을 작성

---

첫번째 줄에 식이 주어지고 
수는 0으로 시작할 수 있다
처음과 마지막은 숫자

# 1-(2+3+4)-5 
# 1+2-(3+4)-5 
# 1+2+3-(4)-(5)

'''
   

def set_input():
    value = input().split('-')
    return value

def main():
    input_list = set_input()
    sub_input_list = []
    for input in input_list:
        inner_list = input.split('+')
        inner_sum = 0
        for inner in inner_list:
            inner_sum += int(inner)
        sub_input_list.append(inner_sum)

    output = sub_input_list[0]
    for idx in range(1, len(sub_input_list)):
        output = output - sub_input_list[idx]

    print(output)

if __name__ == '__main__':
    main()
    