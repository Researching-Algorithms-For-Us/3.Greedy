def fun():
    N = 5
    M = 8#7
    K = 3#2
    num_list = [2,4,5,4,6]
    #num_list = [3,4,3,4,3]
    
    first_max_num = M//K
    second_max_num = M%K

    num_list.sort()

    first = num_list[-1]
    second = num_list[-2]
    out = K*first_max_num*first+second_max_num*second
    
    return out
