#include "fmemory.h"
#include "fstring.h"

FAPI u64 string_length(const char* str){
    return strlen(str);
}

char* string_duplicate(const char* str){
    u64 length = string_length(str);
    char* copy = (char*)memory.falloc(length + 1, MEMORY_TAG_STRING);
    memory.fcopy_memory(copy, str, length + 1);
    return copy;
}

