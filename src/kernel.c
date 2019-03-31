#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()

{
string ch = (string) malloc(200);
	print("\t");
	print("***************");
	print("\t\t");
	print("***************");
	print("\t\t");
	print("**           **");
	print("\n");
	
	
	print("\t");
	print("***************");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print(" **         ** ");
	print("\n");
	
	
	print("\t");
	print("*             *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("  **       **  ");
	print("\n");
	
	
	print("\t");
	print("*             *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("   **     **   ");
	print("\n");
	
	
	print("\t");
	print("*  *       *  *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("    **   **    ");
	print("\n");
	
	
	print("\t");
	print("*  * *     *  *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("     ** **     ");
	print("\n");
	
	
	print("\t");
	print("*  *   *   *  *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("      ***      ");
	print("\n");
	
	
	print("\t");
	print("*  *     * *  *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("     ** **     ");
	print("\n");
	
	
	print("\t");
	print("*  *       *  *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("    **   **    ");
	print("\n");
	
	
	print("\t");
	print("*             *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("   **     **   ");
	print("\n");
	
	
	print("\t");
	print("*             *");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print("  **       **  ");
	print("\n");
	
	
	print("\t");
	print("***************");
	print("\t\t");
	print("      ***      ");
	print("\t\t");
	print(" **         ** ");
	print("\n");
	
	
	print("\t");
	print("***************");
	print("\t\t");
	print("***************");
	print("\t\t");
	print("**           **");
	print("\n");


         ch = readStr();
        
        isr_install();
	clearScreen();
	print("Hi and Welcome to ONIX operating system\nPlease enter a command\n");
    launch_shell(0);    
}
