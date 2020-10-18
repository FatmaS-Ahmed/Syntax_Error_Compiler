#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "comp_interface.h"
#include "comp_program.h"

                // 0        1      2     3       4      5         6        7      8         9       10         11
// char* Words_C[] = {"#include", "void","int","char", "float","double","while", "for", "break", "case", "continue", "switch",
	                          // "return", "if", "do", "else", "struct","union", "enum",
	                          // "typedef", "goto", "default", "sizeof", "long", "const", "register", "static","short",
	                          // "signed", "unsigned", "volatile", "extern", "auto"};
							 

void main(void) 
{ 	
    FILE *fp_source;
    FILE *fp_temp;	
	
    printf("Enter file path: "); //// user must enter exte
    scanf("%s", filename);
	
	fp_source = fopen(filename, "r");
	fp_temp   = fopen("test.tmp", "w");
	
    
    int Line_Numbers ;
	char str[Max] ;
    char c , fw[Max]; 	
	char ch ;
	int index_Words_C;
	
    char line[Row_SIZE][Col_SIZE]; 
	
    int i = 0;
    	
	// if (fp_source == NULL || fp_temp == NULL) 
	// {
		// printf("unable to open file\n");
		// exit(EXIT_FAILURE);
	// }
	
	// printf("\n The content of the file %s  are : \n",filename); 
	
	// while((ch = fgetc(fp_source))!= EOF)
    // {
		
        // putchar(ch);            ////   print every line 
    // }
	
	rewind(fp_source);
                                                   // int line[i][0]  line[i][1] line[i][2]  line[i][3]
	removeEmptyLines(fp_source, fp_temp);
	
	fclose(fp_source);
	fclose(fp_temp);
	
	remove(filename);
	rename("test.tmp" , filename);
	
	fp_source = fopen(filename, "r");
	
	printf("\n The content of the file %s  are : \n",filename);
	
	while((ch = fgetc(fp_source))!= EOF)
    {
		
        putchar(ch);            ////   print every line 
    }
	
	 rewind(fp_source);                                                     // int line[i][0]  line[i][1] line[i][2]  line[i][3]
	                                                    // for (strcoming= fgets(line[0],col size,fp) , strcoming !=EOF,strcoming= fgets(,,))
	while(fgets(line[i], Col_SIZE,fp_source))          // for (ch=getc(fp) , ch != EOF , ch=gets(fp))
	{
		line[i][strlen(line[i])] = '\0';   ///?????   // while (getc(fp))
        i++;
    }
         Line_Numbers = i;
		 printf("\n");
		 printf("total number of lines = %d\n",Line_Numbers);
	 
	i=0;
	while( i < Line_Numbers)
  {
	FirstWord(line[i]);
	
	printf("first word is %s\n",arr);
	
    index_Words_C = discoverWord();

	 if (index_Words_C >=0 && index_Words_C < 33  )
	 { 
		AllFunctions(line[i] ,index_Words_C);
	
		printf("index first word is %d\n",index_Words_C); 
		printf("\n Line is = %d  \n", i+1 );
   
	 }
	 
	 else if (index_Words_C == 111 )
	 {
		printf ("Shouldn't be here ") ; 
	 }
	 else if (index_Words_C == 501 )
	 {
		  printf ("Single cooment") ; 
	 }
	 else if (index_Words_C == 502  )
	 {
		  printf ("multLine cooment") ; 
	 } 
	i++ ;
  }
  
  if( curly_braket1_flag == curly_braket2_flag )
  {
	 printf("\n correct brackets \n ");
  }
   else 
  {
	 printf("\n ERROR : incorrect brackets \n ");
  }

  if( commentFlag1 == commentFlag2 )
  {
	 printf("\n correct mlticomment flag\n ");  
  }
    else 
  {
	 printf("\n ERROR : incorrect mlticomment flag \n ");
  }
    // Close the file 

  	
	fclose(fp_source); 
}
 