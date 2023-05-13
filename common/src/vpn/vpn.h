typedef struct Options {
  const char *server;
  const char *cookie;
  const char *script;
  void *user_data;
} Options;

int start(const Options *options);
void stop();

extern void on_vpn_connected(int cmd_pipe_fd, void *user_data);
extern void vpn_log(int level, const char *msg);