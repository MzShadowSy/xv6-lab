#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"

int main()
{
	// int pid = fork();
	// if(pid > 0)
	// {
	//     printf("parent: child=%d\n", pid);
	//     pid = wait((int *) 0);
	//     printf("child %d is done\n", pid);
	// }
	// else if(pid == 0)
	// {
	//     printf("child: exiting\n");
	//     exit(0);
	// }
	// else
	// {
	//     printf("fork error\n");
	// }
	// exit(0);
	// return 0;

	// char buf[512];
	// int n;
	// for(;;)
	// {
	//     n = read(0, buf, sizeof buf);
	//     if(n == 1)
	//         break;
	//     if(n < 0)
	//     {
	//         fprintf(2, "read error\n");
	//         exit(1);
	//     }
	//     if(write(1, buf, n) != n)
	//     {
	//         fprintf(2, "write error\n");
	//         exit(1);
	//     }
	// }

	// char *argv[3];
	// argv[0] = "cat";
	// argv[1] = "hello.txt";
	// argv[1] = 0;
	//  argv[2] = 0;
	//  if(fork() == 0)
	//  {
	//      close(0);
	//      open("input.txt", O_RDONLY);
	//      exec("cat", argv);
	//      printf("test if program is not exit");
	//  }
	//  else
	//  {
	//      wait((int*)0);
	//  }
	//  exit(0);
	// if (fork() == 0)
	// {
	//     write(1, "hello ", 6);
	//     exit(0);
	// }
	// else
	// {
	//     wait(0);
	//     write(1, "world\n", 6);
	// }
	//

	mkdir("/dir");
	int fd = open("/dir/file", O_CREATE | O_WRONLY);
	close(fd);
	mknod("/console", 1, 1);
	exit(0);
