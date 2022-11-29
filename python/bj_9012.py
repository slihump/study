num = int(input())

stack = []
for i in range(num):
    arr = list(input())

    for j in range(len(arr)):
        if arr[j] == '(':
            stack.append(arr[j])
        else:
            if not stack:
                print('NO')
                break
            stack.pop()
    else:
        if not stack:
            print('YES')
        else:
            print('NO')
    stack = []