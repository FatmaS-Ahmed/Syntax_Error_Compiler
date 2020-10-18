

#ifndef     _STACK_INT_H
#define     _STACK_INT_H

#define Col_SIZE 128 
#define Row_SIZE 10
#define Max 4
#define bufsize  1000

char *curly_braket1 [] = {"{"} ;   // Please put the { in new line 
char *curly_braket2 [] = {"}"};    
char curly_braket1_flag = 0;
char curly_braket2_flag = 0;
char arr[Max];        
char filename[Max];                 

void removeEmptyLines(FILE * fp_source, FILE * fp_temp);
int isEmpty (char *str);
char* trim_space(char *str);
void FirstWord(char *str);
int discoverWord(void);
void AllFunctions(char *line , char index);
void is_sub_words(char *str , char index);
void isFor(char *str);
void isInclude(char *str) ;
void isVoid(char *str) ;
void isInt_Ch_Fl_D (char *str, char index);
void isWh_Sw_If_sizeof (char *str, char index);
void isBr_Con_Re (char *str, char index);   
void isCase (char *str) ;
void isTypedef (char *str);
void isDo_else(char *str, char index);
void isst_un_enu(char *str, char index);
void isGoto_default(char *str, char index);



#endif
