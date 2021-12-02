#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    fd = open("demo.txt",O_RDWR);

    char data[11] = {'\0'};

    lseek(fd, // kashat seek karaycha ahe
          4,  // kiti ne move karaycha
          1);  //

    read(fd,  // kashatun read karaycha tyacha fd
          data,  //kashat read karaycha tyacha mokla array
          5); // kiti read karaycha tyacha size byte made
    write(1,data,5); // printf();
    close(fd);
}

