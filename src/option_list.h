#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "darknet.h"
#include "list.h"

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;

#ifdef __cplusplus
extern "C" {
#endif

darknet_list *read_data_cfg(char *filename);
int read_option(char *s, darknet_list *options);
void option_insert(darknet_list *l, char *key, char *val);
char *option_find(darknet_list *l, char *key);
char *option_find_str(darknet_list *l, char *key, char *def);
char *option_find_str_quiet(darknet_list *l, char *key, char *def);
int option_find_int(darknet_list *l, char *key, int def);
int option_find_int_quiet(darknet_list *l, char *key, int def);
float option_find_float(darknet_list *l, char *key, float def);
float option_find_float_quiet(darknet_list *l, char *key, float def);
void option_unused(darknet_list *l);

//typedef struct {
//	int classes;
//	char **names;
//} metadata;

//LIB_API metadata get_metadata(char *file);

#ifdef __cplusplus
}
#endif
#endif
