// Function: FUN_140040180
// Addr: 140040180
// Size: 740 bytes


void FUN_140040180(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong local_res8;
  longlong local_res10;
  longlong *local_res18;
  
  puVar2 = *(undefined8 **)(param_1 + 0xa8);
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    lVar6 = puVar3[3];
    if (lVar6 != 0) {
      FUN_140017240(lVar6);
      thunk_FUN_14028af80(lVar6,0x20);
    }
  }
  plVar10 = (longlong *)(param_1 + 0xa8);
  if (*(ulonglong *)(param_1 + 0xb0) != 0) {
    plVar4 = (longlong *)*plVar10;
    if (*(ulonglong *)(param_1 + 0xb0) < *(ulonglong *)(param_1 + 0xd8) >> 3) {
      plVar10 = (longlong *)*plVar4;
      if (plVar10 != plVar4) {
        local_res10 = *(longlong *)(param_1 + 0xb8);
        plVar5 = (longlong *)plVar10[1];
        lVar6 = (*(ulonglong *)(param_1 + 0xd0) &
                (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3) * 0x10;
        local_res18 = (longlong *)(local_res10 + 8 + lVar6);
        plVar1 = (longlong *)(lVar6 + local_res10);
        local_res8 = *(longlong *)(lVar6 + local_res10);
        plVar7 = (longlong *)*local_res18;
        plVar8 = plVar10;
        do {
          plVar9 = (longlong *)*plVar8;
          thunk_FUN_14028af80(plVar8,0x20);
          *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + -1;
          if (plVar8 == plVar7) {
            plVar7 = plVar5;
            if ((longlong *)local_res8 == plVar10) {
              *plVar1 = (longlong)plVar4;
              plVar7 = plVar4;
            }
            *local_res18 = (longlong)plVar7;
            if (plVar9 != plVar4) goto LAB_1400402f0;
            goto LAB_1400402c1;
          }
          plVar8 = plVar9;
        } while (plVar9 != plVar4);
        if ((longlong *)local_res8 == plVar10) {
          *plVar1 = (longlong)plVar9;
        }
LAB_1400402c1:
        *plVar5 = (longlong)plVar9;
        plVar9[1] = (longlong)plVar5;
      }
    }
    else {
      *(undefined8 *)plVar4[1] = 0;
      puVar2 = (undefined8 *)*plVar4;
      while (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar2;
        thunk_FUN_14028af80(puVar2,0x20);
        puVar2 = puVar3;
      }
      *(longlong *)*plVar10 = *plVar10;
      *(longlong *)(*plVar10 + 8) = *plVar10;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      local_res8 = *plVar10;
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xc0),&local_res8);
    }
  }
LAB_140040411:
  FUN_14000d9e0(param_1 + 0xb8);
  FUN_14003de70(param_1 + 0xa8);
  FUN_140085440(param_1 + 0x70);
  FUN_140085440(param_1 + 0x48);
  FUN_140017240(param_1 + 0x28);
  FUN_140016770(param_1 + 8);
  return;
LAB_1400402f0:
  do {
    uVar11 = *(ulonglong *)(param_1 + 0xd0) &
             (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
              (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
             (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3;
    plVar1 = *(longlong **)(local_res10 + 8 + uVar11 * 0x10);
    plVar10 = (longlong *)(local_res10 + uVar11 * 0x10);
    plVar7 = plVar9;
    while( true ) {
      plVar9 = (longlong *)*plVar7;
      thunk_FUN_14028af80(plVar7,0x20);
      *(longlong *)(param_1 + 0xb0) = *(longlong *)(param_1 + 0xb0) + -1;
      if (plVar7 == plVar1) break;
      plVar7 = plVar9;
      if (plVar9 == plVar4) {
        *plVar10 = (longlong)plVar9;
        *plVar5 = (longlong)plVar9;
        plVar9[1] = (longlong)plVar5;
        goto LAB_140040411;
      }
    }
    *plVar10 = (longlong)plVar4;
    *(longlong **)(local_res10 + 8 + uVar11 * 0x10) = plVar4;
  } while (plVar9 != plVar4);
  *plVar5 = (longlong)plVar9;
  plVar9[1] = (longlong)plVar5;
  goto LAB_140040411;
}

