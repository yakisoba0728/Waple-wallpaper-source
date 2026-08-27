// Function: FUN_14005fd90
// Addr: 14005fd90
// Size: 516 bytes


longlong * FUN_14005fd90(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = (undefined8 *)param_2[1];
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar7 = (longlong *)(lVar3 + 8 + lVar5);
  plVar4 = *(longlong **)(lVar5 + lVar3);
  plVar9 = (longlong *)*plVar7;
  plVar8 = param_2;
  do {
    plVar10 = (longlong *)*plVar8;
    thunk_FUN_14028af80(plVar8,0x38);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) {
      puVar6 = puVar1;
      if (plVar4 == param_2) {
        *(longlong *)(lVar5 + lVar3) = (longlong)puVar2;
        puVar6 = puVar2;
      }
      *plVar7 = (longlong)puVar6;
      while (plVar10 != param_3) {
        uVar11 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar3 + 8 + uVar11 * 0x10);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          thunk_FUN_14028af80(plVar9,0x38);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar4) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) {
            *(longlong **)(lVar3 + uVar11 * 0x10) = plVar10;
            goto LAB_14005ff46;
          }
        }
        *(undefined8 **)(lVar3 + uVar11 * 0x10) = puVar2;
        *(undefined8 **)(lVar3 + 8 + uVar11 * 0x10) = puVar2;
      }
      goto LAB_14005ff46;
    }
    plVar8 = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
    *(longlong *)(lVar5 + lVar3) = (longlong)plVar10;
  }
LAB_14005ff46:
  *puVar1 = plVar10;
  plVar10[1] = (longlong)puVar1;
  return param_3;
}

