#include "main.h"

/**
 * insert_end - Insert node at end of list
 * @head: list root
 * @key: key of list
 * @value: Value to add
 *
 * Return: Pointer to head of list
 */
envstruct *insert_end(envstruct *head, char *key, char *value)
{
	envstruct *new_node = malloc(sizeof(envstruct));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (head == NULL)
	{
		return (new_node);
	}

	envstruct *curr = head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;

	return (head);
}

/**
 * get_value - Get value at key
 * @head: list root
 * @key: key of list
 *
 * Return: Value at given key
 */
char *get_value(envstruct *head, char *key)
{
	envstruct *curr = head;

	if (head == NULL || key == NULL)
	{
		return (NULL);
	}

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			return (curr->value);
		}
		curr = curr->next;
	}

	return (NULL);
}

/**
 * print_all - Get all members of list
 * @head: list root
 */
void print_all(envstruct *head)
{
	envstruct *curr = head;

	while (curr->next != NULL)
	{
		curr = curr->next;
	}
}

/**
 * remove_value - Remove value corresponding to key
 * @head: list root
 * @key: key to remove
 *
 * Return: Integer for success or failue
 */
int remove_value(envstruct **head, char *key)
{
	if (head == NULL || *head == NULL)
	{
		return (1);
	}

	envstruct *curr = *head;
	envstruct *prev = NULL;

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			if (prev == NULL)
			{
				*head = curr->next;
			}
			else
			{
				prev->next = curr->next;
			}
			free(curr->key);
			free(curr->value);
			free(curr);
			return (0);
		}

		prev = curr;
		curr = curr->next;
	}

	return (1);
}

/**
 * free_list - Free allocated spaces
 * @head: list root
 */
void free_list(envstruct *head)
{
	while (head != NULL)
	{
		envstruct *temp = head;

		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}
