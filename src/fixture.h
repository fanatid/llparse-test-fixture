#ifndef SRC_LLPARSE_FIXTURE_H_
#define SRC_LLPARSE_FIXTURE_H_

void llparse__print(const char* p, const char* endp, const char* fmt, ...);
int llparse__print_span(const char* name, const char* p, const char* endp);

#endif  /* SRC_LLPARSE_FIXTURE_H_ */