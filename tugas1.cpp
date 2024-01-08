#include <string>
#include <iostream>

using namespace std;

int sequential_search(string arr[], int size, string target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) return i;
  }

  return -1;
}

int main() {
  string target = "R 999 RS";
  string data[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
  int size = sizeof(data) / sizeof(data[0]);
  int result = sequential_search(data, size, target);

  if (result == -1) cout << "Target not found" << endl;
  else cout << "Target found at index " << result << endl;
}
