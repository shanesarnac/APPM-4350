import math

def group_speed(kappa):
	g = 9.81
	sigma = 0.0074
	return (0.5)*pow(g*((float) kappa) + sigma*pow((float) kappa, 3.0), -0.5)*(g + 3.0*sigma*pow((float) kappa, 2.0))


def main():
	for i in range(0, 1000):
		print(group_speed(i))
	
main()
