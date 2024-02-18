#ifndef __UI_HTTP_SERVER_H__
#define __UI_HTTP_SERVER_H__

void init_http_server_task(char *key);

typedef struct {
  char str_value[8];
  long long_value;
  float gain_1;
  float gain_2;
  float gain_3;
} URL_t;

#endif  // __UI_HTTP_SERVER_H__
