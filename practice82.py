# WAP to find the nth fibonacci number..
def fibo(n):
    if n==1 or n==2:
        return 1
    else:
        return fibo(n-1)+fibo(n-2)
    
ans = fibo(5) 
print(ans)   