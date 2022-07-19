#include <stdio.h>
#include <sys/mount.h>
#include <stdbool.h>

#ifdef __SHOWCASE__
bool showcase = true;
#else
bool showcase = false;
#endif

void emergency_exit() {
	printf("Dropping into emergency shell\n");
	execve("/bin/sh", NULL, NULL);
	// Should never get here
	printf("Emergency shell failed\n. System halted.");
	while(1) {
		asm("cli");
		asm("hlt");
	}
	// Should ABSOLUTELY NEVER GET HERE
	__builtin_unreachable();
}

int main(void) {
	// declare version
	char* ver = "0.2";
	// declare colors
	char *red = "\033[31m";
	char *green = "\033[32m";
	char *blue = "\033[34m";
	// clear color
	char *clear = "\033[0m";
	// beginning of the line
	char *begin = "\x1b[A";
	printf("%suwuInit %sv%s%s\n", blue, green, ver, clear);

	// see if we are PID1
	if (getpid() != 1) {
		if (!showcase) {
			printf("%sThis program must be run as PID 1%s\n", red, clear);
			return 1;
		}
	}
	printf("%s[-]%s Mounting /sys\n", blue, clear);
	if (!showcase) {
		if (mount("sysfs", "/sys", "sysfs", 0, NULL) != 0) {
			// failed to mount, but that doesnt mean it isnt mounted
			// check if /sys contains any files
			FILE *f = fopen("/sys", "r");
			if (f == NULL) {
				printf("%s[!]%s Failed to mount /sys\n", red, clear);
				fclose(f);
				emergency_exit();
			} else {
				printf("%s[-]%s /sys is already mounted\n", red, clear);
			}
		}
	} else { sleep(1); }
	printf("%s%s[+]%s Successfully mounted /sys\n", begin, green, clear);
	if (showcase) { sleep(1); }
	printf("%s[-]%s Mounting /proc\n", blue, clear);
	if (!showcase) {
		if (mount("proc", "/proc", "proc", 0, NULL) != 0) {
			// same as above
		FILE *f = fopen("/proc", "r");
	                if (f == NULL) {
	                        printf("%s[!]%s Failed to mount /proc\n", red, clear);
	                        fclose(f);
	                        emergency_exit();
	                } else {
	                        printf("%s[-]%s /proc is already mounted\n", red, clear);
			}
		}
	} else { sleep(1); }
	printf("%s%s[+]%s Successfully mounted /proc\n", begin, green, clear);
	if (showcase) { sleep(1); }
	printf("%s[-]%s Mounting /dev\n", blue, clear);
	if (!showcase) {
		if (mount("devtmpfs", "/dev", "devtmpfs", 0, NULL) != 0) {
			// same as above
			FILE *f = fopen("/dev", "r");
			if (f == NULL) {
				printf("%s[!]%s Failed to mount /dev\n", red, clear);
				fclose(f);
				emergency_exit();
			} else {
				printf("%s[-]%s /dev is already mounted\n", red, clear);
			}
		}
	} else { sleep(1); }
	printf("%s%s[+]%s Successfully mounted /dev\n", begin, green, clear);
	if (showcase) { sleep(1); }
	printf("%s[-]%s Mounting fstab\n", blue, clear);
	// run mount -a
	if (!showcase) {
		if (system("mount -a") != 0) {
			printf("%s[-]%s Failed to mount fstab\n", red, clear);
			emergency_exit();
		}
	} else { sleep(1); }
	printf("%s%s[+]%s Successfully mounted fstab\n", begin, green, clear);
	if (showcase) { sleep(1); }
	printf("%s[-]%s Running /etc/uwuinit.sh\n", blue, clear);
	// run /etc/uwuinit.sh
	if (!showcase) {
		if (system("sh /etc/uwuinit.sh") != 0) {
			printf("%s[-]%s Failed to run /etc/uwuinit.sh\n", red, clear);
			emergency_exit();
		}
		while (1) {
			sleep(69420);
		}
		// should NEVER GET HERE
		__builtin_unreachable();
	} else {
		sleep(1);
		printf("%s%s[+]%s Successfully ran /etc/uwuinit.sh\n", begin, green, clear);
	}
}
