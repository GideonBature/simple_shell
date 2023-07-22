#include "main.h"

envstruct *insert_end(char *key, char *value)
{
	envstruct *new_node = malloc(sizeof(envstruct));
	
	 if (new_node == NULL)
		return (NULL);

	new_node->key = key;
	new_node->value = value;
	new_node->next = NULL;

	if (head == NULL)
	{
		head = new_node;
		free(new_node);
		return (head);
	}

	while (head->next != NULL)
		head = head->next;

	head->next = new_node;
	free(new_node);
	return (head);
}

char *get_value(char *key)
{
	envstruct *temp = NULL;

	if (head == NULL)
                return (NULL);
	
	printf("%s 0", head->value);
	temp = head;
	while (temp != NULL)
	{
		if (temp->key == key)
			return (temp->value);
//		printf("%s 1", temp->value);
		temp = temp->next;
	}

	if (temp->key == key)
		return (temp->value);

	return (NULL);
}

int remove_value(char *key)
{
	envstruct *previous = NULL, *current = NULL, *next_node = NULL;

	if (head == NULL)
                return (1);

	if ((head->next == NULL) && (head->key == key))
	{
		head = NULL;
		return (0);
	}

	while (head != NULL)
        {
                if (head->key == key)
		{
			previous->next = next_node;
                        return (0);
		}
		previous = head;
		head = head->next;
        }
	return (1);
}
