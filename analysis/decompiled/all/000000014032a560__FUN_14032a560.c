// Function: FUN_14032a560
// Addr: 14032a560
// Size: 175 bytes


short FUN_14032a560(longlong param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  
  puVar3 = *(ushort **)(param_1 + 0x18);
  sVar8 = 0;
  uVar1 = puVar3[2];
  uVar2 = *puVar3;
  uVar5 = ((uint)puVar3[3] - (uint)uVar1) + 1;
  uVar6 = (*param_2 + 1 >> 8) - (uint)uVar1;
  uVar9 = 0;
  if (-1 < (int)uVar6) {
    uVar9 = uVar6;
  }
  uVar4 = (*param_2 + 1 & 0xff) - (uint)uVar2;
  uVar6 = 0;
  if (-1 < (int)uVar4) {
    uVar6 = uVar4;
  }
  if (uVar9 < uVar5) {
    uVar7 = ((uint)puVar3[1] - (uint)uVar2) + 1;
    uVar4 = uVar6;
    do {
      if (uVar4 < uVar7) {
        uVar6 = uVar4;
        do {
          sVar8 = *(short *)(*(longlong *)(puVar3 + 8) + (ulonglong)(uVar7 * uVar9 + uVar6) * 2);
          if (sVar8 != -1) goto LAB_14032a5f3;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar7);
      }
      uVar9 = uVar9 + 1;
      uVar4 = 0;
      uVar6 = 0;
    } while (uVar9 < uVar5);
  }
LAB_14032a5f3:
  *param_2 = (uVar1 + uVar9) * 0x100 | uVar2 + uVar6;
  return sVar8;
}

