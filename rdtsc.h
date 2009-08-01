/* 
   Utility macros for figuring out number of instructions
 */

static unsigned long int rdtsc_tsc; 

#define setup_timer() rdtsc_tsc = 0
#define print_timer() fprintf(stdout, "TSC: %lu\n", rdtsc_tsc)
#define start_timer() asm ( \
		"rdtsc\n\t" \
		"pushl %eax\n\t" )

#define stop_timer() asm ( \
		"rdtsc\n\t" \
		"popl %ebx\n\t" \
		"subl %ebx, %eax\n\t" \
		"movl %eax, (rdtsc_tsc)\n\t" )
