// Function: FUN_1403b48c0
// Addr: 1403b48c0
// Size: 494 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b48c0(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  
  puVar12 = *(undefined4 **)(param_2 + 8);
  for (iVar2 = *(int *)(param_2 + 4); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar12 = 0xffffffff;
    puVar12 = puVar12 + 1;
  }
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      uVar7 = (uint)uVar9;
      if (uVar7 < *(uint *)(param_1 + 0x14)) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar9 * 8);
      }
      else {
        DAT_1404e4f20 = DAT_14045dd10;
        puVar3 = &DAT_1404e4f20;
      }
      if (*(uint *)((longlong)puVar3 + 4) < *(uint *)(param_2 + 4)) {
        puVar4 = (uint *)(*(longlong *)(param_2 + 8) +
                         (ulonglong)*(uint *)((longlong)puVar3 + 4) * 4);
      }
      else {
        puVar4 = (uint *)&DAT_1404e4f20;
      }
      *puVar4 = uVar7;
      uVar9 = (ulonglong)(uVar7 + 1);
    } while (uVar7 + 1 < param_3);
  }
  uVar7 = *(uint *)(param_1 + 0x24);
  if (uVar7 != 0) {
    uVar11 = 0;
    uVar9 = 0;
    do {
      uVar8 = (uint)uVar9;
      if (uVar8 < *(uint *)(param_2 + 4)) {
        piVar5 = (int *)(*(longlong *)(param_2 + 8) + uVar9 * 4);
      }
      else {
        piVar5 = (int *)&DAT_14045dd10;
      }
      if (*piVar5 != -1) {
        uVar10 = (uint)uVar11;
        if (uVar10 < uVar8) {
          if (uVar8 < uVar7) {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar9 * 0x48);
          }
          else {
            DAT_1404e4f20 = DAT_14045dd10;
            _DAT_1404e4f28 = DAT_14045dd18;
            puVar3 = &DAT_1404e4f20;
            _DAT_1404e4f30 = DAT_14045dd20;
            _DAT_1404e4f38 = _DAT_14045dd28;
            _DAT_1404e4f40 = DAT_14045dd30;
            _DAT_1404e4f48 = DAT_14045dd38;
            _DAT_1404e4f50 = _DAT_14045dd40;
            uRam00000001404e4f58 = _UNK_14045dd48;
            DAT_1404e4f60 = DAT_14045dd50;
          }
          if (uVar10 < *(uint *)(param_1 + 0x24)) {
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 0x48);
          }
          else {
            DAT_1404e4f20 = DAT_14045dd10;
            _DAT_1404e4f28 = DAT_14045dd18;
            puVar6 = &DAT_1404e4f20;
            _DAT_1404e4f30 = DAT_14045dd20;
            _DAT_1404e4f38 = _DAT_14045dd28;
            _DAT_1404e4f40 = DAT_14045dd30;
            _DAT_1404e4f48 = DAT_14045dd38;
            _DAT_1404e4f50 = _DAT_14045dd40;
            uRam00000001404e4f58 = _UNK_14045dd48;
            DAT_1404e4f60 = DAT_14045dd50;
          }
          uVar1 = puVar3[1];
          *puVar6 = *puVar3;
          puVar6[1] = uVar1;
          uVar1 = puVar3[3];
          puVar6[2] = puVar3[2];
          puVar6[3] = uVar1;
          uVar1 = puVar3[5];
          puVar6[4] = puVar3[4];
          puVar6[5] = uVar1;
          uVar1 = puVar3[7];
          puVar6[6] = puVar3[6];
          puVar6[7] = uVar1;
          puVar6[8] = puVar3[8];
        }
        if (uVar8 < *(uint *)(param_2 + 4)) {
          puVar4 = (uint *)(*(longlong *)(param_2 + 8) + uVar9 * 4);
        }
        else {
          puVar4 = (uint *)&DAT_14045dd10;
        }
        if (*puVar4 < *(uint *)(param_1 + 0x14)) {
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar4 * 8);
        }
        else {
          DAT_1404e4f20 = DAT_14045dd10;
          puVar3 = &DAT_1404e4f20;
        }
        *(uint *)((longlong)puVar3 + 4) = uVar10;
        uVar11 = (ulonglong)(uVar10 + 1);
      }
      uVar7 = *(uint *)(param_1 + 0x24);
      uVar9 = (ulonglong)(uVar8 + 1);
    } while (uVar8 + 1 < uVar7);
  }
  return;
}

