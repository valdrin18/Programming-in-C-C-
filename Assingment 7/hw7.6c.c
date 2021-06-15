/* CH-230-A
  A7.p6 simple_arithmetics Compute Devision (lanuage-C)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person {
    char name[30];
    int age;
};

//bubble function
void Bubble(struct person *per,int n, int (*func)(struct person, struct person)){

    int swapped=1,i=0,a;
    char b[50];
    while(swapped){
        swapped=0;
        for(i=0; i<n-1; i++){
            if(func(per[i],per[i+1])){
                strcpy(b,per[i].name);
                strcpy(per[i].name,per[i+1].name);
                strcpy(per[i+1].name,b);

                a=per[i].age;
                per[i].age=per[i+1].age;
                per[i+1].age=a;
                swapped=1;
            }
        }
        n--;
    }
}


//code to compare age
int compare1(struct person A,struct person B){
  if (A.age>B.age)
  {
    return 1;
  }
  else if (A.age==B.age)
  {
    if (strcmp(A.name,B.name)>0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
}

//code to compare names
int compare2(struct person A, struct person B){

  if (strcmp(A.name,B.name)>0)
  {
    return 1;
  }
  else if (strcmp(A.name,B.name)==0)
  {
    if (A.age>B.age)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return 0;
  }
}
//code to print
void print(struct person *p,int n){
    int i;
    for(i=0; i<n; i++){
        printf("{%s, %d}; ",(p[i].name),(p[i].age));
    }
    printf("\n");
}

struct person(*func)(struct person, struct person);

//main function
int main()
{
    //declared value n,scanned list elements per n
    int n,i;
    scanf("%d",&n);
    struct person list[n];

    for(i=0; i<n; i++){
        scanf("%s",list[i].name);
        scanf("%d",&list[i].age);
    }
    Bubble(list,n,compare2);
    print(list,n);

    Bubble(list,n,compare1);
    print(list,n);
    return 0;
}
