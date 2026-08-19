// Function: FUN_1404b6f20
// Addr: 1404b6f20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b6f42) overlaps instruction at (ram,0x0001404b6f3e)
    */

void FUN_1404b6f20(char *param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 in_RAX;
  undefined7 uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte unaff_BL;
  undefined7 unaff_00000019;
  uint unaff_EBP;
  byte *unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  bool bVar12;
  bool in_PF;
  char *pcVar7;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  bVar9 = (byte)((ulonglong)param_1 >> 8);
  if (!in_PF) {
    uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar4 = (char)in_RAX - in_CF;
    pcVar7 = (char *)CONCAT71(uVar8,bVar4);
    unaff_RSI[0x4b] = unaff_RSI[0x4b] ^ bVar9;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    *pcVar7 = *pcVar7 + bVar4;
    pbVar1 = (byte *)(pcVar7 + 0x10);
    bVar2 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar11;
    in_CF = bVar4 < CARRY1(bVar2,bVar11);
    cVar5 = bVar4 - CARRY1(bVar2,bVar11);
    in_RAX = CONCAT71(uVar8,cVar5);
    if ((POPCOUNT(cVar5) & 1U) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  cVar5 = (char)in_RAX - in_CF;
  unaff_RSI[0x4b] = unaff_RSI[0x4b] ^ bVar9;
  *param_1 = *param_1 + cVar5;
  uVar3 = LocalDescriptorTableRegister();
  *(undefined4 *)(param_4 + -0x68) = uVar3;
  bVar12 = CARRY1(*unaff_RSI,unaff_BL);
  *unaff_RSI = *unaff_RSI + unaff_BL;
  if (-1 < (char)*unaff_RSI) {
    bVar12 = CARRY1(*unaff_RDI,bVar10);
    *unaff_RDI = *unaff_RDI + bVar10;
  }
  uVar6 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar5) + 0x1abc4600 + (uint)bVar12;
  pcVar7 = (char *)(ulonglong)uVar6;
  *(byte *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + bVar10;
  *param_2 = *param_2 + (int)param_2;
  pcVar7[(longlong)unaff_RSI * 2] = pcVar7[(longlong)unaff_RSI * 2] + (char)param_1;
  *pcVar7 = *pcVar7 + (char)uVar6;
  *param_2 = *param_2 & unaff_EBP;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

