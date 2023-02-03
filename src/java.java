// https://stackoverflow.com/a/30465683

import java.io.*;
import java.util.*;

class Main {
  public static void main(String[] args) throws FileNotFoundException, IOException {
    FileInputStream fs = new FileInputStream("vocab.txt");
    BufferedReader br = new BufferedReader(new InputStreamReader(fs));
    ArrayList<String> array = new ArrayList<>();
    String line;
    while ((line = br.readLine()) != null)
      array.add(line);

    Random rand = new Random();
    int randomIndex = rand.nextInt(array.size());

    System.out.println(array.get(randomIndex));
  }
}