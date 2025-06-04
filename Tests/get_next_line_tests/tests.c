#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*line;

	/*fd = open("file2.txt", O_RDONLY);
	line = get_next_line(fd);

	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	free(line);*/	

/*	***** Print lines from different file descriptors *****     */

	/*int	track_fd;

	fd = open("file4.txt", O_RDONLY);
	track_fd = 0;
	open("file5.txt", O_RDONLY);
	open("file6.txt", O_RDONLY);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		if (track_fd == 0)
		{
			track_fd++;
			fd++;
		}
		else if (track_fd == 1)
		{
			track_fd++;
			fd++;
		}
		else if (track_fd == 2)
		{
			track_fd -= 2;
			fd -= 2;
		}
		line = get_next_line(fd);
	}
	close(fd++);
	close(fd++);
	close(fd);
	free(line);*/
	return (0);
}
