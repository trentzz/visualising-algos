#include <iostream>
#include <vector>
using namespace std;

int lomuto_partition(vector<int> arr, int l, int h) {
  int pivot = arr[h];

  cout << "Pivot: " << pivot << endl;

  int i = l - 1;
  int loop_num = 1;
  for (int j = l; j <= h - 1; j++) {
    cout << "\nLoop Number: " << loop_num << endl;
    cout << "Array: ";
    for (auto x : arr) {
      cout << x << ' ';
    }
    cout << endl;
    cout << "Iterator Indexes: i = " << i << ", j = " << j << endl;
    if (arr[j] <= pivot) {
      i++;
      cout << "Swapping values: " << arr[i] << " and " << arr[j] << endl;
      cout << "     At indexes: " << i << " and " << j << endl;
      swap(arr[i], arr[j]);
    }
    loop_num++;
  }
  cout << endl;
  cout << "Swapping values: " << arr[i + 1] << " and " << arr[h] << endl;
  cout << "     At indexes: " << (i + 1) << " and " << h << endl;
  swap(arr[i + 1], arr[h]);
  return (i + 1);
}

int main() {
  int arr_len, n;
  vector<int> arr;
  cout << "Array Length: ";
  cin >> arr_len;
  cout << " Enter Array: ";
  while (arr_len--) {
    cin >> n;
    arr.push_back(n);
  }

  int l, h;
  cout << "   Enter Low: ";
  cin >> l;
  cout << "  Enter High: ";
  cin >> h;
  cout << endl;

  int res = lomuto_partition(arr, l, h);
  cout << "\nReturn Index: " << res << endl;

  return 0;
}
