#include <bits/stdc++.h>
#include <vector>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }

void print_dp_table(vector<vector<int>> K) {
  cout << "\nDP Table: \n";
  for (auto i : K) {
    for (auto j : i) {
      string val = to_string(j);
      cout << val;
      for (int i = val.length() - 1; i < 4; i++)
        cout << ' ';
    }
    cout << endl;
  }
  cout << endl;
}

int knap_sack(int num_items, int max_weight, vector<int> profit,
              vector<int> weight) {
  int i, w;
  vector<vector<int>> K(num_items + 1, vector<int>(max_weight + 1));

  for (i = 0; i <= num_items; i++) {
    for (w = 0; w <= max_weight; w++) {
      if (i == 0 || w == 0)
        K[i][w] = 0;
      else if (weight[i - 1] <= w)
        K[i][w] = max(profit[i - 1] + K[i - 1][w - weight[i - 1]], K[i - 1][w]);
      else
        K[i][w] = K[i - 1][w];
    }
  }
  print_dp_table(K);
  return K[num_items][max_weight];
}

int main() {
  int num_items, max_weight, p, w;
  vector<int> profit, weight;

  cout << "Enter number of items: ";
  cin >> num_items;

  cout << "Enter profits: ";
  for (int i = 0; i < num_items; i++) {
    cin >> p;
    profit.push_back(p);
  }
  cout << "Enter weights: ";
  for (int i = 0; i < num_items; i++) {
    cin >> w;
    weight.push_back(w);
  }

  cout << "Enter max weight: ";
  cin >> max_weight;

  int max_profit = knap_sack(num_items, max_weight, profit, weight);
  cout << "Max Profit: " << max_profit << endl;

  return 0;
}
