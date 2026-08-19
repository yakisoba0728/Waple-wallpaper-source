// Function: FUN_1404b3094
// Addr: 1404b3094
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b3094(void)

{
  longlong in_RAX;
  char unaff_BL;
  
  *(char *)(in_RAX + -0x4a) = *(char *)(in_RAX + -0x4a) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

