using System;
using System.IO;

class Program
{
  public static void Main(string[] args)
  {
    // https://github.com/yendisfish
    string[] f = File.ReadAllLines("vocab.txt");

    Random r = new Random();
    Console.WriteLine(f[r.Next(f.Length-1)]);
    //
    }
}
