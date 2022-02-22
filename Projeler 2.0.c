#include <stdio.h>

int main() {
    
    printf("**********FAKTORİYEL HESAPLAMA*********\n\n");
    
    int i,sayi;
    int factor=1;
    
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);
    

    for (i=1;i<=sayi; i++) {
        factor=factor*i;
    }
    printf("Faktoriyel değeri: %d \n\n", factor);
    
    
    
    
    return 0;
}

