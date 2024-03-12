#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  fstream myfile;
  myfile.open("day1.txt");
  vector<int> intVec;
  int firstPos, lastPos;
  string line, num;
  while (getline(myfile, line)) {
    firstPos = line.find_first_of("1234567890");
    num += line[firstPos];

    lastPos = line.find_last_of("1234567890");
    num += line[lastPos];

    intVec.push_back(stoi(num));

    line.clear();
    num.clear();
  }

  myfile.close();

  int sum = 0;
  for (const int &j : intVec) {
    cout << j << endl;
    sum += j;
  }
  cout << sum << endl;
}
