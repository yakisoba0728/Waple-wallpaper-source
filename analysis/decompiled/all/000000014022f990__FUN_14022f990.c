// Function: FUN_14022f990
// Addr: 14022f990
// Size: 1018 bytes


void FUN_14022f990(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  if (*(int *)(param_1 + 0x340) != 0) {
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
    FUN_1404217a0(*(undefined8 *)(param_1 + 0x260),0,(ulonglong)*(uint *)(param_1 + 0x34c) << 2);
    if (*(longlong *)(param_1 + 0x218) != *(longlong *)(param_1 + 0x220)) {
      *(longlong *)(param_1 + 0x220) = *(longlong *)(param_1 + 0x218);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x488);
  for (lVar7 = *(longlong *)(param_1 + 0x480); lVar7 != lVar9; lVar7 = lVar7 + 0x10) {
    lVar1 = *(longlong *)(lVar7 + 8);
    if (lVar1 != 0) {
      FUN_14022ac60(lVar1);
      thunk_FUN_14028af80(lVar1,0x4b0);
    }
  }
  if (*(longlong *)(param_1 + 0x480) != *(longlong *)(param_1 + 0x488)) {
    *(longlong *)(param_1 + 0x488) = *(longlong *)(param_1 + 0x480);
  }
  lVar9 = *(longlong *)(param_1 + 0x4a0);
  for (lVar7 = *(longlong *)(param_1 + 0x498); lVar7 != lVar9; lVar7 = lVar7 + 0x38) {
    plVar2 = *(longlong **)(lVar7 + 0x10);
    for (plVar8 = *(longlong **)(lVar7 + 8); plVar8 != plVar2; plVar8 = plVar8 + 1) {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        FUN_14022ac60(lVar1);
        thunk_FUN_14028af80(lVar1,0x4b0);
      }
    }
    if (*(longlong *)(lVar7 + 8) != *(longlong *)(lVar7 + 0x10)) {
      *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 8);
    }
    plVar2 = *(longlong **)(lVar7 + 0x28);
    for (plVar8 = *(longlong **)(lVar7 + 0x20); plVar8 != plVar2; plVar8 = plVar8 + 1) {
      lVar1 = *plVar8;
      if (lVar1 != 0) {
        FUN_14022ac60(lVar1);
        thunk_FUN_14028af80(lVar1,0x4b0);
      }
    }
    if (*(longlong *)(lVar7 + 0x20) != *(longlong *)(lVar7 + 0x28)) {
      *(longlong *)(lVar7 + 0x28) = *(longlong *)(lVar7 + 0x20);
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x498);
  lVar7 = *(longlong *)(param_1 + 0x4a0);
  if (lVar9 != lVar7) {
    do {
      FUN_14000d9e0(lVar9 + 0x20);
      FUN_14000d9e0(lVar9 + 8);
      lVar9 = lVar9 + 0x38;
    } while (lVar9 != lVar7);
    *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x498);
  }
  if (*(ulonglong *)(param_1 + 0x448) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x440);
    if (*(ulonglong *)(param_1 + 0x448) < *(ulonglong *)(param_1 + 0x470) >> 3) {
      plVar8 = (longlong *)*plVar2;
      if (plVar8 != plVar2) {
        plVar3 = (longlong *)plVar8[1];
        lVar9 = *(longlong *)(param_1 + 0x450);
        lVar7 = (*(ulonglong *)(param_1 + 0x468) &
                (((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3) * 0x10;
        local_res20 = (longlong *)(lVar9 + 8 + lVar7);
        local_res10 = (longlong *)(lVar7 + lVar9);
        local_res8 = *(longlong *)(lVar7 + lVar9);
        plVar6 = (longlong *)*local_res20;
        plVar10 = plVar8;
        local_res18 = lVar9;
        do {
          plVar11 = (longlong *)*plVar10;
          thunk_FUN_14028af80(plVar10,0x18);
          *(longlong *)(param_1 + 0x448) = *(longlong *)(param_1 + 0x448) + -1;
          if (plVar10 == plVar6) {
            plVar6 = plVar3;
            if ((longlong *)local_res8 == plVar8) {
              *local_res10 = (longlong)plVar2;
              plVar6 = plVar2;
            }
            *local_res20 = (longlong)plVar6;
            while (plVar11 != plVar2) {
              uVar12 = *(ulonglong *)(param_1 + 0x468) &
                       (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                         (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                        (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
              plVar8 = *(longlong **)(local_res18 + 8 + uVar12 * 0x10);
              plVar6 = plVar11;
              while( true ) {
                plVar11 = (longlong *)*plVar6;
                thunk_FUN_14028af80(plVar6,0x18);
                *(longlong *)(param_1 + 0x448) = *(longlong *)(param_1 + 0x448) + -1;
                if (plVar6 == plVar8) break;
                plVar6 = plVar11;
                if (plVar11 == plVar2) {
                  *(longlong **)(lVar9 + uVar12 * 0x10) = plVar11;
                  goto LAB_14022fc25;
                }
              }
              *(longlong **)(lVar9 + uVar12 * 0x10) = plVar2;
              *(longlong **)(local_res18 + 8 + uVar12 * 0x10) = plVar2;
              lVar9 = local_res18;
            }
            goto LAB_14022fc25;
          }
          plVar10 = plVar11;
        } while (plVar11 != plVar2);
        if ((longlong *)local_res8 == plVar8) {
          *local_res10 = (longlong)plVar11;
        }
LAB_14022fc25:
        *plVar3 = (longlong)plVar11;
        plVar11[1] = (longlong)plVar3;
        return;
      }
    }
    else {
      *(undefined8 *)plVar2[1] = 0;
      puVar5 = (undefined8 *)*plVar2;
      while (puVar5 != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)*puVar5;
        thunk_FUN_14028af80(puVar5,0x18);
        puVar5 = puVar4;
      }
      *(undefined8 *)*(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_1 + 0x440);
      *(longlong *)(*(longlong *)(param_1 + 0x440) + 8) = *(longlong *)(param_1 + 0x440);
      *(undefined8 *)(param_1 + 0x448) = 0;
      local_res8 = *(longlong *)(param_1 + 0x440);
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0x450),*(undefined8 *)(param_1 + 0x458),&local_res8);
    }
  }
  return;
}

