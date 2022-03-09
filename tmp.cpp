#include <iostream>
#include <cstdlib>
using namespace std;

int main () {
  int n, m, sumN = 0, sumM = 0;
  cout << "請輸入兩個正整數：";
  scanf("%d %d", &n, &m);
  // printf("%d %d", n, m);
  for (int i = 1; i <= n; i++) {
    printf("+ ");
    sumN += i;
  }
  for (int i = 1; i <= m; i++) {
    printf("- ");
    sumM += i;
  }
  printf("\n");

  int sumNToM = 0;
  int sumOfEven = 0;
  if (n < m) {
    for (int i = n; i <= m; i++) {
      printf("%d ", i);
      sumNToM += i;
      if (i%2==0)
        sumOfEven += i;
    }
  }
  else if (n > m) {
    for (int i = m; i <= n; i++) {
      printf("%d ", i);
      sumNToM += i;
      if (i%2==0)
        sumOfEven += i;
    }
  }
  else
    printf("n=m");
  printf("\n");
  
  for (int i = 65; i < (65+n); i++)
    printf("%c", i);
  printf("\n");
  for (int i = 122; i > (122-m); i--)
    printf("%c", i);
  printf("\n");

  printf("%d\n%d\n%d\n", sumNToM, sumOfEven, sumN - sumM);

  // 0-1+2-3+4-...+M
  int sigmaM = 0;
  for (int i = 0; i <= m; i++) {
    if (i%2 == 0)
      sigmaM += i;
    else 
      sigmaM -= i;
  }
  printf("%d", sigmaM);
  printf("\n");
  
  // 公因數
  for (int i = 1; i <= n || i <= m; i++) {
    if ((m%i == 0) && (n%i == 0))
      printf("%d ", i);
  }
  printf("\n");

  // 小於100的所有公倍數
  for (int i = 1; i <= 100; i++) {
    if ((i%n == 0) && (i%m == 0))
      printf("%d ", i);
  }

  return 0;
}