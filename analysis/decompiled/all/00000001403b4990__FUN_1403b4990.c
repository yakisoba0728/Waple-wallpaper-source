// Function: FUN_1403b4990
// Addr: 1403b4990
// Size: 484 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403b4990(longlong param_1,longlong param_2,uint param_3)

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
        DAT_1404e4ff0 = DAT_14045dde0;
        puVar3 = &DAT_1404e4ff0;
      }
      if (*(uint *)((longlong)puVar3 + 4) < *(uint *)(param_2 + 4)) {
        puVar4 = (uint *)(*(longlong *)(param_2 + 8) +
                         (ulonglong)*(uint *)((longlong)puVar3 + 4) * 4);
      }
      else {
        puVar4 = (uint *)&DAT_1404e4ff0;
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
        piVar5 = (int *)&DAT_14045dde0;
      }
      if (*piVar5 != -1) {
        uVar10 = (uint)uVar11;
        if (uVar10 < uVar8) {
          if (uVar8 < uVar7) {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar9 * 0x48);
          }
          else {
            DAT_1404e4ff0 = DAT_14045dde0;
            DAT_1404e4ff8 = _DAT_14045dde8;
            puVar3 = &DAT_1404e4ff0;
            _DAT_1404e5000 = DAT_14045ddf0;
            _DAT_1404e5008 = _DAT_14045ddf8;
            _DAT_1404e5010 = _DAT_14045de00;
            uRam00000001404e5018 = _UNK_14045de08;
            _DAT_1404e5020 = _DAT_14045de10;
            uRam00000001404e5028 = _UNK_14045de18;
            DAT_1404e5030 = DAT_14045de20;
          }
          if (uVar10 < *(uint *)(param_1 + 0x24)) {
            puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + uVar11 * 0x48);
          }
          else {
            DAT_1404e4ff0 = DAT_14045dde0;
            DAT_1404e4ff8 = _DAT_14045dde8;
            puVar6 = &DAT_1404e4ff0;
            _DAT_1404e5000 = DAT_14045ddf0;
            _DAT_1404e5008 = _DAT_14045ddf8;
            _DAT_1404e5010 = _DAT_14045de00;
            uRam00000001404e5018 = _UNK_14045de08;
            _DAT_1404e5020 = _DAT_14045de10;
            uRam00000001404e5028 = _UNK_14045de18;
            DAT_1404e5030 = DAT_14045de20;
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
          puVar4 = (uint *)&DAT_14045dde0;
        }
        if (*puVar4 < *(uint *)(param_1 + 0x14)) {
          puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)*puVar4 * 8);
        }
        else {
          DAT_1404e4ff0 = DAT_14045dde0;
          puVar3 = &DAT_1404e4ff0;
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

