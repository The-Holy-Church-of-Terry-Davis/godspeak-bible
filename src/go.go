package main

import (
	"bufio"
	"fmt"
	"math/rand"
	"os"
	"time"
)

func randomLine(fileName string) string {
	rand.Seed(time.Now().UnixNano())
	lines, err := readLines(fileName)
	if err != nil {
		fmt.Println("Error reading file:", err)
		os.Exit(1)
	}
	return lines[rand.Intn(len(lines))]
}

func readLines(fileName string) ([]string, error) {
	file, err := os.Open(fileName)
	if err != nil {
		return nil, err
	}
	defer file.Close()

	var lines []string
	scanner := bufio.NewScanner(file)
	for scanner.Scan() {
		lines = append(lines, scanner.Text())
	}
	return lines, scanner.Err()
}

func main() {
	fmt.Println(randomLine("vocab.txt"))
}
