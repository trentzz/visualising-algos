#include <iostream>
#include <vector>
using namespace std;

int hoare_partition(vector<int> arr, int l, int h) {
  int pivot = arr[l];

  cout << "Pivot: " << pivot << endl;

  int i = l - 1, j = h + 1;
  int loop_num = 1;
  while (true) {
    cout << "\nLoop Number: " << loop_num << endl;
    cout << "Array: ";
    for (auto x : arr) {
      cout << x << ' ';
    }
    cout << endl;
    do {
      i++;
    } while (arr[i] < pivot);
    do {
      j--;
    } while (arr[j] > pivot);

    cout << "Iterator Indexes: i = " << i << ", j = " << j << endl;
    if (i >= j) {
      cout << "i >= j and so we return j" << endl;
      return j;
    }

    cout << "Swapping values: " << arr[i] << " and " << arr[j] << endl;
    cout << "     At indexes: " << i << " and " << j << endl;
    swap(arr[i], arr[j]);
    loop_num++;
  }
  return -1;
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

  int res = hoare_partition(arr, l, h);
  cout << "\nReturn Index: " << res << endl;

  return 0;
}
