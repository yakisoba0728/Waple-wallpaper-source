// Function: FUN_140030540
// Addr: 140030540
// Size: 375 bytes


undefined8 * FUN_140030540(longlong *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  
  puVar7 = (undefined8 *)param_1[1];
  if (puVar7 != (undefined8 *)param_1[2]) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    uVar6 = param_2[1];
    *puVar7 = *param_2;
    puVar7[1] = uVar6;
    uVar6 = param_2[3];
    puVar7[2] = param_2[2];
    puVar7[3] = uVar6;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = (longlong)(puVar7 + 4);
    return puVar7;
  }
  uVar13 = (longlong)puVar7 - *param_1;
  lVar9 = (longlong)uVar13 >> 5;
  if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_140013120();
  }
  uVar12 = param_1[2] - *param_1 >> 5;
  if (uVar12 <= 0x7ffffffffffffff - (uVar12 >> 1)) {
    uVar1 = lVar9 + 1;
    uVar12 = (uVar12 >> 1) + uVar12;
    uVar10 = uVar1;
    if (uVar1 <= uVar12) {
      uVar10 = uVar12;
    }
    if (uVar10 < 0x800000000000000) {
      puVar11 = (undefined8 *)0x0;
      uVar12 = uVar10 * 0x20;
      if (uVar12 == 0) {
        puVar14 = (undefined8 *)(uVar13 & 0xffffffffffffffe0);
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = 0;
        puVar14[3] = 0;
        uVar3 = *(undefined4 *)((longlong)param_2 + 4);
        uVar4 = *(undefined4 *)(param_2 + 1);
        uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
        *(undefined4 *)puVar14 = *(undefined4 *)param_2;
        *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
        *(undefined4 *)(puVar14 + 1) = uVar4;
        *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
        uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
        uVar4 = *(undefined4 *)(param_2 + 3);
        uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(param_2 + 2);
        *(undefined4 *)((longlong)puVar14 + 0x14) = uVar3;
        *(undefined4 *)(puVar14 + 3) = uVar4;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = uVar5;
        param_2[2] = 0;
        param_2[3] = 0xf;
        *(undefined1 *)param_2 = 0;
        puVar2 = (undefined8 *)param_1[1];
        puVar8 = (undefined8 *)*param_1;
        if (puVar7 == puVar2) {
          for (; puVar8 != puVar2; puVar8 = puVar8 + 4) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 4);
            uVar4 = *(undefined4 *)(puVar8 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0xc);
            *(undefined4 *)puVar11 = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
            *(undefined4 *)(puVar11 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x14);
            uVar4 = *(undefined4 *)(puVar8 + 3);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x1c);
            *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar8 + 2);
            *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
            *(undefined4 *)(puVar11 + 3) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            puVar11 = puVar11 + 4;
          }
        }
        else {
          for (; puVar8 != puVar7; puVar8 = puVar8 + 4) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 4);
            uVar4 = *(undefined4 *)(puVar8 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0xc);
            *(undefined4 *)puVar11 = *(undefined4 *)puVar8;
            *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
            *(undefined4 *)(puVar11 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar8 + 0x14);
            uVar4 = *(undefined4 *)(puVar8 + 3);
            uVar5 = *(undefined4 *)((longlong)puVar8 + 0x1c);
            *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar8 + 2);
            *(undefined4 *)((longlong)puVar11 + 0x14) = uVar3;
            *(undefined4 *)(puVar11 + 3) = uVar4;
            *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar5;
            puVar8[2] = 0;
            puVar8[3] = 0xf;
            *(undefined1 *)puVar8 = 0;
            puVar11 = puVar11 + 4;
          }
          puVar11 = (undefined8 *)param_1[1];
          puVar2 = puVar14;
          for (; puVar7 != puVar11; puVar7 = puVar7 + 4) {
            puVar8 = puVar2 + 4;
            *puVar8 = 0;
            puVar2[5] = 0;
            puVar2[6] = 0;
            puVar2[7] = 0;
            uVar3 = *(undefined4 *)((longlong)puVar7 + 4);
            uVar4 = *(undefined4 *)(puVar7 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar7 + 0xc);
            *(undefined4 *)puVar8 = *(undefined4 *)puVar7;
            *(undefined4 *)((longlong)puVar2 + 0x24) = uVar3;
            *(undefined4 *)(puVar2 + 5) = uVar4;
            *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
            uVar3 = *(undefined4 *)((longlong)puVar7 + 0x14);
            uVar4 = *(undefined4 *)(puVar7 + 3);
            uVar5 = *(undefined4 *)((longlong)puVar7 + 0x1c);
            *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar7 + 2);
            *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
            *(undefined4 *)(puVar2 + 7) = uVar4;
            *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
            puVar7[2] = 0;
            puVar7[3] = 0xf;
            *(undefined1 *)puVar7 = 0;
            puVar2 = puVar8;
          }
        }
        FUN_140013140(param_1,0,uVar1,uVar10);
        return puVar14;
      }
      if (uVar12 < 0x1000) {
        puVar7 = (undefined8 *)func_0x00014028aff0();
        return puVar7;
      }
      if (uVar12 < uVar12 + 0x27) {
        puVar7 = (undefined8 *)func_0x00014028aff0(uVar12 + 0x27);
        return puVar7;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017440();
}

