// Function: FUN_14007ff60
// Addr: 14007ff60
// Size: 755 bytes


void FUN_14007ff60(longlong param_1)

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
  longlong *plVar10;
  ulonglong uVar11;
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
        if (7 < (ulonglong)plVar16[5]) {
          puVar15 = (undefined8 *)*puVar15;
        }
        uVar11 = 0;
        uVar12 = 0xcbf29ce484222325;
        if (plVar16[4] * 2 != 0) {
          do {
            pbVar1 = (byte *)((longlong)puVar15 + uVar11);
            uVar11 = uVar11 + 1;
            uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
          } while (uVar11 < (ulonglong)(plVar16[4] * 2));
        }
        lVar8 = (*(ulonglong *)(param_1 + 0x30) & uVar12) * 0x10;
        lVar5 = *(longlong *)(lVar8 + lVar3);
        plVar9 = (longlong *)(lVar8 + 8 + lVar3);
        plVar10 = (longlong *)*plVar9;
        plVar14 = plVar16;
        do {
          plVar13 = (longlong *)*plVar14;
          FUN_140016770(plVar14 + 2);
          thunk_FUN_14028af80(plVar14,0x30);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar14 == plVar10) {
            plVar10 = plVar4;
            if ((longlong *)lVar5 == plVar16) {
              *(longlong *)(lVar8 + lVar3) = (longlong)plVar2;
              plVar10 = plVar2;
            }
            *plVar9 = (longlong)plVar10;
            while (plVar13 != plVar2) {
              plVar16 = plVar13 + 2;
              if (7 < (ulonglong)plVar13[5]) {
                plVar16 = (longlong *)*plVar16;
              }
              uVar11 = 0;
              uVar12 = 0xcbf29ce484222325;
              if (plVar13[4] * 2 != 0) {
                do {
                  pbVar1 = (byte *)((longlong)plVar16 + uVar11);
                  uVar11 = uVar11 + 1;
                  uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
                } while (uVar11 < (ulonglong)(plVar13[4] * 2));
              }
              uVar12 = *(ulonglong *)(param_1 + 0x30) & uVar12;
              plVar10 = *(longlong **)(lVar3 + 8 + uVar12 * 0x10);
              plVar16 = (longlong *)(lVar3 + uVar12 * 0x10);
              plVar14 = plVar13;
              while( true ) {
                plVar13 = (longlong *)*plVar14;
                FUN_140016770(plVar14 + 2);
                thunk_FUN_14028af80(plVar14,0x30);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                if (plVar14 == plVar10) break;
                plVar14 = plVar13;
                if (plVar13 == plVar2) {
                  *plVar16 = (longlong)plVar13;
                  goto LAB_14008008c;
                }
              }
              *plVar16 = (longlong)plVar2;
              *(longlong **)(lVar3 + 8 + uVar12 * 0x10) = plVar2;
            }
            goto LAB_14008008c;
          }
          plVar14 = plVar13;
        } while (plVar13 != plVar2);
        if ((longlong *)lVar5 == plVar16) {
          *(longlong *)(lVar8 + lVar3) = (longlong)plVar13;
        }
LAB_14008008c:
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
        FUN_140016770(puVar15 + 2);
        thunk_FUN_14028af80(puVar15);
        puVar15 = puVar6;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar15 = *(undefined8 **)(param_1 + 0x18);
      puVar6 = *(undefined8 **)(param_1 + 0x20);
      if (puVar15 != puVar6) {
        uVar11 = (longlong)puVar6 + (7 - (longlong)puVar15) & 0xfffffffffffffff8;
        if (puVar6 < puVar15) {
          uVar11 = 0;
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        for (uVar11 = uVar11 / 8; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar15 = uVar7;
          puVar15 = puVar15 + 1;
        }
      }
    }
  }
  return;
}

