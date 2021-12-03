package main

import (
	"os"
	"strconv"
)
func main(){
	s:=0
	const n = strconv.Atoi(os.Args[1])



	for i := range [n]int{} {
		s=s+(i+i*i^i)%(i+1)

}

	println(s)
}
