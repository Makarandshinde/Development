#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("demo.txt",O_RDWR);

    char data[30]="Marvellous";

    write(fd,  // kashat lihaycha tyacha fd
          data,  //kay lihaycha to data
          10); // kiti lihaycha tyacha size byte made

}
