##Probelem -> https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty%5B%5D=-1&category%5B%5D=Arrays&sortBy=submissions

#Check if two arrays are equal or not
#Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. 
#Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.

# Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.

class Solution:
  def check(self,A,B,N):
    A=sorted(A)
    B=sorted(B)
    for i in range(N):
      if A[i] != B[i]:
        return False
    return True
  
  
  
