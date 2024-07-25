#include <stdio.h>

int main() {
  //--------------------------------------
  char word[10];
  printf("---------CALCULATOR MANUAL----------\n");
  printf("TYLE y OR yes TO RUN PROGRAM:");
  scanf("%s" , word);
  if (strcmp(word, "y") == 0) {
    char bro[10];
    printf("TYPE plus,divide,multiply AND minus TO CALCULATE \n");
    printf("CHOOSE OPERATION:");
    scanf("%s" , bro);
  if (strcmp(bro, "plus") == 0) {
    int a;
    int b;
    printf("ENTER FIRST NUMBER:");
      scanf("%d" , &a);
      printf("ENTER SECOND NUMBER:");
scanf("%d" , &b);
    int result = a + b;
    printf("RESULT: %d" , result);
  }
    else if(strcmp(bro, "minus") == 0) {
      int c;
      int d;
      printf("ENTER FIRST NUMBER:");
      scanf("%d" , &c);
printf("ENTER SECOND NUMBER:");
      scanf("%d" , &d);
int results = c - d;
      printf("%d", results);
    }
    else if(strcmp(bro,"multiply") == 0) {
      int e;
      int f;
      printf("ENTER FIRST NUMBER:");
      scanf("%d" , &e);
  printf("ENTER SECOND NUMBER:");
      scanf("%d" , &f);
int result1 = e * f;
      printf("%d" , result1);
    }
    else if(strcmp(bro,"divide") == 0) {
      int g;
      int h;
      printf("ENTER FIRST NUMBER;");
      scanf("%d",&g);
printf("ENTER SECOND NUMBER:");
      scanf("%d",&h);
int result3 = g / h;
      printf("RESULT: %d", result3);
    }
else {
  printf("INVALID");
}
  }
    else if (strcmp(word, "yes") == 0) {
      char broo[10];
    printf("TYPE plus,divide,multiply AND minus TO CALCULATE \n");
    printf("CHOOSE OPERATION:");
    scanf("%s" , broo);
  if (strcmp(broo, "plus") == 0) {
    int aa;
    int bb;
    printf("ENTER FIRST NUMBER:");
      scanf("%d" , &aa);
      printf("ENTER SECOND NUMBER:");
scanf("%d" , &bb);
    int result = aa + bb;
    printf("RESULT: %d" , result);
  }
else if(strcmp(broo, "minus") == 0) {
      int cc;
      int dd;
      printf("ENTER FIRST NUMBER:");
      scanf("%d" , &cc);
printf("ENTER SECOND NUMBER:");
      scanf("%d" , &dd);
int resultss = cc - dd;
      printf("%d", resultss);
}
else if(strcmp(broo,"multiply") == 0) {
      int ee;
      int ff;
      printf("ENTER FIRST NUMBER:");
      scanf("%d" , &ee);
  printf("ENTER SECOND NUMBER:");
      scanf("%d" , &ff);
int result2 = ee * ff;
      printf("%d" , result2);
}
else if(strcmp(broo,"divide") == 0) {
      int gg;
      int hh;
      printf("ENTER FIRST NUMBER:");
      scanf("%d",&gg);
printf("ENTER SECOND NUMBER:");
      scanf("%d",&hh);
int result4 = gg / hh;
      printf("RESULT: %d", result4);
}
      else {
        printf("INVALID");
      }
    }
else {
  printf("false");
}
  return 0;
}
//-----------------------------------------
