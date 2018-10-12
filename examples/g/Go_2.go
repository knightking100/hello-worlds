package main

import (
    "fmt"
    "time"
)

func main() {
	printHelloWorld()
}

func printHelloWorld() {
	hello, world := "Hello", "World"
        fmt.Println(hello)
        time.Sleep(2 * time.Second)
        fmt.Println(world, "!")
        fmt.Println(":)")
}
