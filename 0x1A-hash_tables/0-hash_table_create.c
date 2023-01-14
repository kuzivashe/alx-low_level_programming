#include "hash_tables.h"

/**
  * hash_table_create - hash a hash table
  * @size: the size of the hash table
  *
  * Return: returns the hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	/**
	  * create a pointer and allocate a memory to the hash table
	  * nodes
	  * validate the table and assign its size
	  * traverse the table and set its initial value to null
	  */
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_table_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
