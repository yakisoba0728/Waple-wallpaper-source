// Function: FUN_1404b5980
// Addr: 1404b5980
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5980(longlong param_1)

{
  char *pcVar1;
  undefined2 *unaff_RDI;
  
  pcVar1 = (char *)(param_1 * 4 + 0xaeb9310c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  TaskRegister(*unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

