lines <- readLines("vocab.txt")

random_line <- lines[sample(length(lines), 1)]

print(random_line)
