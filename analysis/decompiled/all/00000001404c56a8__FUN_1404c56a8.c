// Function: FUN_1404c56a8
// Addr: 1404c56a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c56a8(void)

{
  int *piVar1;
  int in_EAX;
  int unaff_ESP;
  byte in_CF;
  
  piVar1 = (int *)((ulonglong)(in_EAX + 0x15002934 + (uint)in_CF) * 2);
  *piVar1 = *piVar1 + unaff_ESP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

