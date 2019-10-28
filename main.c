#include<stdio.h>
#include <stdlib.h>
#include "header.h"

void main() {
  int ot9[9] = {922, 111, 119, 1229, 21, 324, 528, 423, 614},
      arr[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int *tdoong = ot9, *zero = arr;
  printf("average: %lf\n", average(ot9, 9));
  int i;
  copy(ot9, arr, 9);
  printf("result of copy: ");
  for (i = 0; i < 9; i++) {
    if (i < 8) {
      printf("%d, ", arr[i]);
    }
    else {
      printf("%d ", arr[i]);
    }
  }
  printf("\n");
  char *str = "najeongmosajimidachaetzu";
  printf("%s len: %d\n", str, length(str));
}
