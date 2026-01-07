# Patterns printing in Python

def pattern1(n):
    for i in range(n):
        for j in range(n):
            print('*', end=' ')
        print()
def pattern2(n):
    for i in range(1,n+1):
        for j in range(i):
            print('*', end = ' ')
        print()
def pattern3(n):
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end = ' ')
        print()
def pattern4(n):
    for i in range(1, n+1):
        for j in range(i):
            print(i, end=' ')
        print()
def pattern5(n):
    for i in range(1, n+1):
        for j in range(n-i+1):
            print('*', end = ' ')
        print()
def pattern6(n):
    for i in range(1, n+1):
        for j in range(1, n-i+2):
            print(j, end=' ')
        print()
def pattern7(n):
    for i in range(n):
        print(' '*(n-i+1)+'*'*(2*i+1))
def pattern8(n):
    for i in range(n):
        print(' '*(i)+'*'*((2*n-1)-2*i))
def pattern9(n):
    for i in range(n):
        print(' '*(n-i-1)+'*'*(2*i+1))
    for j in range(n):
        print(' '*j+'*'*(2*(n-j)-1))
def pattern10(n):
    for i in range(n):
        print('*'*(i+1))
    for j in range(n-1):
        print('*'*(n-j-1))
def pattern11(n):
     for i in range(n+1):
        if i%2==0:
            for j in range(i):
                print(1, end=' ') if j%2!=0 else print(0, end=' ')
            print()
        else:
            for x in range(i):
                print(0, end=' ') if x%2!=0 else print(1, end=' ')
            print()
def pattern12(n):
    for i in range(1,n+1):
        count=0
        for j in range(1,i+1):
            print(j, end=' ')
            count+=1
        print('  '*(2*(n-i)), end='')
        for x in range(1, i+1):
            print(count, end=' ')
            count-=1
        print()
def pattern13(n):
    for i in range(n+1):
        for j in range(i):
            print(chr(65+j), end=' ')
        print()
def pattern14(n):
    for i in range(n+1):
        for j in range(i,n):
            print(chr(65+j), end=' ')
        print()
def pattern15(n):
    for i in range(n+1):
        for j in range(i,n):
            print(chr(65+j-i), end=' ')
        print()
def pattern16(n):
    count=1
    for i in range(n+1):
        for j in range(i):
            print(count, end=' ')
            count+=1
        print()
def pattern17(n):
    for i in range(1, n+1):
        print(chr(64+i)*i)
def pattern18(n):
    for i in range(n+1):
        for j in range(i):
            print(chr(64+n-j), end=' ')
        print()
def pattern19(n):
    for i in range(1,n+1):      
        print("  "*(n-i), end=' ')   # Space
        for j in range(i):          # Left
            print(chr(65+j), end=' ')
        for j in range(i-2,-1,-1):  # Right
            print(chr(65+j), end=' ')
        print()
def pattern20(n):
    for i in range(1,n):
        for j in range(1, n-i+2):
            print(j, end=' ')
        print('  '*2*(i-1), end= ' ')
        for x in range(n-i+1,0,-1):
            print(x, end=' ')
        print()
    for i in range(1, n+1):
        for j in range(1, i+1):
            print(j, end=' ')
        print('  '*2*(n-i), end=' ')
        for x in range(i,0,-1):
            print(x, end=' ')
        print()
def pattern21(n):
    for i in range(n, 0, -1):
        for j in range(i):   # stars
            print('*', end=' ')
        print('  '*(2*(n-i)), end='')  # Spaces
        for x in range(i):  #Stars
            print('*', end=' ')
        print()

    for i in range(1, n+1):
        for j in range(i):   # stars
            print('*', end=' ')
        print('  '*(2*(n-i)), end='')  # Spaces
        for x in range(i):  #Stars
            print('*', end=' ')
        print()

def __main__():
     t =  int(input())
     for i in range(t):
         n = int(input())
         pattern18(n)

if __name__ == "__main__":
    __main__()