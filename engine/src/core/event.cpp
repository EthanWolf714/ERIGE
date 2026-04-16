#include "core/event.h"



typedef struct event_code_entry {
    RegisterdEvent* events;
} event_code_entry;

#define MAX_MESSAGE_CODES 16384
// State structure.
typedef struct event_system_state {
    // Lookup table for event codes.
    event_code_entry registered[MAX_MESSAGE_CODES];
} event_system_state;

static event_system_state state;
b8 event::initialize() {
    if(is_initialized == TRUE){
        return FALSE;
    }
    is_initialized = FALSE;
    memory.fzero_memory(&state, sizeof(state));

    is_initialized = TRUE;
    return TRUE;
}


void event::shutdown(){
    //clearn vector
}

u32 event::register_event(u16 code, EventCallback callback){
    
    if(is_initialized == FALSE){
        return FALSE;
    }


    return 0;


}

