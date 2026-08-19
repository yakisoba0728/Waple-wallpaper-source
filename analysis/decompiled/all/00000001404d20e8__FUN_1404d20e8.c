// Function: FUN_1404d20e8
// Addr: 1404d20e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d20e8(int *param_1,char param_2,longlong param_3)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte *in_RAX;
  byte bVar6;
  byte *unaff_RBP;
  char unaff_R13B;
  int iVar4;
  byte *pbVar5;
  
  bVar6 = (byte)param_1;
  bVar2 = *in_RAX;
  *param_1 = (*param_1 - (int)param_1) - (uint)CARRY1((byte)in_RAX,*in_RAX);
  iVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + bVar2);
  uVar3 = iVar4 + 0x5420900;
  pbVar5 = (byte *)(ulonglong)uVar3;
  if (!SCARRY4(iVar4,0x5420900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar5 = *pbVar5 ^ (byte)uVar3;
  pbVar5[-0x4a] = pbVar5[-0x4a] + param_2 + bVar6;
  iVar4 = *(int *)pbVar5;
  *(char *)(param_3 + 0x3d) = *(char *)(param_3 + 0x3d) + unaff_R13B;
  *unaff_RBP = *unaff_RBP & bVar6;
  *unaff_RBP = *unaff_RBP & bVar6;
  pcVar1 = (char *)((ulonglong)
                    CONCAT31((int3)(uVar3 - iVar4 >> 8),((byte)(uVar3 - iVar4) ^ 0x20) + 0xe) -
                   0x7fd1ffd5);
  *pcVar1 = *pcVar1 + 'X';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

