// Function: FUN_1404a0ba4
// Addr: 1404a0ba4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0ba4(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_RAX;
  uint *puVar4;
  char *unaff_RBX;
  longlong unaff_RSI;
  char in_CF;
  
  puVar4 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + 'd' + in_CF);
  *puVar4 = *puVar4 | (uint)puVar4;
  iVar3 = (uint)puVar4 + 0x2f000854;
  LOCK();
  cVar1 = *unaff_RBX;
  *unaff_RBX = (char)iVar3;
  uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),cVar1);
  puVar4 = (uint *)(ulonglong)uVar2;
  UNLOCK();
  *(char *)(unaff_RSI + -0x43fffc7a) = *(char *)(unaff_RSI + -0x43fffc7a) + cVar1;
  *puVar4 = *puVar4 & uVar2;
  *(char *)puVar4 = (char)*puVar4 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

