def check_prime(j):
    for k in range(2, j, 1):
        if (j % k == 0):
            return 1


def diff(l, h):
    i = 0
    l = []
    for i in range(l, h+1, 1):
        if(check_prime(i)):
            l.append(i)
    print(l)


def main():
    min = int(input("Enter minimum of range"))
    max = int(input("Enter maximum of range"))
    diff(min, max)
