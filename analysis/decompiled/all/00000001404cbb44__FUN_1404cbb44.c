// Function: FUN_1404cbb44
// Addr: 1404cbb44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbb44(longlong param_1)

{
  int unaff_EBX;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + unaff_EBX;
  *(char *)(param_1 + 100) = *(char *)(param_1 + 100) + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

