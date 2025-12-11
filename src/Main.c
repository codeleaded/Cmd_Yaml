#if defined(__linux__)
#include "/home/codeleaded/System/Static/Library/Yaml.h"
#elif defined(_WINE)
#include "/home/codeleaded/System/Static/Library/Yaml.h"
#elif defined(_WIN32)
#include "F:/home/codeleaded/System/Static/Library/Yaml.h"
#elif defined(__APPLE__)
#error "Apple not supported!"
#else
#error "Platform not supported!"
#endif

int main(){
    Yaml yl = Yaml_New("./code/Main.yaml");
    
    return 0;
}