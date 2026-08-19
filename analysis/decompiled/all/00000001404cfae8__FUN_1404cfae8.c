// Function: FUN_1404cfae8
// Addr: 1404cfae8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfae8(int *param_1,uint *param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *in_RAX;
  char *pcVar6;
  uint uVar7;
  longlong unaff_RBP;
  uint *unaff_RSI;
  longlong *in_R10;
  char unaff_R13B;
  int iVar4;
  byte *pbVar5;
  
  uVar7 = (uint)param_1;
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + (char)((ulonglong)in_RAX >> 8);
  bVar1 = *in_RAX;
  *param_1 = *param_1 + uVar7 + (uint)CARRY1((byte)in_RAX,*in_RAX);
  iVar4 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + bVar1);
  uVar3 = iVar4 + 0x5420900;
  pbVar5 = (byte *)(ulonglong)uVar3;
  if (!SCARRY4(iVar4,0x5420900)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar5 = *pbVar5 ^ (byte)uVar3;
  pbVar5[-0x4a] = pbVar5[-0x4a] + (char)param_2;
  iVar4 = *(int *)pbVar5;
  pcVar6 = (char *)(ulonglong)(uVar3 - iVar4);
  *pcVar6 = *pcVar6 + unaff_R13B;
  *unaff_RSI = *unaff_RSI ^ uVar7;
  *(char *)((longlong)param_1 + -6) = *(char *)((longlong)param_1 + -6) + param_3;
  uVar2 = *unaff_RSI;
  *(byte *)unaff_RSI = (byte)*unaff_RSI + param_3;
  *pcVar6 = (*pcVar6 - (char)(uVar3 - iVar4)) - CARRY1((byte)uVar2,param_3);
  pcVar6 = pcVar6 + *in_R10;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *param_2 = *param_2 & uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

