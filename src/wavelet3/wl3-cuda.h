
#ifdef __cplusplus
extern "C" {
#ifndef __VLA
#define __VLA(x) 
#endif
#else
#ifndef __VLA
#define __VLA(x) static x
#endif
#endif


extern void wl3_cuda_down3(const long dims[3], const long out_str[3], _Complex float* out, const long in_str[3], const _Complex float* in, unsigned int flen, const float filter[__VLA(flen)]);

extern void wl3_cuda_up3(const long dims[3], const long out_str[3], _Complex float* out, const long in_str[3],  const _Complex float* in, unsigned int flen, const float filter[__VLA(flen)]);

#ifdef __cplusplus
}
#endif


