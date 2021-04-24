# source code
def fun():
    '''
    arrays = [
        [3,1,2],
        [4,1,4],
        [2,2,2]
    ]
    '''
    arrays = [
        [7,3,1,8],
        [3,3,3,4]
    ]
    result_list = []

    for a in arrays:
        result_list.append(min(a))
    out = max(result_list)
    return out