import 'dart:io';
import 'dart:math';

void main() {
  var file = new File('vocab.txt');
  file.readAsLines().then((List<String> lines) {
    var random = new Random();
    var randomLine = lines[random.nextInt(lines.length)];
    print(randomLine);
  });
}
