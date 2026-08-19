// Function: FUN_1404a6c00
// Addr: 1404a6c00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6c00(void)

{
  char cVar1;
  int in_EAX;
  uint uVar2;
  longlong unaff_RBX;
  
  uVar2 = in_EAX + 0x34050002;
  cVar1 = (char)uVar2 + *(char *)(ulonglong)uVar2;
  uRam240009c6b50009c6 = CONCAT31((int3)(uVar2 >> 8),cVar1);
  iRam21004a6b180009c6 = in_EAX;
  *(char *)(ulonglong)uRam240009c6b50009c6 = *(char *)(ulonglong)uRam240009c6b50009c6 + cVar1;
  *(char *)(unaff_RBX + -0x4afff63a) = *(char *)(unaff_RBX + -0x4afff63a) + (char)(uVar2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

