#include <stdio.h> 
int all_files; 
extern void sub(void); 
int main(int argc, char*argv[]) 
{ 
   sub(); 
   printf("%d\n", all_files); 
   system("PAUSE");
   return 0;
}
