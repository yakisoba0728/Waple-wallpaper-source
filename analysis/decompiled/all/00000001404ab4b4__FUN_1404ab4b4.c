// Function: FUN_1404ab4b4
// Addr: 1404ab4b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab4b4(uint *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *in_RAX;
  byte *pbVar5;
  char cVar7;
  longlong lVar6;
  byte bVar8;
  undefined7 uVar9;
  int unaff_EBX;
  undefined2 *unaff_RSI;
  byte *unaff_RDI;
  longlong in_FS_OFFSET;
  
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  *param_1 = *param_1 + unaff_EBX;
  uVar4 = *param_1;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX | *in_RAX);
  *param_1 = *param_1 - uVar3;
  uVar4 = (uVar3 + 0xf40ff300) - (uint)(uVar4 < uVar3);
  lVar6 = (longlong)param_1 + -1;
  if (lVar6 == 0 || uVar4 == 0) {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  bVar8 = (char)param_2 + *(char *)((ulonglong)uVar4 + 0x21);
  pbVar5 = (byte *)(ulonglong)(uVar4 + 0x64050002);
  bVar2 = (byte)(uVar4 + 0x64050002);
  *pbVar5 = *pbVar5 | bVar2;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  TaskRegister(*unaff_RSI);
  *unaff_RDI = *unaff_RDI + (char)lVar6 + CARRY1(bVar1,bVar8);
  cVar7 = (char)((ulonglong)lVar6 >> 8);
  pbVar5[0x210049ed] = pbVar5[0x210049ed] + cVar7;
  *(byte *)CONCAT71(uVar9,bVar8) = *(char *)CONCAT71(uVar9,bVar8) + bVar2;
  *pbVar5 = *pbVar5 + bVar2;
  pbVar5[in_FS_OFFSET] = pbVar5[in_FS_OFFSET] | bVar2;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar8;
  TaskRegister(*unaff_RSI);
  *unaff_RDI = *unaff_RDI + (char)lVar6 + CARRY1(bVar1,bVar8);
  pbVar5[0x210049ed] = pbVar5[0x210049ed] + cVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

