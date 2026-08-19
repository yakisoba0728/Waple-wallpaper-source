// Function: FUN_1404a8d98
// Addr: 1404a8d98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8d98(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  char in_AL;
  char *unaff_RDI;
  
  puVar1 = (undefined1 *)(param_2 + 0x2100 + param_1 * 2);
  *puVar1 = *puVar1;
  *unaff_RDI = *unaff_RDI + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

