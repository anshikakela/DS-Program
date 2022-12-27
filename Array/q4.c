#include <stdio.h> 
void main(){
  int a[10], i, n, ele, j, pos;
  printf("Enter number of elements");
  scanf("%d", &n);
  printf("Enter elements");
  for (i = 0; i < n; i++){
    scanf("%d", &a[i]);}
  printf("Enter element to be deleted");
  scanf("%d", &ele);
  for (i = 0; i < n; i++){
    if (a[i] == ele){
      pos = i;
      for (j = pos; j < n; j++){
        a[i] = a[i + 1];}}}
  n--;
  printf("Finalised array is ");
  for (i = 0; i < n; i++){
    printf("%d\n", a[i]);}
}