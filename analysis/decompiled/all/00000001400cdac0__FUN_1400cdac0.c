// Function: FUN_1400cdac0
// Addr: 1400cdac0
// Size: 730 bytes


void FUN_1400cdac0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(ulonglong *)(lVar1 + 0x10) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 8);
    if (*(ulonglong *)(lVar1 + 0x10) < *(ulonglong *)(lVar1 + 0x38) >> 3) {
      plVar3 = (longlong *)*plVar2;
      if (plVar3 != plVar2) {
        lVar4 = *(longlong *)(lVar1 + 0x18);
        plVar5 = (longlong *)plVar3[1];
        plVar12 = (longlong *)*plVar3;
        lVar10 = (*(ulonglong *)(lVar1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar3 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar3 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar3 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar3 + 0x13)) * 0x100000001b3) * 0x10;
        lVar6 = *(longlong *)(lVar10 + lVar4);
        plVar17 = (longlong *)(lVar10 + lVar4);
        plVar11 = (longlong *)(lVar10 + lVar4 + 8);
        plVar15 = (longlong *)*plVar11;
        FUN_1400cd530((ulonglong)*(byte *)((longlong)plVar3 + 0x12),plVar3);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
        plVar9 = plVar3;
        while (plVar14 = plVar12, plVar9 != plVar15) {
          if (plVar14 == plVar2) {
            if ((longlong *)lVar6 == plVar3) {
LAB_1400cdbe6:
              *plVar17 = (longlong)plVar14;
            }
            goto LAB_1400cdbea;
          }
          plVar12 = (longlong *)*plVar14;
          FUN_1400cd530();
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          plVar9 = plVar14;
        }
        plVar12 = plVar5;
        if ((longlong *)lVar6 == plVar3) {
          *plVar17 = (longlong)plVar2;
          plVar12 = plVar2;
        }
        *plVar11 = (longlong)plVar12;
        while (plVar14 != plVar2) {
          uVar13 = (((((ulonglong)*(byte *)(plVar14 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar14 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar14 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar14 + 0x13)) * 0x100000001b3;
          plVar3 = (longlong *)*plVar14;
          uVar18 = *(ulonglong *)(lVar1 + 0x30) & uVar13;
          plVar12 = *(longlong **)(lVar4 + 8 + uVar18 * 0x10);
          plVar17 = (longlong *)(lVar4 + uVar18 * 0x10);
          FUN_1400cd530(uVar13,plVar14);
          *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
          plVar15 = plVar14;
          while (plVar14 = plVar3, plVar15 != plVar12) {
            if (plVar14 == plVar2) goto LAB_1400cdbe6;
            plVar3 = (longlong *)*plVar14;
            FUN_1400cd530();
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -1;
            plVar15 = plVar14;
          }
          *plVar17 = (longlong)plVar2;
          *(longlong **)(lVar4 + 8 + uVar18 * 0x10) = plVar2;
        }
LAB_1400cdbea:
        *plVar5 = (longlong)plVar14;
        plVar14[1] = (longlong)plVar5;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar16 = (undefined8 *)*plVar2;
      while (puVar16 != (undefined8 *)0x0) {
        plVar2 = (longlong *)puVar16[0x12];
        puVar7 = (undefined8 *)*puVar16;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar16 + 0xb);
          puVar16[0x12] = 0;
        }
        plVar2 = (longlong *)puVar16[10];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != puVar16 + 3);
          puVar16[10] = 0;
        }
        thunk_FUN_14028af80(puVar16,0xa0);
        puVar16 = puVar7;
      }
      *(undefined8 *)*(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar1 + 8);
      *(longlong *)(*(longlong *)(lVar1 + 8) + 8) = *(longlong *)(lVar1 + 8);
      *(undefined8 *)(lVar1 + 0x10) = 0;
      puVar16 = *(undefined8 **)(lVar1 + 0x18);
      puVar7 = *(undefined8 **)(lVar1 + 0x20);
      if (puVar16 != puVar7) {
        uVar13 = (longlong)puVar7 + (7 - (longlong)puVar16) & 0xfffffffffffffff8;
        if (puVar7 < puVar16) {
          uVar13 = 0;
        }
        uVar8 = *(undefined8 *)(lVar1 + 8);
        for (uVar13 = uVar13 / 8; uVar13 != 0; uVar13 = uVar13 - 1) {
          *puVar16 = uVar8;
          puVar16 = puVar16 + 1;
        }
      }
    }
  }
  return;
}

