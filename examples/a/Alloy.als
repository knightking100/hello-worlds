sig Hello{
	 SayHello : one World
}

sig World{}

pred OneTime{
	# Hello = 1
}

run{OneTime} for 1
