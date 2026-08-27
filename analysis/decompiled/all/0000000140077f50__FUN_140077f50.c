// Function: FUN_140077f50
// Addr: 140077f50
// Size: 759 bytes


void FUN_140077f50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar2 = (longlong *)*plVar1;
      if (plVar2 != plVar1) {
        plVar3 = (longlong *)plVar2[1];
        lVar4 = *(longlong *)(param_1 + 0x18);
        lVar8 = (*(ulonglong *)(param_1 + 0x30) &
                (((((((((ulonglong)*(byte *)(plVar2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar2 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar2 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar2 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar2 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar2 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar2 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar2 + 0x17)) * 0x100000001b3) * 0x10;
        plVar10 = (longlong *)(lVar4 + 8 + lVar8);
        lVar5 = *(longlong *)(lVar8 + lVar4);
        plVar9 = (longlong *)*plVar10;
        plVar11 = plVar2;
        do {
          plVar12 = (longlong *)*plVar11;
          thunk_FUN_14028af80(plVar11,0x18);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar11 == plVar9) {
            plVar9 = plVar3;
            if ((longlong *)lVar5 == plVar2) {
              *(longlong *)(lVar8 + lVar4) = (longlong)plVar1;
              plVar9 = plVar1;
            }
            *plVar10 = (longlong)plVar9;
            while (plVar12 != plVar1) {
              uVar14 = *(ulonglong *)(param_1 + 0x30) &
                       (((((((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) *
                              0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) *
                             0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) *
                            0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) *
                           0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x14)) *
                          0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x15)) *
                         0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x16)) *
                        0x100000001b3 ^ (ulonglong)*(byte *)((longlong)plVar12 + 0x17)) *
                       0x100000001b3;
              plVar2 = *(longlong **)(lVar4 + 8 + uVar14 * 0x10);
              plVar9 = plVar12;
              while( true ) {
                plVar12 = (longlong *)*plVar9;
                thunk_FUN_14028af80(plVar9,0x18);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                if (plVar9 == plVar2) break;
                plVar9 = plVar12;
                if (plVar12 == plVar1) {
                  *(longlong **)(lVar4 + uVar14 * 0x10) = plVar12;
                  goto LAB_140078090;
                }
              }
              *(longlong **)(lVar4 + uVar14 * 0x10) = plVar1;
              *(longlong **)(lVar4 + 8 + uVar14 * 0x10) = plVar1;
            }
            goto LAB_140078090;
          }
          plVar11 = plVar12;
        } while (plVar12 != plVar1);
        if ((longlong *)lVar5 == plVar2) {
          *(longlong *)(lVar8 + lVar4) = (longlong)plVar12;
        }
LAB_140078090:
        *plVar3 = (longlong)plVar12;
        plVar12[1] = (longlong)plVar3;
        return;
      }
    }
    else {
      *(undefined8 *)plVar1[1] = 0;
      puVar13 = (undefined8 *)*plVar1;
      while (puVar13 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)*puVar13;
        thunk_FUN_14028af80(puVar13,0x18);
        puVar13 = puVar6;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar13 = *(undefined8 **)(param_1 + 0x18);
      puVar6 = *(undefined8 **)(param_1 + 0x20);
      if (puVar13 != puVar6) {
        uVar14 = (longlong)puVar6 + (7 - (longlong)puVar13) & 0xfffffffffffffff8;
        if (puVar6 < puVar13) {
          uVar14 = 0;
        }
        uVar7 = *(undefined8 *)(param_1 + 8);
        for (uVar14 = uVar14 / 8; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar13 = uVar7;
          puVar13 = puVar13 + 1;
        }
      }
    }
  }
  return;
}

