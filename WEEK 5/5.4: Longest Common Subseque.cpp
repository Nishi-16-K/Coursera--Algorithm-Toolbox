#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int l2(vector<int> &a, vector<int> &b) {
  int L_matrix[a.size()+1][b.size()+1];
  int i,j;
  for(j = 0; j <= b.size(); j++){
    for(i = 0; i <= a.size(); i++){
      if(i == 0 || j == 0){L_matrix[i][j] = 0;}
      else if(a[i-1] == b[j-1]){ L_matrix[i][j] = L_matrix[i-1][j-1] + 1; }
      else{ L_matrix[i][j] = max( L_matrix[i-1][j], L_matrix[i][j-1]); }
    }
  }
  return L_matrix[a.size()][b.size()];
}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  size_t m;
  cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    cin >> b[i];
  }
  cout << l2(a, b) << endl;
}
