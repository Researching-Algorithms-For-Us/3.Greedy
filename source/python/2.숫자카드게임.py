# source code
def main():
    arrays = [
        [3,1,2],
        [4,1,4],
        [2,2,2]
    ]
    
    result_list = []

    for a in arrays:
        result_list.append(min(a))
    out = max(result_list)
    return out

if __name__ == '__main__':
    main()
