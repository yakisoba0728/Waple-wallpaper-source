// Function: FUN_1404a149c
// Addr: 1404a149c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a149c(int param_1,int *param_2)

{
  byte in_AL;
  char *pcVar1;
  byte *unaff_RDI;
  byte in_CF;
  
  pcVar1 = (char *)(ulonglong)(param_1 + *param_2 + (uint)in_CF);
  *(int *)((longlong)pcVar1 * 2) = *(int *)((longlong)pcVar1 * 2) + (int)param_2;
  *(char *)param_2 = (char)*param_2 + (char)param_2;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  *pcVar1 = *pcVar1 + (in_AL | 0xf0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

