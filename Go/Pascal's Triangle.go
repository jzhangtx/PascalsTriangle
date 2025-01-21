package main

import "fmt"

func PascalTriangleRow(rowNo int) []int {
	if rowNo == 1 {
		return []int{1}
	}

	if rowNo == 2 {
		return []int{1, 1}
	}

	v := PascalTriangleRow(rowNo - 1)
	result := make([]int, rowNo)
	result[0] = 1
	result[len(result)-1] = 1
	for i := 1; i < len(v); i++ {
		result[i] = v[i-1] + v[i]
	}

	return result
}

func main() {
	for {
		fmt.Print("Number of rows of the Pascal's triangle: ")
		var rowNo int
		fmt.Scan(&rowNo)
		if rowNo == 0 {
			break
		}

		fmt.Printf("The %dth row of the Pascal's triangle is ", rowNo)
		fmt.Println(PascalTriangleRow(rowNo))
	}
}
