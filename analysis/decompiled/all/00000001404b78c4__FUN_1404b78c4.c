// Function: FUN_1404b78c4
// Addr: 1404b78c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b78c4(char *param_1,int param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar10;
  uint in_EAX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  char *pcVar9;
  
  iVar5 = in_EAX + 0x80000ae4;
  iVar6 = (param_2 + -0x1d92fe00) - (uint)(0x7ffff51b < in_EAX);
  bVar10 = (byte)((uint)iVar6 >> 8);
  bVar2 = (byte)iVar6 + bVar10;
  uVar8 = CONCAT31((int3)((uint)iVar6 >> 8),bVar2);
  pcVar9 = (char *)(ulonglong)uVar8;
  if (CARRY1((byte)iVar6,bVar10) || bVar2 == 0) {
    *param_1 = *param_1 + bVar10;
    *pcVar9 = *pcVar9 + bVar2;
    pbVar1 = (byte *)(pcVar9 + -0x1ffe26e);
    bVar10 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar2;
    uVar7 = (in_EAX + 0x34882ae4) - (uint)CARRY1(bVar10,bVar2);
    *param_1 = *param_1 + (char)(uVar7 >> 8);
    *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)uVar7;
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
    bVar3 = in(10);
    pbVar1 = (byte *)((ulonglong)CONCAT31((int3)(uVar7 >> 8),bVar3) - 0x1ffe26e);
    bVar10 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar3;
    *param_1 = *param_1 + (bVar2 - CARRY1(bVar10,bVar3));
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4;
  *pcVar9 = *pcVar9 + bVar2;
  pbVar1 = (byte *)(pcVar9 + 0x7001d94);
  bVar2 = *pbVar1;
  bVar10 = (byte)iVar5;
  *pbVar1 = *pbVar1 + bVar10;
  uVar8 = (unaff_EBP + -0x4b782800) - (uint)CARRY1(bVar2,bVar10);
  *param_1 = *param_1 + (char)(uVar8 >> 8);
  pcVar9 = (char *)((ulonglong)uVar8 * 2);
  cVar4 = (char)uVar8;
  *pcVar9 = *pcVar9 + cVar4;
  *(char *)((longlong)param_1 * 2) = *(char *)((longlong)param_1 * 2) + (char)((uint)iVar5 >> 8);
  pbVar1 = (byte *)(param_1 + uVar8);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar10;
  uVar8 = ((int)&stack0x00000000 + -0x1d950700) - (uint)CARRY1(bVar2,bVar10);
  pcVar9 = (char *)(ulonglong)uVar8;
  *pcVar9 = *pcVar9 + (char)((ulonglong)param_1 >> 8);
  if (-1 < *pcVar9) {
    *param_1 = *param_1 + (char)(uVar8 >> 8);
    uVar8 = uVar8 + 0x54050002;
    *(byte *)(ulonglong)uVar8 = *(byte *)(ulonglong)uVar8 | (byte)uVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + cVar4;
  *pcVar9 = *pcVar9 + (char)uVar8;
  pcVar9[-0x68] = pcVar9[-0x68] + (char)uVar8;
  in((short)iVar5);
  *param_4 = *param_4 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

