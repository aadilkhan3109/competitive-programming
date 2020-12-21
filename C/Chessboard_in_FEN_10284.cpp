#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> m;
void move(int x, int y, int a, int b) {
  if (x < 0 || x > 7 || y < 0 || y > 7 || (m[x][y] != 'x' && m[x][y] != '-'))
    return;
  m[x][y] = 'x';
  move(x + a, y + b, a, b);
}
int kn[16] = {2, 1, 2, -1, 1, 2, 1, -2, -2, 1, -2, -1, -1, 2, -1, -2};
void knight(int x, int y){
  for (int i = 0; i < 15; i += 2){
    int a = x + kn[i], b = y + kn[i + 1];
    if (a > 7 || a < 0 || b > 7 || b < 0)
      continue;
    if (m[a][b] == '-')
      m[a][b] = 'x';
  }
}
void rook(int x, int y) {
  move(x, y + 1, 0, 1);
  move(x, y - 1, 0, -1);
  move(x + 1, y, 1, 0);
  move(x - 1, y, -1, 0);
}

void bishop(int x, int y) {
  move(x + 1, y + 1, 1, 1);
  move(x - 1, y + 1, -1, 1);
  move(x + 1, y - 1, 1, -1);
  move(x - 1, y - 1, -1, -1);
}
void pown(int x, int y, int z) {
  x += z;
  if (x < 0 || x > 7)
    return;
  if ((y - 1) >= 0 && m[x][y - 1] == '-')
    m[x][y - 1] = 'x';
  if ((y + 1) < 8 && m[x][y + 1] == '-')
    m[x][y + 1] = 'x';
}
void king(int x, int y)
{
  pown(x, y, -1);
  pown(x, y, 1);
  if ((x - 1) >= 0 && m[x - 1][y] == '-')
    m[x - 1][y] = 'x';
  if ((y - 1) >= 0 && m[x][y - 1] == '-')
    m[x][y - 1] = 'x';

  if ((x + 1) < 8 && m[x + 1][y] == '-')
    m[x + 1][y] = 'x';
  if ((y + 1) >= 0 && m[x][y + 1] == '-')
    m[x][y + 1] = 'x';
}
int main()
{
  ios::sync_with_stdio(0), cin.tie(0);
  string str;
  while (getline(cin, str))
  {
    m = vector<vector<char>>(8, vector<char>(8, '-'));
    for (int i = 0, k = 0; i < 8; i++)
    {
      int j = 0;
      while (str.size() > k && str[k] != '/')
      {
        if (isdigit(str[k]))
          j += str[k] - '0';
        else
        {
          m[i][j] = str[k];
          j++;
        }
        k++;
      }
      k++;
    }
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        char c = m[i][j];
        if (c == '-' || c == 'x')
          continue;
        if (tolower(c) == 'r')
          rook(i, j);
        else if (tolower(c) == 'b')
          bishop(i, j);
        else if (tolower(c) == 'q')
        {
          bishop(i, j);
          rook(i, j);
        }
        else if (tolower(c) == 'n')
          knight(i, j);
        else if (tolower(c) == 'k')
          king(i, j);
        else if (c == 'p')
          pown(i, j, 1);
        else
          pown(i, j, -1);
      }
    }
    int ans = 0;
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        if (m[i][j] == '-')
          ans++;
      }
    }
    cout << ans << endl;
  }
}