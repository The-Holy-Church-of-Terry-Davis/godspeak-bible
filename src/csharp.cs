// https://github.com/yendisfish
// no more boiler plate, lets go
string[] f = File.ReadAllLines("vocab.txt");

Random r = new Random();
Console.WriteLine(f[r.Next(f.Length-1)]);
