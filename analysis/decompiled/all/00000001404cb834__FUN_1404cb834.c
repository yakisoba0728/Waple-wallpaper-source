// Function: FUN_1404cb834
// Addr: 1404cb834
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb834(char *param_1)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_R12B;
  bool in_ZF;
  
  if (in_ZF) {
    pcVar1 = (char *)(in_RAX | 0xb7);
    *param_1 = *param_1 + unaff_R12B;
    *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

