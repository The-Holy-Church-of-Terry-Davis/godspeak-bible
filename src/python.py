from random import choice

with open("vocab.txt", "r") as f:

    godspeak = choice(f.read().split())
    print(godspeak)
