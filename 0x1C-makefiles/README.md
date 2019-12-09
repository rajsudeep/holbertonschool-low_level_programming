# C programming: Makefiles

### [0. make -f 0-Makefile](./0-Makefile)
> * name of the executable: holberton
> * rules: all
> * variables: none
### [1. make -f 1-Makefile](./1-Makefile)
> * name of the executable: holberton
> * rules: all
> * variables: CC, SRC
  >   * CC: the compiler to be used
  >   * SRC: the .c files
### [2. make -f 2-Makefile](./2-Makefile)
> * name of the executable: holberton
> * rules: all
> * variables: CC, SRC, OBJ, NAME
  >   * OBJ: the .o files
  >   * NAME: the name of the executable
### [3. make -f 3-Makefile](./3-Makefile)
> * name of the executable: holberton
> * rules: all, clean, oclean, fclean, re
  >   * all: builds your executable
  >   * clean: deletes all Emacs and Vim temporary files along with the executable
  >   * oclean: deletes the object files
  >   * fclean: deletes the Emacs temporary files, the executable, and the object files
  >   * re: forces recompilation of all source files
> * variables: CC, SRC, OBJ, NAME, RM
  >   * RM: the program to delete files
### [4. A complete Makefile](./4-Makefile)
> * name of the executable: holberton
> * rules: all, clean, fclean, oclean, re
> * variables: CC, SRC, OBJ, NAME, RM, CFLAGS
  >   * CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
### [5. Island Perimeter](./5-island_perimeter.py)
> Create a function def island_perimeter(grid): that returns the perimeter of the island described in grid:
> * grid is a list of list of integers:
  >   * 0 represents a water zone
  >   * 1 represents a land zone
  >   * One cell is a square with side length 1
  >   * Grid cells are connected horizontally/vertically (not diagonally).
  >   * Grid is rectangular, width and height don’t exceed 100
