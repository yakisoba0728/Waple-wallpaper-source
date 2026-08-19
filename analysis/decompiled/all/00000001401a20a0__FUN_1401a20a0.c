// Function: FUN_1401a20a0
// Addr: 1401a20a0
// Size: 229 bytes


void FUN_1401a20a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  lVar1 = *param_1;
  lVar13 = (param_1[1] - lVar1 >> 2) * 0x2e8ba2e8ba2e8ba3;
  if (lVar13 == 0x5d1745d1745d174) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar12 = (param_1[2] - lVar1 >> 2) * 0x2e8ba2e8ba2e8ba3;
  uVar11 = 0x5d1745d1745d174 - (uVar12 >> 1);
  if (uVar12 < uVar11 || uVar12 - uVar11 == 0) {
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar11 = lVar13 + 1;
    if (uVar11 <= uVar12) {
      uVar11 = uVar12;
    }
    if (uVar11 < 0x5d1745d1745d175) {
      uVar11 = uVar11 * 0x2c;
      if (uVar11 == 0) {
        uVar10 = param_3[1];
        uVar2 = *(undefined4 *)(param_3 + 2);
        uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
        uVar4 = *(undefined4 *)(param_3 + 3);
        uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
        puVar14 = (undefined8 *)(((param_2 - lVar1) / 0x2c) * 0x2c);
        *puVar14 = *param_3;
        puVar14[1] = uVar10;
        uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
        uVar7 = *(undefined4 *)(param_3 + 4);
        uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
        uVar9 = *(undefined4 *)(param_3 + 5);
        *(undefined4 *)(puVar14 + 2) = uVar2;
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar3;
        *(undefined4 *)(puVar14 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar5;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar6;
        *(undefined4 *)(puVar14 + 4) = uVar7;
        *(undefined4 *)((longlong)puVar14 + 0x24) = uVar8;
        *(undefined4 *)(puVar14 + 5) = uVar9;
        lVar1 = *param_1;
        if (param_2 == param_1[1]) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(0,lVar1,param_1[1] - lVar1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(0,lVar1,param_2 - lVar1);
      }
      if (uVar11 < 0x1000) {
        func_0x00014028aff0(uVar11);
        return;
      }
      if (uVar11 < uVar11 + 0x27) {
        func_0x00014028aff0();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

