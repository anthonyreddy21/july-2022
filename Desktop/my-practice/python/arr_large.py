
def largest_arr(arr):
    max=arr[0]
    r = len(arr)
    for i in range(1,r):
        if(arr[i] > max):
            max = arr[i]
    return(max)

#arr = [10,2,12,34,7,8]
arr=[]

size=int(input("enter the size of array"))
for i in range(0,size):
    arr.append(int(input()))

print(arr)
n = largest_arr(arr)
print("largest element in arr = ",n)

