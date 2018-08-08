#include "../drivers/screen.h"
#include "util.h"
#include "../cpu/isr.h"
#include "../cpu/idt.h"

void main() {
	isr_install();
	/* Test Interrupts */
	__asm__ __volatile__ ("int $2");
	__asm__ __volatile__ ("int $3");
	/*clear_screen();
	Fill screen
	int i = 0;
	for (i = 0; i < 24; i++) {
		char str[255];
		int_to_ascii(i, str);
		kprint_at(str, 0, i);
	}

	kprint_at("This text forces the kernel to scroll. Row 0 will disappear.", 60, 24);*/
//	kprint("And with this text, the kernel will scroll again, and row 1 will disappear too!");
}