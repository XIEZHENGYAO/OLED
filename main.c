
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>        
#include "OLED12864.h"   

/*************************************************************************
*                      
*
*  �������ƣ�Dly_ms
*  ����˵������ʱ��������
*  ����˵������
*  �������أ���
*  �޸�ʱ�䣺2015-4-14
*  ��    ע����ͬ�����ò�ͬ��forѭ��
*************************************************************************/
void Dly_ms(int ms)
{
   int ii,jj;
   if (ms<1) ms=1;
   for(ii=0;ii<ms;ii++)
     for(jj=0;jj<1335;jj++);  //16MHz--1ms
     //for(jj=0;jj<4006;jj++);  //48MHz--1ms 
     //for(jj=0;jj<5341;jj++);    //64MHz--1ms  
} 
/*********************������************************************/
int main(void) 
{    
  
  LCD_Init();  
  
  //for(;;) 
 	 {  
      LCD_Print(30,0,"--momo--"); 
      LCD_Print(18,2,"test OLED!!");      
      LCD_Print(20,4,"qq296768324");
      LCD_Print(12,6,"chinaunix.com");  
     
      
  	}
return 0;
}