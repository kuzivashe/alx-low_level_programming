#include "hash_tables.h"

/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: hash table to look into
  * @key:the key you are looking for
  *
  * Return: value associated with the element or NULL if
  * key could not be found
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			break;
		}
		node = node->next;
	}
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (node->value);
	}
}
