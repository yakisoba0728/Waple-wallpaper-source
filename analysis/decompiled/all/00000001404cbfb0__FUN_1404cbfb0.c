// Function: FUN_1404cbfb0
// Addr: 1404cbfb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbfb0(void)

{
  int in_EAX;
  uint uVar1;
  int unaff_EBX;
  int *unaff_RDI;
  
  uVar1 = in_EAX + 0x3600470;
  *unaff_RDI = *unaff_RDI + unaff_EBX;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

