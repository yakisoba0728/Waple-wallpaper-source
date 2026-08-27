// Function: FUN_14005b860
// Addr: 14005b860
// Size: 809 bytes


void FUN_14005b860(longlong param_1)

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
  
  if (param_1 == 0) {
    return;
  }
  if (*(HMODULE *)(param_1 + 0x78) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x78));
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  for (puVar3 = (undefined8 *)*puVar2; puVar3 != puVar2; puVar3 = (undefined8 *)*puVar3) {
    plVar4 = (longlong *)puVar3[4];
    plVar10 = (longlong *)puVar3[5];
    if ((longlong *)puVar3[3] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar3[3] + 0x10))();
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    plVar4 = (longlong *)*plVar1;
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != plVar4) {
        local_res10 = *(longlong *)(param_1 + 0x18);
        plVar5 = (longlong *)plVar1[1];
        lVar6 = (*(ulonglong *)(param_1 + 0x30) &
                (((((ulonglong)*(byte *)(plVar1 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar1 + 0x11)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar1 + 0x12)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar1 + 0x13)) * 0x100000001b3) * 0x10;
        local_res18 = (longlong *)(local_res10 + 8 + lVar6);
        plVar10 = (longlong *)(lVar6 + local_res10);
        local_res8 = *(longlong *)(lVar6 + local_res10);
        plVar7 = (longlong *)*local_res18;
        plVar8 = plVar1;
LAB_14005b9a0:
        plVar9 = (longlong *)*plVar8;
        thunk_FUN_14028af80(plVar8,0x38);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
        if (plVar8 != plVar7) goto code_r0x00014005b9c0;
        plVar7 = plVar5;
        if ((longlong *)local_res8 == plVar1) {
          *plVar10 = (longlong)plVar4;
          plVar7 = plVar4;
        }
        *local_res18 = (longlong)plVar7;
        while (plVar9 != plVar4) {
          uVar11 = *(ulonglong *)(param_1 + 0x30) &
                   (((((ulonglong)*(byte *)(plVar9 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar9 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar9 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar9 + 0x13)) * 0x100000001b3;
          plVar1 = *(longlong **)(local_res10 + 8 + uVar11 * 0x10);
          plVar10 = (longlong *)(local_res10 + uVar11 * 0x10);
          plVar7 = plVar9;
          while( true ) {
            plVar9 = (longlong *)*plVar7;
            thunk_FUN_14028af80(plVar7,0x38);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
            if (plVar7 == plVar1) break;
            plVar7 = plVar9;
            if (plVar9 == plVar4) goto LAB_14005b9cc;
          }
          *plVar10 = (longlong)plVar4;
          *(longlong **)(local_res10 + 8 + uVar11 * 0x10) = plVar4;
        }
        goto LAB_14005b9d0;
      }
    }
    else {
      *(undefined8 *)plVar4[1] = 0;
      puVar2 = (undefined8 *)*plVar4;
      while (puVar2 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar2;
        thunk_FUN_14028af80(puVar2,0x38);
        puVar2 = puVar3;
      }
      *(longlong *)*plVar1 = *plVar1;
      *(longlong *)(*plVar1 + 8) = *plVar1;
      *(undefined8 *)(param_1 + 0x10) = 0;
      local_res8 = *plVar1;
      FUN_14000f7d0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),&local_res8);
    }
  }
LAB_14005b9de:
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x60) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x60));
  }
  FUN_14000d9e0(param_1 + 0x18);
  FUN_14005f6d0(param_1 + 8);
  thunk_FUN_14028af80(param_1,0xa0);
  return;
code_r0x00014005b9c0:
  plVar8 = plVar9;
  if (plVar9 == plVar4) goto code_r0x00014005b9c5;
  goto LAB_14005b9a0;
code_r0x00014005b9c5:
  if ((longlong *)local_res8 == plVar1) {
LAB_14005b9cc:
    *plVar10 = (longlong)plVar9;
  }
LAB_14005b9d0:
  *plVar5 = (longlong)plVar9;
  plVar9[1] = (longlong)plVar5;
  goto LAB_14005b9de;
}

