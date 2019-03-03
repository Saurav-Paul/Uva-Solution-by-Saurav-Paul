ara=[0]*6000
def fibo(n) :
	ara[0]=0
	ara[1]=1
	for i in range(2,n+1) :
		ara[i]=ara[i-1]+ara[i-2]

fibo(5010)	
try:
	while 1 :
		num=int(input())
		print("The Fibonacci number for",num,"is",end=" ")
		print(ara[num])

except EOFError:
    pass
