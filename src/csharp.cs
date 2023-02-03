using System;
using System.IO;

class Program
{
  public static void Main(string[] args)
  {
    // https://github.com/yendisfish
    string[] f = File.ReadAllLines("vocab.txt");

    Random r = new Random();
    int i = r.Next(f.Length) - 1;
    Console.WriteLine(f[i]);
    //
    }
}
