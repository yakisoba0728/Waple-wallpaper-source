// Function: FUN_140079e80
// Addr: 140079e80
// Size: 848 bytes


void FUN_140079e80(longlong param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar2 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar16 = (longlong *)*plVar2;
      if (plVar16 != plVar2) {
        puVar15 = plVar16 + 2;
        lVar3 = *(longlong *)(param_1 + 0x18);
        plVar4 = (longlong *)plVar16[1];
        if (0xf < (ulonglong)plVar16[5]) {
          puVar15 = (undefined8 *)*puVar15;
        }
        uVar10 = 0;
        uVar12 = 0xcbf29ce484222325;
        if (plVar16[4] != 0) {
          do {
            pbVar1 = (byte *)(uVar10 + (longlong)puVar15);
            uVar10 = uVar10 + 1;
            uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
          } while (uVar10 < (ulonglong)plVar16[4]);
        }
        lVar8 = (*(ulonglong *)(param_1 + 0x30) & uVar12) * 0x10;
        plVar11 = (longlong *)(lVar3 + 8 + lVar8);
        lVar5 = *(longlong *)(lVar8 + lVar3);
        plVar9 = (longlong *)*plVar11;
        plVar14 = plVar16;
        do {
          plVar13 = (longlong *)*plVar14;
          FUN_140017240(plVar14 + 0xe);
          FUN_140017240(plVar14 + 10);
          FUN_14003a630(plVar14 + 7);
          FUN_140017240(plVar14 + 2);
          thunk_FUN_14028af80(plVar14);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar14 == plVar9) {
            plVar9 = plVar4;
            if ((longlong *)lVar5 == plVar16) {
              *(longlong *)(lVar8 + lVar3) = (longlong)plVar2;
              plVar9 = plVar2;
            }
            *plVar11 = (longlong)plVar9;
            while (plVar13 != plVar2) {
              plVar16 = plVar13 + 2;
              if (0xf < (ulonglong)plVar13[5]) {
                plVar16 = (longlong *)*plVar16;
              }
              uVar12 = 0;
              uVar10 = 0xcbf29ce484222325;
              if (plVar13[4] != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar16 + uVar12);
                  uVar12 = uVar12 + 1;
                  uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
                } while (uVar12 < (ulonglong)plVar13[4]);
              }
              uVar10 = *(ulonglong *)(param_1 + 0x30) & uVar10;
              plVar9 = *(longlong **)(lVar3 + 8 + uVar10 * 0x10);
              plVar16 = (longlong *)(lVar3 + uVar10 * 0x10);
              plVar14 = plVar13;
              while( true ) {
                plVar13 = (longlong *)*plVar14;
                FUN_140017240(plVar14 + 0xe);
                FUN_140017240(plVar14 + 10);
                FUN_14003a630(plVar14 + 7);
                FUN_140017240(plVar14 + 2);
                thunk_FUN_14028af80(plVar14);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                if (plVar14 == plVar9) break;
                plVar14 = plVar13;
                if (plVar13 == plVar2) {
                  *plVar16 = (longlong)plVar13;
                  goto LAB_140079fde;
                }
              }
              *plVar16 = (longlong)plVar2;
              *(longlong **)(lVar3 + 8 + uVar10 * 0x10) = plVar2;
            }
            goto LAB_140079fde;
          }
          plVar14 = plVar13;
        } while (plVar13 != plVar2);
        if ((longlong *)lVar5 == plVar16) {
          *(longlong *)(lVar8 + lVar3) = (longlong)plVar13;
        }
LAB_140079fde:
        *plVar4 = (longlong)plVar13;
        plVar13[1] = (longlong)plVar4;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar15 = (undefined8 *)*plVar2;
      while (puVar15 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar15;
        FUN_140017240(puVar15 + 0xe);
        FUN_140017240(puVar15 + 10);
        FUN_14003a630(puVar15 + 7);
        FUN_140017240(puVar15 + 2);
        thunk_FUN_14028af80(puVar15);
        puVar15 = puVar6;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar15 = *(undefined8 **)(param_1 + 0x18);
      puVar6 = *(undefined8 **)(param_1 + 0x20);
      if (puVar15 != puVar6) {
        uVar10 = (longlong)puVar6 + (7 - (longlong)puVar15) & 0xfffffffffffffff8;
        if (puVar6 < puVar15) {
          uVar10 = 0;
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        for (uVar10 = uVar10 / 8; uVar10 != 0; uVar10 = uVar10 - 1) {
          *puVar15 = uVar7;
          puVar15 = puVar15 + 1;
        }
      }
    }
  }
  return;
}

