#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
        int pid;
        pid=fork();
        if(pid<0)
        {
                printf("\n Error");
                exit(1);
        }
        else if(pid==0)
        {
                printf("\nThis is child \t My PID is : %d  \t my parent ID: %d \n",getpid(),getppid());               
                exit(0);
        }
        else
        {
                printf("\n This is parent \t My PPID is :%d\n",getpid());
                exit(0);
        }
        return 0;
}
