<h1 align="center">Welcome to GNL 👋</h1>
<p>🪡 Return the next line of given file descriptor every time you call the function

---

- Status: Finished
- Result: 125%

---

## Install

```sh
git clone https://github.com/peguimasid/42-GNL get_next_line
```

## Usage

1. Inside project dir create a text file (`file.txt`)

```
this is the first line
this is the second line
how many times you gonna call me?
```

2. Create a `main.c` file

```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("file.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
}
```

## Run

```sh
 gcc get_next_line.c get_next_line.h get_next_line_utils.c main.c && ./a.out
```

## Author

👤 **Guilhermo Masid**

- Github: [@peguimasid](https://github.com/peguimasid)
- LinkedIn: [@guilhermo-masid](https://linkedin.com/in/guilhermo-masid-494677b8)

## Show your support

Give a ⭐️ if this project helped you!
