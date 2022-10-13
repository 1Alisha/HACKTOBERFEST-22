def binarySearch(v, search_element):
    low = 0
    high = len(v) - 1
 
    # This below check covers all cases , so need to check
    # for mid=lo-(hi-lo)/2
    while high - low > 1:
        mid = (high + low) // 2
        if v[mid] < search_element:
            low = mid + 1
        else:
            high = mid
 
    if v[low] == search_element:
        print("Index : ", low)
    elif v[high] == search_element:
        print("Index : ", high)
    else:
        print("Not Found")
 
 
if __name__ == '__main__':
    v = [int(h) for h in input().split(' ')]
 
    search_element=int(input())
    binarySearch(v, search_element)
 
