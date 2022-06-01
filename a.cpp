intopen（const char *path、int flags、mode_tpermissions）;
ssize_t read（int fd、void *buffer、size_t count）;
ssize_t write（int fd、const void *buffer、size_t count）;
off_t Iseek（int fd、off_t offset、int referencePosition）;
int close（int fd）;