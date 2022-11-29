import numpy as np

# a = [[1, 2, 3], [4, 5, 6]]
# b = np.array(a)

# print(a, type(a))
# print(b, type(b))

# print(b.ndim)
# print(b.shape)
# print(b[0,0], b[1,0])

# print(np.arange(10))
# print(np.arange(5, 10))
# print(np.zeros((2,2)))
# print(np.ones((2,3)))
# print(np.full((2,3), 5))
# print(np.eye(3))

# c = np.arange(20)
# print(c)

# d = c.reshape(4,5)
# print(d)
# e = c.reshape(2,2,5)
# f = c.reshape(2,2,-1)
# g = c.reshape(2,5,-1)
# print(e)
# print(f)
# print(g)

# lst = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]
# arr = np.array(lst)
# a = arr[:2, 1:]
# print(a)

# np.array([1, 2, 3]).shape
# np.array([[1, 2, 3]]).shape
# np.array([[1, 2, 3]]).shape

# print(np.array([[1, 2, 3]]).T)
# print(np.array([1, 2, 3]).T)

# arr1 = np.array([[1, 2, 3], [1, 2, 3]])
# arr2 = np.array([[4, 5], [6, 7], [8,9]])

# print(np.dot(arr1, arr2))
# print(arr1.dot(arr2))

# print(np.sum(arr1))

# print(arr1.sum(axis=0),
# arr1.sum(axis=0).shape)
# print(arr1.sum(axis=1),
# arr1.sum(axis=1).shape)

arr1 = np.arange(1, 7).reshape(2, 3)
print(arr1)

print(arr1+2)

arr2=np.full_like(arr1,2)
print(arr2)
print(arr1+arr2)

