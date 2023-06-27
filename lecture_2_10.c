/*enum
only intiger constant
can be declare in local scope
automatic initializa by complier
*/

#include<stdio.h>
enum day{mon=1,tue=2,we=3,thur=4,fri,sat,sun};

int main(){

enum day today = mon;
//printf("%d\n",today);
if(today==mon||today==tue||today==we||today==thur){printf("\ntoday is working day shit\n");}
else 
{printf("\nlat get laid\n");}

    return 0;
}