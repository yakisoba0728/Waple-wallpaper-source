// Function: FUN_14021a260
// Addr: 14021a260
// Size: 959 bytes


void FUN_14021a260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_78 [3];
  longlong local_60 [4];
  
  if (param_1 != param_2) {
    do {
      puVar13 = param_2 + -0x10;
      if (param_1 == puVar13) {
        return;
      }
      uVar1 = *param_1;
      plVar11 = (longlong *)(param_2 + -0xc);
      lVar17 = *(longlong *)(param_1 + 8);
      lVar10 = *(longlong *)(param_1 + 4);
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      uVar5 = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 6) = 0;
      lVar16 = *(longlong *)(param_1 + 0xe);
      *(undefined8 *)(param_1 + 0xe) = 0;
      uVar6 = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(param_1 + 0xc) = 0;
      lVar7 = *(longlong *)(param_1 + 10);
      *(undefined8 *)(param_1 + 10) = 0;
      *param_1 = *puVar13;
      param_1[1] = param_2[-0xf];
      param_1[2] = param_2[-0xe];
      param_1[3] = param_2[-0xd];
      if (param_1 == param_2 + -0x10) {
        puVar14 = param_2 + -10;
        if (param_1 != param_2 + -0x10) goto LAB_14021a39b;
      }
      else {
        *(longlong *)(param_1 + 4) = *plVar11;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + -10);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *plVar11 = 0;
        *(undefined8 *)(param_2 + -10) = 0;
        *(undefined8 *)(param_2 + -8) = 0;
        puVar14 = param_2;
LAB_14021a39b:
        lVar9 = *(longlong *)(param_1 + 10);
        if (lVar9 != 0) {
          uVar12 = (*(longlong *)(param_1 + 0xe) - lVar9 >> 2) * 4;
          if (0xfff < uVar12) {
            if (0x1f < (lVar9 - *(longlong *)(lVar9 + -8)) - 8U) goto LAB_14021a617;
            uVar12 = uVar12 + 0x27;
            lVar9 = *(longlong *)(lVar9 + -8);
          }
          thunk_FUN_14028af80(lVar9,uVar12,puVar14);
          *(undefined8 *)(param_1 + 10) = 0;
          *(undefined8 *)(param_1 + 0xc) = 0;
          *(undefined8 *)(param_1 + 0xe) = 0;
        }
        *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + -6);
        *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + -4);
        *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -6) = 0;
        *(undefined8 *)(param_2 + -4) = 0;
        *(undefined8 *)(param_2 + -2) = 0;
      }
      plVar15 = (longlong *)(param_2 + -6);
      *puVar13 = uVar1;
      param_2[-0xf] = uVar2;
      param_2[-0xe] = uVar3;
      param_2[-0xd] = uVar4;
      lVar9 = lVar10;
      if (plVar11 != local_78) {
        lVar9 = *plVar11;
        if (lVar9 != 0) {
          uVar12 = (*(longlong *)(param_2 + -8) - lVar9 >> 2) * 4;
          if (0xfff < uVar12) {
            if (0x1f < (lVar9 - *(longlong *)(lVar9 + -8)) - 8U) goto LAB_14021a617;
            uVar12 = uVar12 + 0x27;
            lVar9 = *(longlong *)(lVar9 + -8);
          }
          thunk_FUN_14028af80(lVar9,uVar12);
          *(undefined8 *)(param_2 + -10) = 0;
          *(undefined8 *)(param_2 + -8) = 0;
        }
        lVar9 = 0;
        *(longlong *)(param_2 + -8) = lVar17;
        *plVar11 = lVar10;
        *(undefined8 *)(param_2 + -10) = uVar5;
        lVar17 = lVar9;
      }
      lVar10 = lVar7;
      if (plVar15 != local_60) {
        lVar10 = *plVar15;
        if (lVar10 != 0) {
          uVar12 = (*(longlong *)(param_2 + -2) - lVar10 >> 2) * 4;
          if (0xfff < uVar12) {
            if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14021a617;
            uVar12 = uVar12 + 0x27;
            lVar10 = *(longlong *)(lVar10 + -8);
          }
          thunk_FUN_14028af80(lVar10,uVar12);
          *(undefined8 *)(param_2 + -4) = 0;
          *(undefined8 *)(param_2 + -2) = 0;
        }
        lVar10 = 0;
        *plVar15 = lVar7;
        *(longlong *)(param_2 + -2) = lVar16;
        *(undefined8 *)(param_2 + -4) = uVar6;
        lVar16 = lVar10;
      }
      if (lVar10 != 0) {
        uVar12 = (lVar16 - lVar10 >> 2) * 4;
        if (0xfff < uVar12) {
          if (0x1f < (lVar10 - *(longlong *)(lVar10 + -8)) - 8U) goto LAB_14021a617;
          uVar12 = uVar12 + 0x27;
          lVar10 = *(longlong *)(lVar10 + -8);
        }
        thunk_FUN_14028af80(lVar10,uVar12);
      }
      if (lVar9 != 0) {
        uVar12 = (lVar17 - lVar9 >> 2) * 4;
        if (0xfff < uVar12) {
          if (0x1f < (lVar9 - *(longlong *)(lVar9 + -8)) - 8U) {
LAB_14021a617:
            pcVar8 = (code *)swi(0x29);
            (*pcVar8)(5);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar12 = uVar12 + 0x27;
          lVar9 = *(longlong *)(lVar9 + -8);
        }
        thunk_FUN_14028af80(lVar9,uVar12);
      }
      param_1 = param_1 + 0x10;
      param_2 = puVar13;
    } while (param_1 != puVar13);
  }
  return;
}

