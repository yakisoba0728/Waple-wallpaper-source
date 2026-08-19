// Function: FUN_1404a0378
// Addr: 1404a0378
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0378(char param_1,longlong param_2)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  char *unaff_RBX;
  byte in_CF;
  
  iVar2 = in_EAX + -0x23fffcd6 + (uint)in_CF;
  pcVar1 = (char *)(param_2 + 0x21004a +
                   (ulonglong)CONCAT31((int3)((uint)iVar2 >> 8),(char)iVar2 - *unaff_RBX));
  *pcVar1 = *pcVar1 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

