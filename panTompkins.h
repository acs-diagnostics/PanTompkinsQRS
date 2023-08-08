#ifndef PAN_TOMPKINS
#define PAN_TOMPKINS

typedef int dataType;

#ifndef __cplusplus
typedef enum {
  false,
  true
} bool;
#endif

#ifdef __cplusplus
extern "C" {
#endif
void panTompkins();
void init(const char file_in[], const char file_out[]);

#ifdef __cplusplus
}
#endif

#endif
