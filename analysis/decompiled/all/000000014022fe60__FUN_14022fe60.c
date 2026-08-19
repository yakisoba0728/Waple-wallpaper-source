// Function: FUN_14022fe60
// Addr: 14022fe60
// Size: 170 bytes


void FUN_14022fe60(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  
  if (*(int *)(param_1 + 0x340) != 0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
    func_0x000140421870(*(undefined8 *)(param_1 + 0x260),0,
                        (ulonglong)*(uint *)(param_1 + 0x34c) << 2);
    if (*(longlong *)(param_1 + 0x218) != *(longlong *)(param_1 + 0x220)) {
      *(longlong *)(param_1 + 0x220) = *(longlong *)(param_1 + 0x218);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x488);
  for (lVar9 = *(longlong *)(param_1 + 0x480); lVar9 != lVar4; lVar9 = lVar9 + 0x10) {
    FUN_14022fe60(*(undefined8 *)(lVar9 + 8));
  }
  lVar4 = *(longlong *)(param_1 + 0x4a0);
  for (lVar9 = *(longlong *)(param_1 + 0x498); lVar9 != lVar4; lVar9 = lVar9 + 0x38) {
    plVar5 = *(longlong **)(lVar9 + 0x10);
    for (plVar10 = *(longlong **)(lVar9 + 8); plVar10 != plVar5; plVar10 = plVar10 + 1) {
      lVar6 = *plVar10;
      if (lVar6 != 0) {
        FUN_14022ad30(lVar6);
        func_0x00014028b040(lVar6,0x4b0);
      }
    }
    if (*(longlong *)(lVar9 + 8) != *(longlong *)(lVar9 + 0x10)) {
      *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 8);
    }
  }
  if (*(ulonglong *)(param_1 + 0x448) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x440);
    if (*(ulonglong *)(param_1 + 0x448) < *(ulonglong *)(param_1 + 0x470) >> 3) {
      plVar10 = (longlong *)*plVar5;
      if (plVar10 != plVar5) {
        lVar4 = *(longlong *)(param_1 + 0x450);
        plVar1 = (longlong *)plVar10[1];
        lVar9 = (*(ulonglong *)(param_1 + 0x468) &
                (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3) * 0x10;
        plVar8 = (longlong *)(lVar4 + 8 + lVar9);
        plVar14 = (longlong *)(lVar9 + lVar4);
        lVar9 = *(longlong *)(lVar9 + lVar4);
        plVar7 = (longlong *)*plVar8;
        plVar11 = plVar10;
        do {
          plVar12 = (longlong *)*plVar11;
          func_0x00014028b040(plVar11,0x18);
          *(longlong *)(param_1 + 0x448) = *(longlong *)(param_1 + 0x448) + -1;
          if (plVar11 == plVar7) {
            plVar7 = plVar1;
            if ((longlong *)lVar9 == plVar10) {
              *plVar14 = (longlong)plVar5;
              plVar7 = plVar5;
            }
            *plVar8 = (longlong)plVar7;
            while (plVar12 != plVar5) {
              uVar15 = *(ulonglong *)(param_1 + 0x468) &
                       (((((ulonglong)*(byte *)(plVar12 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar12 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar12 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar12 + 0x13)) * 0x100000001b3;
              plVar10 = *(longlong **)(lVar4 + 8 + uVar15 * 0x10);
              plVar14 = (longlong *)(lVar4 + uVar15 * 0x10);
              plVar7 = plVar12;
              while( true ) {
                plVar12 = (longlong *)*plVar7;
                func_0x00014028b040(plVar7,0x18);
                *(longlong *)(param_1 + 0x448) = *(longlong *)(param_1 + 0x448) + -1;
                if (plVar7 == plVar10) break;
                plVar7 = plVar12;
                if (plVar12 == plVar5) goto code_r0x000140161e18;
              }
              *plVar14 = (longlong)plVar5;
              *(longlong **)(lVar4 + 8 + uVar15 * 0x10) = plVar5;
            }
            goto code_r0x000140161e1c;
          }
          plVar11 = plVar12;
        } while (plVar12 != plVar5);
        if ((longlong *)lVar9 == plVar10) {
code_r0x000140161e18:
          *plVar14 = (longlong)plVar12;
        }
code_r0x000140161e1c:
        *plVar1 = (longlong)plVar12;
        plVar12[1] = (longlong)plVar1;
        return;
      }
    }
    else {
      *(undefined8 *)plVar5[1] = 0;
      puVar13 = (undefined8 *)*plVar5;
      while (puVar13 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar13;
        func_0x00014028b040(puVar13,0x18);
        puVar13 = puVar2;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_1 + 0x440);
      *(longlong *)(*(longlong *)(param_1 + 0x440) + 8) = *(longlong *)(param_1 + 0x440);
      *(undefined8 *)(param_1 + 0x448) = 0;
      puVar13 = *(undefined8 **)(param_1 + 0x450);
      puVar2 = *(undefined8 **)(param_1 + 0x458);
      if (puVar13 != puVar2) {
        uVar15 = (longlong)puVar2 + (7 - (longlong)puVar13) & 0xfffffffffffffff8;
        if (puVar2 < puVar13) {
          uVar15 = 0;
        }
        uVar3 = *(undefined8 *)(param_1 + 0x440);
        for (uVar15 = uVar15 / 8; uVar15 != 0; uVar15 = uVar15 - 1) {
          *puVar13 = uVar3;
          puVar13 = puVar13 + 1;
        }
      }
    }
  }
  return;
}

