#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int x,y;
	int tab[10][10];
	int sum;
 	srand(time(0));

	for(y=0;y<10;y++)
   	{
   		
   		for(x=0;x<10;x++)
   		{
   			tab[y][x]=rand()%5+1;
   			cout << tab[y][x] << " ";			
   		}
   		
   		
   	cout << endl;
   	}
   	
   	
   	for(int i=0;i<10;i++)
   	{
   		for(int j=0;j<10;j++)
   		{
   			sum=sum+tab[i][j];	
		}
		
	}
   	cout <<"Suma: "<< sum;


   return 0;
}
