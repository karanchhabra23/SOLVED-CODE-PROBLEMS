#include<stdio.h>
int main( )
{
 char g ;
 int yos, qual, s ;
 printf( "Enter Gender(m/f), Years of Service and Qualifications ( 0 = Graduation, 1 = Post-Graduation ):" ) ;
 scanf( "%c %d %d", &g, &yos, &qual ) ;
 if ( g == 'm' && yos >= 10 && qual == 1 )
 s = 15000 ;
 else if ( ( g == 'm' && yos >= 10 && qual == 0 ) ||
 ( g == 'm' && yos < 10 && qual == 1 ) )
 s = 10000 ; 
 else if ( g == 'm' && yos < 10 && qual == 0 )
 s = 7000 ;
 else if ( g == 'f' && yos >= 10 && qual == 1 )
 s = 12000 ;
 else if ( g == 'f' && yos >= 10 && qual == 0 )
 s = 9000 ;
 else if ( g == 'f' && yos < 10 && qual == 1 )
 s = 10000 ;
 else if ( g == 'f' && yos < 10 && qual == 0 )
 s = 6000 ;
 printf ( "\nSalary of Employee = %d", s ) ;
} 