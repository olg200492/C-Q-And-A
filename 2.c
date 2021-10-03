 #include <stdio.h>
 struct employee {
       int id;
       char name[32];
       };
    /* structure initialization */
    
void printStructEmployee(struct employee emp);
 int main(void)
 {
    struct employee info = {
       1,
       "B. Smith"
       };

    printStructEmployee(info);

    return 0;
 }
 void printStructEmployee(struct employee emp){
  printf("Here is a sample:\n");
  printf("Employee Name: %s\n", emp.name);
  printf("Employee ID #: %04d\n\n", emp.id);
 }