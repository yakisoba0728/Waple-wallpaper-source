// Function: FUN_1404a5850
// Addr: 1404a5850
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5850(ulonglong param_1,int *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar7;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *pcVar6;
  char cVar8;
  uint *unaff_RBX;
  longlong unaff_RBP;
  undefined4 *unaff_RDI;
  
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar2 = (byte)(param_1 >> 8);
  *(char *)(unaff_RBX + 2) = (char)unaff_RBX[2];
  uVar3 = iRam21004a571000086b + 0x34050002;
  pbVar4 = (byte *)(ulonglong)uVar3;
  *(byte *)(unaff_RBP + 8) = *(byte *)(unaff_RBP + 8) ^ bVar2;
  *(char *)((longlong)unaff_RBX + 0x6d) = *(char *)((longlong)unaff_RBX + 0x6d) + bVar2;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 | bVar2;
  cVar7 = (char)(uVar3 >> 8);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar7;
  *(byte *)param_2 = (char)*param_2 + bVar2;
  *pbVar4 = *pbVar4 + bVar2;
  pbVar5 = (byte *)((ulonglong)uVar3 ^ 4);
  *pbVar5 = *pbVar5 + cVar8;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  bVar2 = (byte)pbVar5;
  *pbVar5 = *pbVar5 | bVar2;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar7;
  *pbVar5 = *pbVar5 + bVar2;
  *pbVar5 = *pbVar5 + cVar8;
  pbVar4 = (byte *)(unaff_RDI + 2);
  uVar1 = in((short)param_2);
  unaff_RDI[1] = uVar1;
  *pbVar5 = *pbVar5 | bVar2;
  *(byte *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + bVar2;
  *unaff_RBX = *unaff_RBX & (uint)param_1 & 0xffffff49;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar7;
  pcVar6 = (char *)((ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2) ^ 0x1c);
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + cVar7;
  *param_2 = *param_2 + (int)param_2;
  cRam00000001522a6c95 = cRam00000001522a6c95 + (char)param_2;
  *pbVar4 = *pbVar4 >> 1 | *pbVar4 << 7;
  *pcVar6 = *pcVar6 + (char)pcVar6;
  *(uint *)pbVar4 = *(int *)pbVar4 + ((uint)param_1 & 0xffffff49);
  *(undefined1 *)unaff_RBX = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

