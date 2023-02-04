#include <stdio.h>
// klavyeden metin girilsin.Kullanıcıya hangi harfin kaç kez geçtiğini bulmak istediği sorulsun
// input: bilgisayar     adeti istenen harf: i    output: 2

int main()

{
  
 char metin[50];
 int i = 0;
 int HarfSayaci = 0;
 char harf;
 
 printf("metin girin: ");
 gets(metin);
 
 printf("hangi harfin kac kez gectigini bulmak istersiniz?: ");
 scanf("%c",&harf);
 
 while(metin[i] != '\0')
 {
  if(metin[i] == harf) 
  {
    HarfSayaci++;
  }
     
  i++;  
 }
 
 printf("%c harfi metinde %d kez gecmektedir",harf,HarfSayaci);

 return 0;
 
}
