// Function: FUN_1404bab78
// Addr: 1404bab78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bab78(void)

{
  int *piVar1;
  undefined1 in_AL;
  undefined7 in_register_00000001;
  int unaff_EBP;
  
  piVar1 = (int *)(CONCAT71(in_register_00000001,in_AL) + -0x67dbfffd);
  *piVar1 = *piVar1 - unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

