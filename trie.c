#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_SIZE 26


/*--Trie Node--*/
typedef struct TrieNode 
{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isEndofWord; 
    char character; 
    double latitude; 
    double longitude; 
} TrieNode; 


/*--Create a new Node--*/ 
TrieNode *createTrieNode(){
    TrieNode *node; 
    node = malloc(size(TrieNode)); 
    node->isEndofWord = false; 

    for(int i = 0; i < ALPHABET_SIZE; i++){
        node->children[i] = NULL; 
    }
    return node; 
}

/*--Insert a new Node--*/
void insert(TrieNode *root, char *city){
    if((strlen(city) - 1) != 0){
        char letter = *city; 
        if(root->children[letter - 97] == NULL){
            TrieNode *node = NULL;
            node = createTrieNode(); 
            node->character = letter; 
            root->children[]
        }
    }
}

https://github.com/TheAlgorithms/C/blob/master/data_structures/trie/trie.c