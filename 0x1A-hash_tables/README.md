# 0x1A Hash Tables in C

- This directory houses solution to the following ALX_SE tasks on C Hash Tables Data Structure:

0. >>> ht = {}
mandatory
Write a function that creates a hash table.

. Prototype: hash_table_t *hash_table_create(unsigned long int size);
  . where size is the size of the array
. Returns a pointer to the newly created hash table
. If something went wrong, your function should return NULL

1. djb2
mandatory
Write a hash function implementing the djb2 algorithm.

. Prototype: unsigned long int hash_djb2(const unsigned char *str);
. You are allowed to copy and paste the function from this page

2. key -> index
mandatory
Write a function that gives you the index of a key.

. Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
  . where key is the key
  . and size is the size of the array of the hash table
. This function should use the hash_djb2 function that you wrote earlier
. Returns the index at which the key/value pair should be stored in the array of the hash table
. You will have to use this hash function for all the next tasks
