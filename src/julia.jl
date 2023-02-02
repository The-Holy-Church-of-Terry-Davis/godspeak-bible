using StatsBase

open("vocab.txt", "r") do f
    godspeak = sample(readlines(f))
    println(godspeak)
end

