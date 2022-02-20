#include<iostream>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include"header.h"

int code{
	int sum = 0, num = 0;


	int fd1 = open("input.txt", O_RDONLY); // input file
	int fd2 = open("output.txt", O_CREAT | O_WRONLY, 0666); //output file

	dup2(fd1, 0);

	int size = 0;
	scanf("%d", &size);

	for (int i = 0; i < size;i++) {
	  scanf("%d", &num);
	  sum += num;
	}

	printf("Sum: %d", sum);

	close(fd1);
	close(fd2);

	return 0;
}
