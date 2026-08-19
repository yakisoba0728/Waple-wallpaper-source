// Function: FUN_1404bd394
// Addr: 1404bd394
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd394(char *param_1)

{
  char *in_RAX;
  int unaff_EBX;
  
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + unaff_EBX;
  param_1[-0x18] = param_1[-0x18] + (char)unaff_EBX;
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[(longlong)param_1 * 8 + 2] = in_RAX[(longlong)param_1 * 8 + 2] + (char)in_RAX;
  *param_1 = *param_1 + (char)((uint)unaff_EBX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

