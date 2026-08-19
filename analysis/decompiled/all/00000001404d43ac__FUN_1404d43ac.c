// Function: FUN_1404d43ac
// Addr: 1404d43ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d43ac(int *param_1,longlong param_2)

{
  int unaff_EBP;
  
  *(undefined1 *)(param_2 + 0x4d) = *(undefined1 *)(param_2 + 0x4d);
  *param_1 = *param_1 - unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

