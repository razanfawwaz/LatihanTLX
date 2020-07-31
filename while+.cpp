#include <cstdio>

int main() {
  int N;
  while (scanf("%d", &N) != EOF){
  
  int hasil = 0;
  for (int i = 0; i < N; i++) {
    int Bi;
    scanf("%d", &Bi);
    hasil += Bi;
  }
    printf("%d\n", hasil);
}


}
