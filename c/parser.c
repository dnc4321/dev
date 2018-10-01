#include <stdio.h>
#include <stdbool.h>
#include <argp.h>

bool _p_flag=false;

static int parse (int key, char *arg,struct argp_state *state){
    switch (key){
        case 'd': printf(".\n"); break;
        case 'p': _p_flag=true;break;
    }
    return 0;
}
int main (int argc, char **argv){
    struct argp_option options[] = {
        {0,'d',0,0,"Show a dot on the screen"},
        {0,'p',0,0,"Dummy Switch"},
        {0}
    };
    struct argp argp = { options, parse };
    int _ret_argp=argp_parse (&argp, argc, argv, 0, 0, 0);

    if(_p_flag == true){
        printf("ARGP\n");
    }
    printf("%d\n",_ret_argp);
} 