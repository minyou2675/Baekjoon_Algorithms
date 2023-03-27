def largestLand(houses):
	# Write your code here
    houses = sorted(houses, key=lambda x:x[1])
    top = houses[-1][0]
    second = houses[-2][0]
    lst = [top, second]
    lst = sorted(lst)
    return lst
def main():
	#input for houses
	houses = []
	houses_rows,houses_cols  = map(int, input().split())
	for idx in range(houses_rows):
		houses.append(list(map(int, input().split())))
	
	
	result = largestLand(houses)
	print(" ".join([str(res) for res in result]))	

if __name__ == "__main__":
	main()
