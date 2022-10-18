#Binary Search in Python

def binary(lst,low,high,search):
    middle = (low+high)//2
    
    if low>high:
        return "not found"
    else:
        if lst[middle] == search:
            return "found"
        elif search>lst[middle]:
            return binary(lst,middle+1,high,search)
        elif search<lst[middle]:
            return binary(lst,low,middle-1,search)

n = int(input("Enter the number of elements: "))
lst = list(map(int, input("Enter elements of Array seperated by space").split()))[:n]
search = int(input("Enter the searching element: "))
low = 0
high = len(lst)-1
print("The Element",search,"is",binary(lst,low,high,search),"in the given array")
