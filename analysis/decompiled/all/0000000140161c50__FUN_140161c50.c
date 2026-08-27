// Function: FUN_140161c50
// Addr: 140161c50
// Size: 618 bytes


void FUN_140161c50(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 8);
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar2 = (longlong *)*plVar1;
      if (plVar2 != plVar1) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        plVar4 = (longlong *)plVar2[1];
        lVar7 = (*(ulonglong *)(param_1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar2 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar2 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar2 + 0x13)) * 0x100000001b3) * 0x10;
        plVar9 = (longlong *)(lVar3 + 8 + lVar7);
        plVar13 = (longlong *)(lVar7 + lVar3);
        lVar7 = *(longlong *)(lVar7 + lVar3);
        plVar8 = (longlong *)*plVar9;
        plVar10 = plVar2;
        do {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_14028af80(plVar10,0x18);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar8) {
            plVar8 = plVar4;
            if ((longlong *)lVar7 == plVar2) {
              *plVar13 = (longlong)plVar1;
              plVar8 = plVar1;
            }
            *plVar9 = (longlong)plVar8;
            while (plVar11 != plVar1) {
              uVar14 = *(ulonglong *)(param_1 + 0x30) &
                       (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
              plVar2 = *(longlong **)(lVar3 + 8 + uVar14 * 0x10);
              plVar13 = (longlong *)(lVar3 + uVar14 * 0x10);
              plVar8 = plVar11;
              while( true ) {
                plVar11 = (longlong *)*plVar8;
                thunk_FUN_14028af80(plVar8,0x18);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
                if (plVar8 == plVar2) break;
                plVar8 = plVar11;
                if (plVar11 == plVar1) goto LAB_140161d48;
              }
              *plVar13 = (longlong)plVar1;
              *(longlong **)(lVar3 + 8 + uVar14 * 0x10) = plVar1;
            }
            goto LAB_140161d4c;
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar1);
        if ((longlong *)lVar7 == plVar2) {
LAB_140161d48:
          *plVar13 = (longlong)plVar11;
        }
LAB_140161d4c:
        *plVar4 = (longlong)plVar11;
        plVar11[1] = (longlong)plVar4;
        return;
      }
    }
    else {
      *(undefined8 *)plVar1[1] = 0;
      puVar12 = (undefined8 *)*plVar1;
      while (puVar12 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)*puVar12;
        thunk_FUN_14028af80(puVar12,0x18);
        puVar12 = puVar5;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
      *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x10) = 0;
      puVar12 = *(undefined8 **)(param_1 + 0x18);
      puVar5 = *(undefined8 **)(param_1 + 0x20);
      if (puVar12 != puVar5) {
        uVar14 = (longlong)puVar5 + (7 - (longlong)puVar12) & 0xfffffffffffffff8;
        if (puVar5 < puVar12) {
          uVar14 = 0;
        }
        uVar6 = *(undefined8 *)(param_1 + 8);
        for (uVar14 = uVar14 / 8; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar12 = uVar6;
          puVar12 = puVar12 + 1;
        }
      }
    }
  }
  return;
}

