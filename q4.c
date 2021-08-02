#include <stdio.h>
int main(void) {
  int n,k;
  int m=0;
  printf("Digite n:\n");
  scanf("%d", &n);
  printf("Digite k:\n");
  scanf("%d", &k);
  for(int i=n; i>=k; i--){
    if (i%k==0)
    m=i;
printf("%d ", m);   
}  
    
}