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
    
    CStr value0 = Yaml_GetCStr(&yl,"monitoring/uptime/history/1/details/issue");
    printf("Value found: '%s'\n",value0);
    
    CStr value1 = Yaml_GetCStr(&yl,"api/endpoints/2/auth_required");
    printf("Value found: '%s'\n",value1);

    CStr value2 = Yaml_GetCStr(&yl,"users/accounts/active/0/role");
    printf("Value found: '%s'\n",value2);

    Yaml_Set(&yl,"users/accounts/active/0/role","imposter");

    Yaml_Print(&yl);
    Yaml_Save(&yl,"./code/Save.yaml");
    Yaml_Free(&yl);
    return 0;
}