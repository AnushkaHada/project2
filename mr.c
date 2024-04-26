#include "mr.h"

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hash.h"
#include "kvlist.h"


void* thread_fn(void* arg) {
    size_t num = *(int*)arg;
    printf("subthread received %zu\n", num);
    return NULL;
}

void* thread_fnReduce(void* arg) {
    size_t num = *(int*)arg;
    printf("subthread received %zu\n", num);
    return NULL;
}

void (*mapper_t)(kvpair_t* kv, kvlist_t* output)
{
    
    // dived input  into smaller lists.
    // ( fhfhfh ) 
    // split onto every word and send to map reduce
    printf("subthread received %zu\n", num);

}
typedef void (*reducer_t)(char* key, kvlist_t* list, kvlist_t* output){
    // each pair has to have same key
    //shuffle phase: reduce into one pair, increase count
    //

}

void map_reduce(mapper_t mapper, size_t num_mapper, reducer_t reducer,
                size_t num_reducer, kvlist_t* input, kvlist_t* output) {
                    // Input ( (word, 1) , () , ()  () ()) 
                    // example thread = 2
                    pthread_t t;
                    

                    kvlist_t* splitted = (kvlist_t**)calloc(num_mapper, sizeof(kvlist_t*));

                    
                    kvlist_iterator_t* itor = kvlist_iterator_new(input); 
                    while(true){
                        kvpair_t* pair = kvlist_iterator_new(itor); 
                        if(pair == NULL){
                            break; 
                        }
                        kvlist_append( splitted(pair % num_mapper), kvpair_clone(pair));
                        
                    }
                    for(int i = 0, i < num_mapper, i++){
                        pthread_create(&t, NULL, thread_fn, &num_mapper);

                    }
                    
                    pthread_join(t, NULL);

                    






                    // create num mapper number of threads
                    // assign the lists to threads, each thread is given a smaller list. 
                    
                    // thread must have same key,
                    // send thread to map. 


                    //
                    close(openFile);


}
*/