#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v(4,1);
  for(int i:v) {
    cout << v[i] << " ";
  } cout << endl;
  return 0;
} 