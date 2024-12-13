# Sorting algorithms & Big O

[![forthebadge](https://forthebadge.com/images/badges/made-with-markdown.svg)](https://forthebadge.com)

## DESCRIPTION

This project, written in C, is dedicated to the study and implementation of key sorting algorithms, while analyzing their performance using Big O notation. The goal is to understand how different algorithms behave in terms of algorithmic complexity and performance optimization when sorting data.

![Image](https://kmcompsci.weebly.com/uploads/1/2/0/3/120354112/bigosorting_orig.png)

## INSTALLATION

### Clone the GIT repository :
Open a terminal and run the following command to clone the project to your local machine:

```
https://github.com/lilripzoa/holbertonschool-sorting_algorithms.git
```
## BUILD WITH :

[VI EDITOR](https://linux.goffinet.org/administration/traitement-du-texte/editeur-de-texte-vi/)
### USING :
[LANGAGE C](https://fr.wikipedia.org/wiki/C_(langage))

## line for compile

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89
```
![GIF Animation](https://i.giphy.com/media/v1.Y2lkPTc5MGI3NjExcHN3bDRqdnQ3MGpweGo0dWlub3Jod2s5ZzBncmVyNWdjaWZ5ZXlwZSZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/2IudUHdI075HL02Pkk/giphy.gif)


## DATA STRUCTURE
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
![GIF Animation](https://i.giphy.com/media/v1.Y2lkPTc5MGI3NjExdnl3YzF2MTR6cnRnMjQ0aWw4Ymw3M2p5Z2s5d3prbGMxcW5pZ3JkZiZlcD12MV9pbnRlcm5hbF9naWZfYnlfaWQmY3Q9Zw/ITXgZuGi17YwCQIofC/giphy.gif)

## TASKS TO BE COMPLETED (19 stasks):

1. **Bubble sort**
2. **Insertion sort**
3. **Selection sort**
4. **Quick sort**
