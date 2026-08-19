// Function: FUN_1404c37dc
// Addr: 1404c37dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c37dc(void)

{
  undefined2 uVar1;
  char in_AL;
  char *unaff_RDI;
  char *in_R9;
  longlong in_FS_OFFSET;
  
  *in_R9 = *in_R9 + in_AL;
  *unaff_RDI = *unaff_RDI + '+';
  uVar1 = TaskRegister();
  *(undefined2 *)(unaff_RDI + in_FS_OFFSET) = uVar1;
  *unaff_RDI = *unaff_RDI + '+';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

