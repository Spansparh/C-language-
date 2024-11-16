/*Author: Michael Mwaura 
Reg no: CT101/G/24419/24
*/

 #include<stdio.h>
 #include<string.h>
 struct book {
   char title [30];
    char author [30];
    int publication_year;
    char ISBN [13];
    float price;
    }book1,book2;
    
    int main(){
        
        
        printf("title:%s\n",book1.title);
        scanf("enter:%s\n",book1.title);
        printf("author:%s\n",book1.author);
        scanf("enter:%s\n",book1.author);
        printf("publication_year:%d\n",book1.publication_year);
        printf("ISBN:%s\n",book1.ISBN);
        printf("price:%f\n",book1.price);
        
    }
    
