// Function: FUN_1401c33e0
// Addr: 1401c33e0
// Size: 1113 bytes


void FUN_1401c33e0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  puVar1 = *(undefined8 **)(param_1 + 0xa0);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar10 = puVar2[2];
    if (lVar10 != 0) {
      FUN_14000d9e0(lVar10 + 0x80);
      FUN_1401d9d50(lVar10 + 0x68);
      FUN_140017240(lVar10 + 0x18);
      thunk_FUN_14028af80(lVar10,0xd8);
    }
  }
  FUN_140160a70(param_1 + 0x98);
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar10 = puVar2[2];
    if (lVar10 != 0) {
      FUN_1401d4520(lVar10 + 0x128);
      FUN_1401d4520(lVar10 + 0x68);
      FUN_140031b80(lVar10 + 0x50);
      FUN_1401d9410(lVar10 + 0x38);
      FUN_1401d9410(lVar10 + 0x20);
      thunk_FUN_14028af80(lVar10,0x1e8);
    }
  }
  plVar9 = (longlong *)(param_1 + 0xe0);
  if (*(ulonglong *)(param_1 + 0xe8) != 0) {
    plVar3 = (longlong *)*plVar9;
    if (*(ulonglong *)(param_1 + 0xe8) < *(ulonglong *)(param_1 + 0x110) >> 3) {
      plVar9 = (longlong *)*plVar3;
      if (plVar9 != plVar3) {
        lVar10 = *(longlong *)(param_1 + 0xf0);
        plVar4 = (longlong *)plVar9[1];
        lVar5 = (*(ulonglong *)(param_1 + 0x108) &
                (((((((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x14)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar9 + 0x15)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar9 + 0x16)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar9 + 0x17)) * 0x100000001b3) * 0x10;
        local_res20 = (longlong *)(lVar10 + 8 + lVar5);
        local_res10 = (longlong *)(lVar5 + lVar10);
        local_res8 = *(longlong *)(lVar5 + lVar10);
        plVar6 = (longlong *)*local_res20;
        plVar7 = plVar9;
        local_res18 = lVar10;
        do {
          plVar8 = (longlong *)*plVar7;
          thunk_FUN_14028af80(plVar7,0x18);
          *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + -1;
          if (plVar7 == plVar6) {
            plVar6 = plVar4;
            if ((longlong *)local_res8 == plVar9) {
              *local_res10 = (longlong)plVar3;
              plVar6 = plVar3;
            }
            *local_res20 = (longlong)plVar6;
            if (plVar8 != plVar3) goto LAB_1401c3620;
            goto LAB_1401c35e3;
          }
          plVar7 = plVar8;
        } while (plVar8 != plVar3);
        if ((longlong *)local_res8 == plVar9) {
          *local_res10 = (longlong)plVar8;
        }
LAB_1401c35e3:
        *plVar4 = (longlong)plVar8;
        plVar8[1] = (longlong)plVar4;
      }
    }
    else {
      *(undefined8 *)plVar3[1] = 0;
      puVar1 = (undefined8 *)*plVar3;
      while (puVar1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*puVar1;
        thunk_FUN_14028af80(puVar1,0x18);
        puVar1 = puVar2;
      }
      *(longlong *)*plVar9 = *plVar9;
      *(longlong *)(*plVar9 + 8) = *plVar9;
      *(undefined8 *)(param_1 + 0xe8) = 0;
      local_res8 = *plVar9;
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0xf8),&local_res8);
    }
  }
LAB_1401c376c:
  FUN_14000d9e0(param_1 + 0x1f8);
  FUN_1401d91d0(param_1 + 0x1e8);
  FUN_14000d9e0(param_1 + 0x1b0);
  FUN_14003de70(param_1 + 0x1a0);
  FUN_14000d9e0(param_1 + 0x170);
  FUN_140030c70(param_1 + 0x160);
  FUN_14000d9e0(param_1 + 0x130);
  FUN_140049340(param_1 + 0x120);
  FUN_14000d9e0(param_1 + 0xf0);
  FUN_140049340(param_1 + 0xe0);
  FUN_14000d9e0(param_1 + 0xb0);
  FUN_140049340(param_1 + 0xa0);
  FUN_14000d9e0(param_1 + 0x60);
  FUN_140030c70(param_1 + 0x50);
  FUN_14000d9e0(param_1 + 0x20);
  FUN_140030c70(param_1 + 0x10);
  return;
LAB_1401c3620:
  do {
    uVar11 = *(ulonglong *)(param_1 + 0x108) &
             (((((((((ulonglong)*(byte *)(plVar8 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar8 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar8 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar8 + 0x13)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar8 + 0x14)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar8 + 0x15)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar8 + 0x16)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)plVar8 + 0x17)) * 0x100000001b3;
    plVar9 = *(longlong **)(local_res18 + 8 + uVar11 * 0x10);
    plVar6 = plVar8;
    while( true ) {
      plVar8 = (longlong *)*plVar6;
      thunk_FUN_14028af80(plVar6,0x18);
      *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + -1;
      if (plVar6 == plVar9) break;
      plVar6 = plVar8;
      if (plVar8 == plVar3) {
        *(longlong **)(lVar10 + uVar11 * 0x10) = plVar8;
        *plVar4 = (longlong)plVar8;
        plVar8[1] = (longlong)plVar4;
        goto LAB_1401c376c;
      }
    }
    *(longlong **)(lVar10 + uVar11 * 0x10) = plVar3;
    *(longlong **)(local_res18 + 8 + uVar11 * 0x10) = plVar3;
    lVar10 = local_res18;
  } while (plVar8 != plVar3);
  *plVar4 = (longlong)plVar8;
  plVar8[1] = (longlong)plVar4;
  goto LAB_1401c376c;
}

