/* FILE TO BE DELETED. DO NOT ADD STUFF HERE! */
#include <asm/barrier.h>
#include <asm/compiler.h>
#include <asm/cmpxchg.h>
#include <asm/exec.h>
#include <asm/switch_to.h>
#include <asm/system_info.h>
#include <asm/system_misc.h>
void arm_machine_restart(char mode, const char *cmd);
extern void (*arm_pm_restart)(char str, const char *cmd);

