import Foundation

let filePath = "vocab.txt"
let fileURL = URL(fileURLWithPath: filePath)

do {
  let fileContents = try String(contentsOf: fileURL)
  let lines = fileContents.components(separatedBy: "\n")
  let randomLine = lines.randomElement()!
  print(randomLine)
} catch {
  print("Error reading file")
}
