#include <stdio.h>
#include <locale.h>
main(){
		setlocale(LC_ALL,"Turkish");
	int a=1,i=0,b,h=0;
  while(a!=0){
  	i++;
  	printf("%d. sayý: ",i);
  	scanf("%d",&a);
  	h+=a;
  }printf("sonuc: %d",h);
}
