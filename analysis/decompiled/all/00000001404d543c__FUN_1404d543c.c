// Function: FUN_1404d543c
// Addr: 1404d543c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d543c(void)

{
  byte bVar1;
  int in_EAX;
  char *unaff_RBX;
  char *in_R9;
  char unaff_R12B;
  
  bVar1 = (char)(in_EAX + -0xffff1cc) - 6;
  *in_R9 = *in_R9 + unaff_R12B;
  cRam00000001444d5e4d =
       cRam00000001444d5e4d +
       (bVar1 | *(byte *)((ulonglong)CONCAT31((int3)((uint)(in_EAX + -0xffff1cc) >> 8),bVar1) * 2));
  *in_R9 = *in_R9 + unaff_R12B;
  *unaff_RBX = *unaff_RBX + (char)unaff_RBX;
  *in_R9 = *in_R9 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

