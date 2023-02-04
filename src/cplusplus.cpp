// https://www.codespeedy.com/fetch-a-random-line-from-a-text-file-in-cpp/

#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int main() {
  string line;
  vector<string> lines;

  srand(time(0));

  ifstream file("vocab.txt");

  int total_lines = 0;
  while (getline(file, line)) {
    total_lines++;
    lines.push_back(line);
  }

  int random_number = rand() % total_lines;

  cout << lines[random_number];

  return 0;
}
