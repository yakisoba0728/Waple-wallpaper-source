// Function: FUN_1404d0d18
// Addr: 1404d0d18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0d18(char *param_1)

{
  char *in_RAX;
  char unaff_SPL;
  
  cRam00000001604d1555 = cRam00000001604d1555 + (char)in_RAX;
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

