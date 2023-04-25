# linear-search
Linear search is a simple search algorithm that is used to find the location of a target value in a list or array of elements. It works by iterating through each element in the list and comparing it with the target value until a match is found or the end of the list is reached.
# Explaination of working
Here is an example of how linear search works:

Suppose we have an array of integers: [5, 10, 15, 20, 25, 30, 35, 40, 45, 50] and we want to find the index of the value 30.

1. We start at the beginning of the array and compare the first element with the target value (30). The first element is 5, which is not a match.

2. We move on to the next element (10) and compare it with the target value. This is also not a match.

3. We continue this process until we reach the sixth element (30), which is a match. We return the index of the element, which is 5.

4. If we reach the end of the array without finding a match, we return a "not found" value.

Linear search has a time complexity of O(n), where n is the number of elements in the list. This means that the algorithm's runtime grows linearly with the size of the input. Linear search is simple to implement and works well for small or unsorted lists, but for larger lists, other algorithms such as binary search may be more efficient.
# Algoritm
Here's the algorithm for linear search:

Input: a list of n elements and a target value x

Output: the index of the first occurrence of x in the list, or a "not found" value if x is not in the list

1. Initialize a variable "found" to false and a variable "index" to -1
2. For each element in the list, starting from the first element:
   a. If the element is equal to the target value x, set "found" to true and set "index" to the index of the element
3. If "found" is true, return "index". Otherwise, return a "not found" value.
# Screenshot
![p6](https://user-images.githubusercontent.com/126184012/234294091-1b3ece56-1ab1-4875-8ad2-b3e39797bf40.png)


