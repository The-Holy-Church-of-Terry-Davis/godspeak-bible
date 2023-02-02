import java.io.File
import kotlin.random.Random

fun main() {
    var godspeak = File("vocab.txt").bufferedReader().readLines().random()
    println(godspeak)
}