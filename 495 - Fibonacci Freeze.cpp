def fibo(n) :
	if(n<=1) :
		return n
	a,b=0,1
	for i in range(2,n+1) :
		temp=a+b
		a=b
		b=temp
	return b
try:
	while 1 :
		num=int(input())
		print("The Fibonacci number for",num,"is",end=" ")
		print(fibo(num))

except EOFError:
    pass
