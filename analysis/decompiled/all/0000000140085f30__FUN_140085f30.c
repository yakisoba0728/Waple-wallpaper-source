// Function: FUN_140085f30
// Addr: 140085f30
// Size: 58 bytes


void FUN_140085f30(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &PTR_DAT_140478960;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x88;
  FUN_140014bb0(param_1 + 1);
  *(undefined **)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) = &DAT_14042af80;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  param_1[0x11] = (longlong)&DAT_14042af60;
  lVar1 = param_1[0x12];
  if ((lVar1 == 0) ||
     ((&DAT_1404e3bf0)[lVar1] = (&DAT_1404e3bf0)[lVar1] + -1, (char)(&DAT_1404e3bf0)[lVar1] < '\x01'
     )) {
    for (puVar2 = (undefined8 *)param_1[0x18]; puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)*puVar2) {
      (*(code *)PTR_FUN_140426bb8)(0,param_1 + 0x11,*(undefined4 *)(puVar2 + 1));
    }
    puVar2 = (undefined8 *)param_1[0x17];
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      func_0x00014028b040(puVar2,0x18);
      puVar2 = puVar3;
    }
    param_1[0x17] = 0;
    puVar2 = (undefined8 *)param_1[0x18];
    while (puVar2 != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)*puVar2;
      func_0x00014028b040(puVar2,0x18);
      puVar2 = puVar3;
    }
    param_1[0x18] = 0;
    lVar1 = param_1[0x19];
    if (lVar1 != 0) {
      if ((*(longlong *)(lVar1 + 8) != 0) && (lVar4 = (*(code *)PTR_FUN_140426bb8)(), lVar4 != 0)) {
        (*(code *)PTR_FUN_140426bb8)(lVar4,1);
      }
      func_0x00014028b040(lVar1,0x10);
    }
  }
  return;
}

