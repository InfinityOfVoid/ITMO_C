#include <stdint.h>
#include <stdlib.h>

size_t list_length(const struct list* list) {
    size_t counter = 1;
    if (list == NULL) return 0;
    struct list* buffer = (struct list*)list;
    while (buffer->next!=NULL) {
        counter++;
        buffer = buffer->next;
    }
    return counter;
}
