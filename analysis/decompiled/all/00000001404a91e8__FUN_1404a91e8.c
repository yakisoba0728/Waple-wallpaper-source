// Function: FUN_1404a91e8
// Addr: 1404a91e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a9232) */

void FUN_1404a91e8(byte *param_1,char param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int in_EAX;
  uint uVar5;
  char *unaff_RBX;
  char unaff_SPL;
  int *unaff_RSI;
  longlong in_FS_OFFSET;
  byte in_CF;
  
  uVar5 = in_EAX + -0x6bfff399 + (uint)in_CF;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  iVar3 = CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + param_2) + -0x6bfff399;
  bVar2 = *param_1;
  bVar4 = (byte)iVar3;
  *param_1 = *param_1 + bVar4;
  uVar5 = iVar3 + *unaff_RSI + (uint)CARRY1(bVar2,bVar4);
  *unaff_RBX = *unaff_RBX + param_2;
  puVar1 = (uint *)(in_FS_OFFSET + (ulonglong)uVar5);
  *puVar1 = *puVar1 | uVar5;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

