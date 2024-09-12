#include <bits/stdc++.h>
using namespace std;

int generateKey(int num1, int num2, int num3) {
  int key = 0;
  int multiplier = 1;

  while (num1 > 0 || num2 > 0 || num3 > 0) {
    int n1 = num1 % 10;
    int n2 = num2 % 10;
    int n3 = num3 % 10;

    int minimum = std::min({n1, n2, n3});

    key += minimum * multiplier;

    multiplier *= 10;

    num1 /= 10;
    num2 /= 10;
    num3 /= 10;
  }

  return key;
}

int main() { return 0; }
