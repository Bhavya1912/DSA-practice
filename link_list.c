#include <stdio.h>
#include <stdlib.h>
struct node			
{
  int data;
  struct node *next;
};
struct node *head;

void print ()
{

  printf ("\nList: ");
  while (head != NULL)
    {
      printf ("\n%d ", head->data);
      head = head->next;
    }
}

void begin_insert (int element)	
{
  struct node *ptr = (struct node *) malloc (sizeof (struct node *));
  if (ptr == NULL)
    {
      printf ("EXIT\n");
    }
  else
    {
      ptr->data = element;
      ptr->next = head;
      head = ptr;
      printf ("Node inserted\n");	
    }
}

void main ()
{
  int input, element;
  do
    {
      printf ("Enter the element to insert?\n");
      scanf ("%d", &element);
      begin_insert (element);
      printf ("Press 1 to insert more element otherwise Press 0 to show list\n");	
      scanf ("%d", &input);
    }
  while (input == 1);
  print ();
}
