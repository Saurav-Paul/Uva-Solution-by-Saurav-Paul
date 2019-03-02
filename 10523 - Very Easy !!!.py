try:
	while 1 :
		num1,num2=input().split()
		num1,num2=int(num1),int(num2)
		ans=0
		for i in range(1,num1+1) :
			ans+= (i*(num2**i))
		print(ans)

except EOFError:
    pass
