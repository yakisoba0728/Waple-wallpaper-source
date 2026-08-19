// Function: FUN_1404b1014
// Addr: 1404b1014
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1014(char *param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  undefined8 in_RAX;
  undefined6 uVar9;
  uint *puVar5;
  longlong lVar6;
  char cVar10;
  byte unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RBP;
  char *unaff_RSI;
  bool bVar11;
  byte *pbVar7;
  char cVar8;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  bVar3 = (byte)in_RAX;
  cVar8 = (char)((ulonglong)in_RAX >> 8) * '\x02';
  pbVar7 = (byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar3));
  *pbVar7 = *pbVar7 | bVar3;
  cVar8 = cVar8 + (char)param_2;
  puVar5 = (uint *)CONCAT62(uVar9,CONCAT11(cVar8,bVar3));
  *puVar5 = *puVar5 | (uint)puVar5;
  cVar8 = cVar8 + bVar3;
  pbVar7 = (byte *)CONCAT62(uVar9,CONCAT11(cVar8,bVar3));
  lVar6 = CONCAT71((int7)((ulonglong)pbVar7 >> 8),bVar3 | *pbVar7);
  param_1[CONCAT71(unaff_00000019,unaff_BL)] = param_1[CONCAT71(unaff_00000019,unaff_BL)] + cVar10;
  param_1[(longlong)&stack0x00000000] = param_1[(longlong)&stack0x00000000] + cVar8;
  param_1[0x15a80000] = param_1[0x15a80000] + cVar10;
  pbVar7 = (byte *)(lVar6 + unaff_RBP * 4);
  bVar3 = *pbVar7;
  *pbVar7 = *pbVar7 + unaff_BL;
  uVar4 = (int)lVar6 + 0x49e56400 + (uint)CARRY1(bVar3,unaff_BL);
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *unaff_RSI = *unaff_RSI + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)uVar4;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = in(8);
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  bVar11 = CARRY1(*pbVar7,bVar3);
  *pbVar7 = *pbVar7 + bVar3;
  if (*pbVar7 != 0) {
    *pbVar7 = *pbVar7 + bVar3;
    pbVar7 = (byte *)((ulonglong)CONCAT31(uVar2,bVar3) ^ 0xd);
    *pbVar7 = *pbVar7 + (char)pbVar7;
    pbVar1 = pbVar7 + unaff_RBP * 4;
    bVar11 = CARRY1(*pbVar1,unaff_BL);
    *pbVar1 = *pbVar1 + unaff_BL;
  }
  *param_1 = *param_1 + (char)pbVar7 + bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

