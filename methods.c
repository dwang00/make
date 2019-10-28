#include<stdio.h>
#include <stdlib.h>

double average(int *arr, int len) {
  int ans = 0, i;
  for(i = 0; i < len; i++) {
    ans += arr[i];
  }
  return ans / (double) len;
}

void copy(int *arr1, int *arr2, int len) {
  int i;
  for (i = 0; i < len; i ++) {
    arr2[i] = arr1[i];
  }
}

int length(char *str) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}
