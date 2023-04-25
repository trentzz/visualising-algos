#include <bits/stdc++.h>
using namespace std;

vector<int> A, B, C;
int move_num = 0;

void print_rods() {
  cout << "Move Number: " << move_num << endl;

  cout << "A | ";
  for (auto x : A) {
    cout << x << ' ';
  }
  cout << endl;
  cout << "B | ";
  for (auto x : B) {
    cout << x << ' ';
  }
  cout << endl;

  cout << "C | ";
  for (auto x : C) {
    cout << x << ' ';
  }
  cout << endl << endl;
  move_num++;
}

void tower_of_hanoi(int n, vector<int> &start, vector<int> &intermediary,
                    vector<int> &end) {
  if (n == 0)
    return;
  tower_of_hanoi(n - 1, start, end, intermediary);

  int x = start.back();
  start.pop_back();
  end.push_back(x);

  print_rods();

  tower_of_hanoi(n - 1, intermediary, start, end);
}

int main() {
  int n;
  cout << "Enter number of disks: ";
  cin >> n;

  // populate rod A
  for (int i = n; i > 0; i--) {
    A.push_back(i);
  }

  print_rods();
  tower_of_hanoi(n, A, B, C);
  return 0;
}
