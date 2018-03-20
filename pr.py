b=int(input())
for i in range(2,a):
	if (b%i==0):
		print(b," is not a prime number")
		break
	else:
		print(b," is prime number")
		break
