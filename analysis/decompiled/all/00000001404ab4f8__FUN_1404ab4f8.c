// Function: FUN_1404ab4f8
// Addr: 1404ab4f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab4f8(char *param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  byte bVar7;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char cVar8;
  byte bVar9;
  char cVar10;
  byte unaff_BL;
  char unaff_SPL;
  undefined7 unaff_00000021;
  byte *unaff_RSI;
  int *unaff_RDI;
  byte *pbVar6;
  
  cVar10 = (char)param_2;
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  cVar8 = (char)param_1;
  uVar3 = in_EAX + 0x44000734;
  *(char *)unaff_RDI = (char)*unaff_RDI + cVar8 + (0xbbfff8cb < in_EAX);
  *(char *)(unaff_RDI + 4) = (char)unaff_RDI[4] + cVar10;
  LocalDescriptorTableRegister(*(undefined2 *)(ulonglong)uVar3);
  uVar2 = (undefined2)(uVar3 >> 0x10);
  bVar7 = (byte)uVar3;
  pcVar5 = (char *)(ulonglong)CONCAT22(uVar2,CONCAT11(0x4a,bVar7));
  *param_1 = *param_1 + 'J';
  *pcVar5 = *pcVar5 + bVar7;
  pcVar5[param_2 + 0xf] = pcVar5[param_2 + 0xf] + bVar7;
  *(char *)(unaff_RDI + 4) = (char)unaff_RDI[4] + cVar10;
  LocalDescriptorTableRegister(*(undefined2 *)pcVar5);
  uVar3 = CONCAT22(uVar2,CONCAT11(0x4a,bVar7));
  pbVar6 = (byte *)(ulonglong)uVar3;
  *param_1 = *param_1 + 'J';
  *pbVar6 = *pbVar6 + bVar7;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar7;
  *(char *)unaff_RDI = (char)*unaff_RDI + cVar8 + CARRY1(bVar1,bVar7);
  bVar1 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *(char *)unaff_RDI = (char)*unaff_RDI + cVar8 + CARRY1(bVar1,unaff_BL);
  pbVar6 = pbVar6 + 0x210049ed;
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar9;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),bVar7 + 4 + CARRY1(bVar1,bVar9));
  pcVar5 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 2);
  *pcVar5 = *pcVar5 + cVar10;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  uVar4 = uVar3 + 0x20000864;
  pbVar6 = (byte *)(ulonglong)uVar4;
  *unaff_RDI = *unaff_RDI + (int)param_1 + (uint)(0xdffff79b < uVar3);
  unaff_RSI[-0x73fff0ef] = unaff_RSI[-0x73fff0ef] + cVar8;
  LOCK();
  *param_4 = *param_4 + unaff_SPL;
  UNLOCK();
  *pbVar6 = *pbVar6 + (char)uVar4;
  bVar1 = *pbVar6;
  bVar7 = (byte)(uVar4 >> 8);
  *pbVar6 = *pbVar6 + bVar7;
  *unaff_RDI = *unaff_RDI + (int)param_1 + (uint)CARRY1(bVar1,bVar7);
  unaff_RSI[-0x73fff0ef] = unaff_RSI[-0x73fff0ef] + cVar8;
  LOCK();
  *param_4 = *param_4 + (char)uVar4;
  UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

