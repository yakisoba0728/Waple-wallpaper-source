// Function: FUN_14000f420
// Addr: 14000f420
// Size: 175 bytes


longlong * FUN_14000f420(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + -4;
  *(undefined ***)((longlong)*(int *)(param_1[-4] + 4) + -0x20 + (longlong)param_1) =
       &PTR_LAB_140474170;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x24 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x20;
  *(undefined **)((longlong)*(int *)(param_1[-2] + 4) + -0x10 + (longlong)param_1) = &DAT_14042af80;
  *(int *)((longlong)*(int *)(param_1[-2] + 4) + -0x14 + (longlong)param_1) =
       *(int *)(param_1[-2] + 4) + -0x10;
  *(undefined **)((longlong)*(int *)(*plVar1 + 4) + -0x20 + (longlong)param_1) = &DAT_140474168;
  *(int *)((longlong)*(int *)(*plVar1 + 4) + -0x24 + (longlong)param_1) =
       *(int *)(*plVar1 + 4) + -0x18;
  *param_1 = &DAT_14042af60;
  FUN_14028c500(param_1);
  if ((param_2 & 1) != 0) {
    plVar1 = (longlong *)func_0x00014028b040(plVar1,0x80);
    return plVar1;
  }
  return plVar1;
}

