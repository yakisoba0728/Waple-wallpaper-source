// Function: FUN_1400336f0
// Addr: 1400336f0
// Size: 635 bytes


longlong * FUN_1400336f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  
  if (param_2 == param_3) {
    return param_3;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2 = (undefined8 *)param_2[1];
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar5 = (*(ulonglong *)(param_1 + 0x30) &
          (((((ulonglong)*(byte *)(param_2 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
            (ulonglong)*(byte *)((longlong)param_2 + 0x11)) * 0x100000001b3 ^
           (ulonglong)*(byte *)((longlong)param_2 + 0x12)) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 0x100000001b3) * 0x10;
  plVar7 = (longlong *)(lVar1 + 8 + lVar5);
  plVar6 = (longlong *)(lVar5 + lVar1);
  plVar4 = *(longlong **)(lVar5 + lVar1);
  plVar9 = (longlong *)*plVar7;
  plVar8 = param_2;
  do {
    plVar10 = (longlong *)*plVar8;
    FUN_140017240(plVar8 + 0xb);
    FUN_140017240(plVar8 + 7);
    FUN_140017240(plVar8 + 3);
    thunk_FUN_14028af80(plVar8,0x78);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    if (plVar8 == plVar9) {
      puVar11 = puVar2;
      if (plVar4 == param_2) {
        *plVar6 = (longlong)puVar3;
        puVar11 = puVar3;
      }
      *plVar7 = (longlong)puVar11;
      while (plVar10 != param_3) {
        uVar12 = *(ulonglong *)(param_1 + 0x30) &
                 (((((ulonglong)*(byte *)(plVar10 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar10 + 0x11)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar10 + 0x12)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar10 + 0x13)) * 0x100000001b3;
        plVar4 = *(longlong **)(lVar1 + 8 + uVar12 * 0x10);
        plVar6 = (longlong *)(lVar1 + uVar12 * 0x10);
        plVar9 = plVar10;
        while( true ) {
          plVar10 = (longlong *)*plVar9;
          FUN_140017240(plVar9 + 0xb);
          FUN_140017240(plVar9 + 7);
          FUN_140017240(plVar9 + 3);
          thunk_FUN_14028af80(plVar9,0x78);
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
          if (plVar9 == plVar4) break;
          plVar9 = plVar10;
          if (plVar10 == param_3) goto LAB_14003390a;
        }
        *plVar6 = (longlong)puVar3;
        *(undefined8 **)(lVar1 + 8 + uVar12 * 0x10) = puVar3;
      }
      goto LAB_14003390d;
    }
    plVar8 = plVar10;
  } while (plVar10 != param_3);
  if (plVar4 == param_2) {
LAB_14003390a:
    *plVar6 = (longlong)plVar10;
  }
LAB_14003390d:
  *puVar2 = plVar10;
  plVar10[1] = (longlong)puVar2;
  return param_3;
}

