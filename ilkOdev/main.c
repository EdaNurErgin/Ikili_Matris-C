#include <stdio.h>
#include <stdlib.h>

/* Odev : Açiklama : m x n ikili matris oldugunu düüsünün. Bu matrisin degerleri 0 sa 
deniz, 1 se karayi ifade etmektedir. Bir adanin alani, adada 1 degerine sahip hücrelerin sayisidir. Verilen 
matristeki bir adanin maksimum alanini döndürür */

int main(int argc, char *argv[]) {
	
	
	
    printf(" Hazirlayan : Eda Nur Ergin - 1220505032");
	printf("\n\n");
	printf("-------------------------------------");
	printf("\n\n");
	
	 
	int AdaAlan[20][20]; //matris m x n
	int satir=2 ; //satir=m
	int sutun=2 ; //satir=n
	int i=0; //matrisimizi olustururken dongu icerisinde kullanacagimiz degiskenleri tanimladik.
	int j=0;//matrisimizi olustururken dongu icerisinde kullanacagimiz degiskenleri tanimladik.
	
	printf("Matrisimizi Olusturuyoruz\n");
	printf("Lutfen matrisimizin degerlerini 1 veya 0 giriniz\n\n");
	printf("1 veri girisi karayi ifade eder. \n") ;
	printf("2 veri girisi denizi ifade eder. \n");
	
	for (i=0;i<satir;i++)
	{
		
			
		
		for(j=0;j<sutun;j++) // burada [][0] dan [][1]e gecisi sagliyoruz
		{
			
			
			printf("\n  Degeriniz : [%d] [%d] -->",i+1,j+1);
			scanf("%d",&AdaAlan[i][j]); //hücrelerin degerlerini kullanicidan aldik.
			
			
			if(AdaAlan[i][j]==0 || AdaAlan[i][j]==1  ) //Kullanicinin veri girisinin dogrulugunu kontrol ettik
			{
				printf("Dogru eleman girisi");
				
			}
			else
			{
				printf("Kurala uygun eleman girmediniz.Tekrar deneyiniz.");
				return 0 ;
			}
			
		
		}
		
		
	printf("\n");//alt satira geçtik [0][]den [1][] e gecmemizi sagladi.
	}
	
	int AdaAlanToplam ; //Adamizin toplam alanini tanimladik
	AdaAlanToplam = AdaAlan[0][0]+AdaAlan[0][1]+AdaAlan[1][0]+AdaAlan[1][1]; //Adamizin alanini hesaplattik.
	
	if (AdaAlanToplam!=0) //Adamizin sadece denizden mi olustugunu veya kara parcasi icerip icermedigini sorguladik Adamiz kara parcasi iceriyorsa
	//adamizin alanini yazdirdik.
	{
		printf("Adamda kara parcasi var \n");
		printf("Adamin alani : %d",AdaAlanToplam);
	}
	
	else 
	{
		printf("Adamda sadece deniz var , kara parcasi yok \n");
		printf("Adamin Alani Sifir");
	}
	
	
	return 0;
}
