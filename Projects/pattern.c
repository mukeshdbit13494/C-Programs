int main() 
{ 
 
 int i=0,j=0,k=0,m;
 for(;;m--)
 {
 	for(i=0;i<10/2;i++)
 {
 	

		for(j=0;j<(5-1-i);j++)
 	   {
 		  printf(" ");	
	   }
		for(k=0;k<(2*i+1);k++)
 		printf("*");
 		printf("\n");
 }
 for(i=10/2-2;i>=0;i--)
 {
		for(j=0;j<(5-1-i);j++)
 	   {
 		  printf(" ");	
	   }
		for(k=0;k<(2*i+1);k++)
 		printf("*");
 		printf("\n");
 }
 }
  getchar(); 
  return 0; 
} 
