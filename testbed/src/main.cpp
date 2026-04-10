#include <core/logger.h>
#include <core/asserts.h>

//TODO: test
#include <platform/platform.h>


int main(void)
{  
    //log test
    FFATAL("A TEST MESSAGE: %f", 3.14);
    FERROR("A TEST MESSAGE: %f", 3.14);
    FWARN("A TEST MESSAGE: %f", 3.14);
    FINFO("A TEST MESSAGE: %f", 3.14);
    FDEBUG("A TEST MESSAGE: %f", 3.14);
    FTRACE("A TEST MESSAGE: %f", 3.14);

    platform_state state;
    if(platform_startup(&state,"Fimbul Engine Testbed", 100, 100, 1280, 720)){
        while(TRUE){
            platform_pump_message(&state);        
        }
    }

    platform_shutdown(&state);
    return 0;
}