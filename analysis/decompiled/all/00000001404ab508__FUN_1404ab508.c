// Function: FUN_1404ab508
// Addr: 1404ab508
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab508(char *param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  byte *pbVar6;
  uint *puVar7;
  char cVar9;
  byte bVar10;
  byte unaff_BL;
  char unaff_SPL;
  undefined7 unaff_00000021;
  byte *unaff_RSI;
  int *unaff_RDI;
  byte *pbVar8;
  
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  cVar9 = (char)param_1;
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  bVar3 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  *(char *)unaff_RDI = (char)*unaff_RDI + (char)param_4 + CARRY1((byte)uVar4,bVar3);
  *(char *)(unaff_RDI + 4) = (char)unaff_RDI[4] + param_2;
  LocalDescriptorTableRegister((short)*in_RAX);
  pbVar6 = (byte *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(0x4a,bVar3));
  *param_1 = *param_1 + 'J';
  *pbVar6 = *pbVar6 + bVar3;
  bVar2 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar3;
  *(char *)unaff_RDI = (char)*unaff_RDI + cVar9 + CARRY1(bVar2,bVar3);
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *(char *)unaff_RDI = (char)*unaff_RDI + cVar9 + CARRY1(bVar2,unaff_BL);
  pbVar8 = pbVar6 + 0x210049ed;
  bVar2 = *pbVar8;
  *pbVar8 = *pbVar8 + bVar10;
  puVar7 = (uint *)CONCAT71((int7)((ulonglong)pbVar6 >> 8),bVar3 + 4 + CARRY1(bVar2,bVar10));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 2);
  *pcVar1 = *pcVar1 + param_2;
  uVar4 = (uint)puVar7;
  *puVar7 = *puVar7 | uVar4;
  uVar5 = uVar4 + 0x20000864;
  pbVar8 = (byte *)(ulonglong)uVar5;
  *unaff_RDI = *unaff_RDI + (int)param_1 + (uint)(0xdffff79b < uVar4);
  unaff_RSI[-0x73fff0ef] = unaff_RSI[-0x73fff0ef] + cVar9;
  LOCK();
  *param_4 = *param_4 + unaff_SPL;
  UNLOCK();
  *pbVar8 = *pbVar8 + (char)uVar5;
  bVar2 = *pbVar8;
  bVar3 = (byte)(uVar5 >> 8);
  *pbVar8 = *pbVar8 + bVar3;
  *unaff_RDI = *unaff_RDI + (int)param_1 + (uint)CARRY1(bVar2,bVar3);
  unaff_RSI[-0x73fff0ef] = unaff_RSI[-0x73fff0ef] + cVar9;
  LOCK();
  *param_4 = *param_4 + (char)uVar5;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

