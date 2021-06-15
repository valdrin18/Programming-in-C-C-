#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void u(char *a){
    int i;
    for(i=0; i<strlen(a); i++){
        a[i]=toupper(a[i]);
    }
    printf("%s",a);
}

void l(char *a){
    int i;
    for(i=0; i<strlen(a); i++){
        a[i]=tolower(a[i]);
    }
    printf("%s",a);
}

void r(char *a){
    int i;
    for(i=0; i<strlen(a); i++){
        if(a[i]==tolower(a[i])){
            a[i]=toupper(a[i]);
        }
        else{
            a[i]=tolower(a[i]);
        }
    }
    printf("%s",a);
}

void e(){
    exit(1);
}

void(*func[4])(char *str)=
    {u,l,r,e};

int main()
{
    char a[50];
    fgets(a,50,stdin);
    int n;
    while(1){
        scanf("%d",&n);
        func[n-1](a);
    }

    return 0;
}
