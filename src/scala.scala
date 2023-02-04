object Main extends App {
  import scala.io.Source
  val fileName = "vocab.txt"
  val lines = Source.fromFile(fileName).getLines.toList
  val randomLine = lines(scala.util.Random.nextInt(lines.length))
  println(randomLine)
}
