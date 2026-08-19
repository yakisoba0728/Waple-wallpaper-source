// Function: FUN_1404a0b94
// Addr: 1404a0b94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0b94(byte *param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *in_RAX;
  uint *puVar5;
  char *unaff_RBX;
  byte unaff_SPL;
  undefined7 unaff_00000021;
  longlong unaff_RSI;
  
  *(char *)(unaff_RSI + -0x79d0fffd) = *(char *)(unaff_RSI + -0x79d0fffd) + (char)in_RAX;
  iVar4 = (int)in_RAX + *in_RAX;
  cVar3 = (char)iVar4;
  bVar1 = *param_1;
  *param_1 = *param_1 + unaff_SPL;
  uVar2 = CONCAT31((int3)(CONCAT22((short)((uint)iVar4 >> 0x10),CONCAT11(10,cVar3)) >> 8),
                   cVar3 + '\x04' + CARRY1(bVar1,unaff_SPL));
  *(char *)CONCAT71(unaff_00000021,unaff_SPL) =
       *(char *)CONCAT71(unaff_00000021,unaff_SPL) + param_2;
  *(uint *)(ulonglong)uVar2 = *(uint *)(ulonglong)uVar2 | uVar2;
  LOCK();
  cVar3 = *unaff_RBX;
  *unaff_RBX = (char)(uVar2 + 0x2f000854);
  uVar2 = CONCAT31((int3)(uVar2 + 0x2f000854 >> 8),cVar3);
  puVar5 = (uint *)(ulonglong)uVar2;
  UNLOCK();
  *(char *)(unaff_RSI + -0x43fffc7a) = *(char *)(unaff_RSI + -0x43fffc7a) + cVar3;
  *puVar5 = *puVar5 & uVar2;
  *(char *)puVar5 = (char)*puVar5 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

