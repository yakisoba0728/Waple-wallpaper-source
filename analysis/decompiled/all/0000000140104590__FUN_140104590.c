// Function: FUN_140104590
// Addr: 140104590
// Size: 779 bytes


void FUN_140104590(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  
  lVar2 = *param_1;
  if ((lVar2 != 0) && (*(ulonglong *)(lVar2 + 0x10) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 8);
    if (*(ulonglong *)(lVar2 + 0x10) < *(ulonglong *)(lVar2 + 0x38) >> 3) {
      plVar18 = (longlong *)*plVar3;
      if (plVar18 != plVar3) {
        puVar17 = plVar18 + 2;
        lVar4 = *(longlong *)(lVar2 + 0x18);
        plVar5 = (longlong *)plVar18[1];
        if (0xf < (ulonglong)plVar18[5]) {
          puVar17 = (undefined8 *)*puVar17;
        }
        uVar12 = 0;
        uVar13 = 0xcbf29ce484222325;
        if (plVar18[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar17 + uVar12);
            uVar12 = uVar12 + 1;
            uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
          } while (uVar12 < (ulonglong)plVar18[4]);
        }
        plVar11 = (longlong *)*plVar18;
        lVar10 = (*(ulonglong *)(lVar2 + 0x30) & uVar13) * 0x10;
        lVar6 = *(longlong *)(lVar10 + lVar4);
        plVar14 = (longlong *)(lVar4 + 8 + lVar10);
        plVar7 = (longlong *)*plVar14;
        FUN_1401042a0(uVar12,plVar18);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
        plVar16 = plVar18;
        while (plVar15 = plVar11, plVar16 != plVar7) {
          if (plVar15 == plVar3) {
            if ((longlong *)lVar6 == plVar18) {
              *(longlong *)(lVar10 + lVar4) = (longlong)plVar15;
            }
            *plVar5 = (longlong)plVar15;
            plVar15[1] = (longlong)plVar5;
            return;
          }
          plVar11 = (longlong *)*plVar15;
          FUN_1401042a0();
          *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
          plVar16 = plVar15;
        }
        plVar11 = plVar5;
        if ((longlong *)lVar6 == plVar18) {
          *(longlong *)(lVar10 + lVar4) = (longlong)plVar3;
          plVar11 = plVar3;
        }
        *plVar14 = (longlong)plVar11;
        if (plVar15 == plVar3) {
LAB_1401047c9:
          *plVar5 = (longlong)plVar15;
          plVar15[1] = (longlong)plVar5;
        }
        else {
          do {
            plVar18 = plVar15 + 2;
            if (0xf < (ulonglong)plVar15[5]) {
              plVar18 = (longlong *)*plVar18;
            }
            uVar12 = 0;
            uVar13 = 0xcbf29ce484222325;
            if (plVar15[4] != 0) {
              do {
                pbVar1 = (byte *)(uVar12 + (longlong)plVar18);
                uVar12 = uVar12 + 1;
                uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
              } while (uVar12 < (ulonglong)plVar15[4]);
            }
            uVar13 = *(ulonglong *)(lVar2 + 0x30) & uVar13;
            plVar11 = (longlong *)*plVar15;
            plVar7 = *(longlong **)(lVar4 + 8 + uVar13 * 0x10);
            plVar18 = (longlong *)(lVar4 + uVar13 * 0x10);
            FUN_1401042a0(uVar12,plVar15);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
            plVar16 = plVar15;
            while (plVar15 = plVar11, plVar16 != plVar7) {
              if (plVar15 == plVar3) {
                *plVar18 = (longlong)plVar15;
                goto LAB_1401047c9;
              }
              plVar11 = (longlong *)*plVar15;
              FUN_1401042a0();
              *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -1;
              plVar16 = plVar15;
            }
            *plVar18 = (longlong)plVar3;
            *(longlong **)(lVar4 + 8 + uVar13 * 0x10) = plVar3;
          } while (plVar15 != plVar3);
          *plVar5 = (longlong)plVar15;
          plVar15[1] = (longlong)plVar5;
        }
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar17 = (undefined8 *)*plVar3;
      while (puVar17 != (undefined8 *)0x0) {
        plVar3 = (longlong *)puVar17[0x17];
        puVar8 = (undefined8 *)*puVar17;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != puVar17 + 0x10);
          puVar17[0x17] = 0;
        }
        FUN_14000d9e0(puVar17 + 0xb);
        FUN_140031340(puVar17 + 9);
        FUN_140017240(puVar17 + 2);
        thunk_FUN_14028af80(puVar17);
        puVar17 = puVar8;
      }
      *(undefined8 *)*(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar2 + 8);
      *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
      *(undefined8 *)(lVar2 + 0x10) = 0;
      puVar17 = *(undefined8 **)(lVar2 + 0x18);
      puVar8 = *(undefined8 **)(lVar2 + 0x20);
      if (puVar17 != puVar8) {
        uVar12 = (longlong)puVar8 + (7 - (longlong)puVar17) & 0xfffffffffffffff8;
        if (puVar8 < puVar17) {
          uVar12 = 0;
        }
        uVar9 = *(undefined8 *)(lVar2 + 8);
        for (uVar12 = uVar12 / 8; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar17 = uVar9;
          puVar17 = puVar17 + 1;
        }
      }
    }
  }
  return;
}

