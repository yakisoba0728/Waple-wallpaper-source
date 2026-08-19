// Function: FUN_1404b10c0
// Addr: 1404b10c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b10c0(void)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  uint uVar3;
  char unaff_BL;
  undefined1 *unaff_RSI;
  
  iVar2 = CONCAT31((int3)(in_EAX + 0xeb000dc4 >> 8),*unaff_RSI) + 0x15acf500 +
          (uint)(0x14fff23b < in_EAX);
  cVar1 = (char)iVar2 + unaff_BL;
  uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
  if ((POPCOUNT(cVar1) & 1U) != 0) {
    uVar3 = *(uint *)(ulonglong)uVar3;
  }
  uRam00000001145010d8 = uRam00000001145010d8 & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

