#include <stdio.h>
void main(){
  int a[10], i, n, j, c;
  printf("Enter number of elements");
  scanf("%d", &n);
  printf("Enter elements");
  for (i = 0; i < n; i++){
    scanf("%d", &a[i]);}
  for (i = 0; i < n - 1; i++){
    c = 0;
    for (j = i + 1; j <= n - 1; j++){
      if (a[j] == a[i]){
        c++;}}
    if (c > 0){
    printf("Repeated number is ");
    printf("%d\n", a[i]);}}
}