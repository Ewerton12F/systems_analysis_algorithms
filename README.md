# Systems Analysis - Algorithms
Algorithms Exercises on C Programming Language

## To run C scripts
First you need to install a C compiler like GCC. You can get on [https://gcc.gnu.org/](https://gcc.gnu.org/).

Then, to compile the source code and generate a executable file you must run:

```shell
gcc -o executable_name file_name.c
```

And the you can run it:

```shell
./executable_name
```

Done!

## Exercises

### Sequencing

[exercise_01.c](exercises_sequencing/exercise_01.c)

```c
#include <stdio.h>

int main(){
    printf("Olá mundo!\n");
    return 0;
} 
```

[exercise_02.c](exercises_sequencing/exercise_02.c)

```c
#include <stdio.h>

int main(){
    char name[20];
    scanf("%s", name);
    printf("Olá %s, bem-vindo(a) ao mundo da linguagem de programação C!", name);
    return 0;
}
```

[exercise_03.c](exercises_sequencing/exercise_03.c)

```c
#include <stdio.h>

int mult(int a, int b){
    int s = a*b;
    return s;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",mult(a,b));
    return 0;
}
```