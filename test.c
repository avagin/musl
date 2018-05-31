#include <stdio.h>
  
int main()
{
        char str[] = "sigmask: 0x200";
        long long mask = 0;

        printf("%d\n", sscanf(str, "sigmask: %Lx", &mask));
        printf("%llx\n", mask);

        return 0;
}

