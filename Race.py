import random 

def moveMe():
	x = random.randint(0, 5)

	if x == 4:
		x = -2
	elif x == 5:	
		x = -1
    	return x

def tortise():
	t = 'T'

	print t * tortiseLocation #here the * allows us to multiply the character T by the tortiseLocation variable

def hare():
	h = 'H'

	print h * hareLocation
	
winNum = 65
tortiseLocation = 1
hareLocation = 1
counter = 0
while tortiseLocation < 65 and hareLocation < 65:
	
	tortiseLocation += moveMe()
	hareLocation += moveMe()
	if tortiseLocation < 1:		
		tortiseLocation = 1
	if hareLocation <1:
		hareLocation = 1

	if counter % 5 == 0:
		print "after turn", counter
		tortise()	
		hare()

	counter+=1

if tortiseLocation > hareLocation:
	print"tortise wins!"
elif hareLocation > tortiseLocation:
	print"hare wins!"
else:
	print"Its a tie!"

print "Final Stats: Tortise ", tortiseLocation ,", Hare ", hareLocation 
