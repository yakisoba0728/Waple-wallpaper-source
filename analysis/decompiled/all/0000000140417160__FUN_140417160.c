// Function: FUN_140417160
// Addr: 140417160
// Size: 291 bytes


void FUN_140417160(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  uint uVar10;
  ushort *puVar12;
  uint *puVar13;
  int iVar14;
  uint local_res10 [2];
  int aiStack_28 [4];
  ulonglong uVar11;
  
  if (param_2 == 0x47504f53) {
    puVar2 = (undefined8 *)FUN_1403c4fa0(param_1 + 0x148);
  }
  else {
    if (param_2 != 0x47535542) {
      pbVar8 = (byte *)&DAT_14045dde0;
      goto LAB_1404171d1;
    }
    puVar2 = (undefined8 *)FUN_1403c5040(param_1 + 0x140);
  }
  puVar9 = &DAT_14045dde0;
  if ((undefined8 *)*puVar2 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar2;
  }
  if (*(uint *)(puVar9 + 3) < 4) {
    pbVar8 = (byte *)&DAT_14045dde0;
  }
  else {
    pbVar8 = (byte *)puVar9[2];
  }
LAB_1404171d1:
  uVar3 = FUN_1403ce520(pbVar8,param_3);
  lVar4 = FUN_1403cbe90(uVar3,param_4);
  uVar10 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
  uVar11 = (ulonglong)uVar10;
  FUN_1403a3770(param_5,uVar11);
  while( true ) {
    if (uVar10 == 0) {
      return;
    }
    puVar13 = local_res10;
    uVar10 = (int)uVar11 - 1;
    uVar11 = (ulonglong)uVar10;
    iVar14 = 1;
    uVar5 = (uint)*(byte *)(lVar4 + 4) * 0x100 + (uint)*(byte *)(lVar4 + 5);
    local_res10[0] = 0;
    uVar6 = 0;
    if (uVar10 <= uVar5) {
      uVar6 = uVar5 - uVar10;
    }
    uVar5 = 1;
    if (uVar6 < 2) {
      uVar5 = uVar6;
    }
    puVar12 = (ushort *)(uVar11 * 2 + 6 + lVar4);
    uVar6 = uVar5;
    while (uVar6 != 0) {
      uVar1 = (*puVar12 & 0xff) * 0x100 + (uint)(*puVar12 >> 8);
      if (iVar14 == 0) {
        uVar6 = uVar6 - 1;
        puVar12 = puVar12 + 1;
        DAT_1404e4ff0._0_4_ = uVar1;
      }
      else {
        *puVar13 = uVar1;
        iVar14 = iVar14 + -1;
        puVar13 = puVar13 + 1;
        uVar6 = uVar6 - 1;
        puVar12 = puVar12 + 1;
      }
    }
    if (uVar5 == 0) break;
    if (local_res10[0] == 0xffff) {
      aiStack_28[0] = 0;
    }
    else {
      if ((uint)*pbVar8 * 0x100 + (uint)pbVar8[1] == 1) {
        uVar6 = (uint)pbVar8[6] * 0x100 + (uint)pbVar8[7];
        if (uVar6 == 0) {
          pbVar7 = (byte *)&DAT_14045dde0;
        }
        else {
          pbVar7 = pbVar8 + uVar6;
        }
      }
      else {
        pbVar7 = (byte *)&DAT_14045dde0;
      }
      if (local_res10[0] < (uint)pbVar7[1] + (uint)*pbVar7 * 0x100) {
        pbVar7 = pbVar7 + (ulonglong)local_res10[0] * 6 + 2;
      }
      else {
        pbVar7 = (byte *)&DAT_14045dde0;
      }
      aiStack_28[0] =
           (uint)pbVar7[1] * 0x10000 + (uint)pbVar7[2] * 0x100 + (uint)*pbVar7 * 0x1000000 +
           (uint)pbVar7[3];
    }
    func_0x00014038e1d0(param_5,aiStack_28,aiStack_28[0] * -0x61c8864f,local_res10,1);
  }
  return;
}

