#include "lists.h"

/**
 * check_cycle - f#include "lists.h"
 *
 */**
 * check_cycle - function checking if singly linked list has a cycle or not
 *  * @list: pointer the beginning #include "lists.h"
 *
 */**
  * check_cycle - function checking if singly linked list has a cycle or not
  *  * @list: pointer the beginning of #include "lists.h"
  *
  */**
   * check_cycle - function checking if singly linked list has a cycle or not
   *  * @list: pointer the beginning of the#include "lists.h"
   *
   */**
    * check_cycle - function checking if singly linked list has a cycle or not
    *  * @list: pointer the beginning of the no#include "lists.h"
    *
    */**
     * check_cycle - function checking if singly linked list has a cycle or not
     *  * @list: pointer the beginning of the node
#include "lists.h"

     /**
      *  * check_cycle - function checking if singly linked list has a cycle or not
      *   * @list: pointer the beginning of the node
    #include "lists.h"

    /**
     *  * check_cycle - function checking if singly linked list has a cycle or not
     *   * @list: pointer the beginning of the node
  #include "lists.h"

  /**
   *  * check_cycle - function checking if singly linked list has a cycle or not
   *   * @list: pointer the beginning of the node
   *    * Return: 0 for no cycle, 1 for a cycle
   *     */
     int check_cycle(listint_t *list)
{
		listint_t *current, *check;

			if (list == NULL || list->next == NULL)
						return (0);
				current = list;
					check = current->next;

						while (current != NULL && check->next != NULL
										&& check->next->next != NULL)
						{
									if (current == check)
													return (1);
											current = current->next;
													check = check->next->next;
						}
							return (0);
}
