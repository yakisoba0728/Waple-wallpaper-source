// Function: FUN_140136ea0
// Addr: 140136ea0
// Size: 570 bytes


longlong * FUN_140136ea0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  puVar1 = (undefined8 *)param_2[1];
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar8 = (longlong *)(lVar2 + 8 + lVar5);
  plVar7 = (longlong *)(lVar5 + lVar2);
  plVar4 = *(longlong **)(lVar5 + lVar2);
  plVar10 = (longlong *)*plVar8;
  plVar9 = param_2;
  do {
    plVar11 = (longlong *)*plVar9;
    FUN_140016770(plVar9 + 3);
    thunk_FUN_14028af80(plVar9,0x38);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar9 == plVar10) {
      puVar6 = puVar1;
      if (plVar4 == param_2) {
        *plVar7 = (longlong)puVar3;
        puVar6 = puVar3;
      }
      *plVar8 = (longlong)puVar6;
      while (plVar11 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar11 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar11 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar11 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar11 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar2 + 8 + uVar12 * 0x10);
        plVar7 = (longlong *)(lVar2 + uVar12 * 0x10);
        plVar10 = plVar11;
        while( true ) {
          plVar11 = (longlong *)*plVar10;
          FUN_140016770(plVar10 + 3);
          thunk_FUN_14028af80(plVar10,0x38);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar10 == plVar4) break;
          plVar10 = plVar11;
          if (plVar11 == param_3) goto LAB_140137085;
        }
        *plVar7 = (longlong)puVar3;
        *(undefined8 **)(lVar2 + 8 + uVar12 * 0x10) = puVar3;
      }
      goto LAB_140137088;
    }
    plVar9 = plVar11;
  } while (plVar11 != param_3);
  if (plVar4 == param_2) {
LAB_140137085:
    *plVar7 = (longlong)plVar11;
  }
LAB_140137088:
  *puVar1 = plVar11;
  plVar11[1] = (longlong)puVar1;
  return param_3;
}

