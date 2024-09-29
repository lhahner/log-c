
// Check if the program is compiled with the gcc compiler
#ifdef __GNUC___

char *replaceall(char *regex, char *n_str, char *str) __attribute__((nonnull(1, 2)));
char *replace(char c, char n_c, char *str) __attribute__((nonnull(1, 2)));
char *replaceintext __attribute__((deprecated)) (char c, char c_n, char *str);

// behavior for Mircosoft Visual Compiler
#elif defined(_MSC_VER)

char *replaceall(char *regex, char *n_str, char *str) __assume(n_str != NULL && str != NULL);
char *replace(char c, char n_c, char *str) __assume(str != NULL);
char *replaceintext(char c, char c_n, char *str) __declspec((deprecated));

// behavior for CLANG Compiler @todo
#elif defined(__clang__)
char *replaceall(char *regex, char *n_str, char *str);
char *replace(char c, char n_c, char *str);
char *replaceintext(char c, char c_n, char *str);

// normale behavior
#else

char *replaceall(char *regex, char *n_str, char *str);
char *replace(char c, char n_c, char *str);
char *replaceintext(char c, char c_n, char *str);

#endif