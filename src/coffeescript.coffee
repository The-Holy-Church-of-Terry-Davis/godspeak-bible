fs = require 'fs'
file = fs.readFileSync 'vocab.txt', 'utf8'
array = file.split('\n')

# https://rosettacode.org/wiki/Pick_random_element
console.log array[Math.floor(Math.random() * array.length)]
