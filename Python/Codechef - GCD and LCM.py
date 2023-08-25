def gcd(a, b):
    if b==0: # base case
        return a
    return gcd(b, a%b)

def lcm(a, b):
    if b==0:
        return a
    return a/gcd(b, a%b)*b

def main(n):
    for _ in range(n):
        a,b = map(int, input().split())
        print(gcd(a,b), lcm(a,b))
main(int(input()))
