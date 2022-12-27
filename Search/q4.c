#include<stdio.h>
#include<math.h>
int jumpSearch (int a[], int size, int key)
{
    int start=0;
    int end=sqrt(size);
    while (a[end]<=key && end<size){
        start=end;
        end=end+sqrt(size);
        if(end>size-1){
            end=size;}}
    for(int i=start; i<end; i++){
        if(a[i]==key){
            return(i);} }
    return (-1);
}
void main()
{
    int i,n,a[100],key,size,x;
    printf("Enter n");
    scanf("%d",&n);
    printf("Enter elements ");
    for(int i=0; i<n; i++) {
        scanf("%d",&a[i]);}
    printf("Enter element to be searched ");
    scanf("%d",&key);
    x=jumpSearch(a, n, key);
    if(x>0){
        printf("Element found at location- %d ", x+1); }
    else{
        printf("Element not found");}
}