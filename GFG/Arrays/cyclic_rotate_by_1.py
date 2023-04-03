#Problem Statement -> https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Arrays&sortBy=submissions

def rotate( arr, n):
    temp = arr[n-1]
    j = n - 1
    i = j - 1
    while(j>0):
        arr[j] = arr[i]
        i -= 1
        j -= 1
    arr[0] = temp
