# C programming: malloc, free
## General Concept Guidance:
* [0x0a - malloc & free - quick overview](https://docs.google.com/presentation/u/1/d/1awucWwPvD8BU783JVqzDXeSerU7eB504M6xRKKZndAI/edit#slide=id.p)
* [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64)
* [Automatic and dynamic allocation, malloc and free](https://intranet.hbtn.io/concepts/62)
### 0. Float like a butterfly, sting like a bee
> Write a function that creates an array of chars, and initializes it with a specific char.
> * NULL if size = 0
> * pointer to array or NULL if it fails
### 1. The woman who has no imagination has no wings
> Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
> * The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
### 2. He who is not courageous enough to take risks will accomplish nothing in life
> Write a function that concatenates two strings.
> * The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
### 3. If you even dream of beating me you'd better wake up and apologize mandatory
> Write a function that returns a pointer to a 2 dimensional array of integers.
> * Each element of the grid should be initialized to 0
> * If width or height is 0, negative or failure, return NULL
### 4. It's not bragging if you can back it up
> Write a function that frees a 2 dimensional grid previously created by your alloc_grid function
### 5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe
> Write a function that concatenates all the arguments of your program.
> * Returns NULL if ac == 0 or av == NULL
> * Returns a pointer to a new string, or NULL if it fails
### 100. I will show you how great I am
> Write a function that splits a string into words.
> * Each element of this array should contain a single word, null-terminated