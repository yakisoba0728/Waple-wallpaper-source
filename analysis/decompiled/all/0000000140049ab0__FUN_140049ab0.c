// Function: FUN_140049ab0
// Addr: 140049ab0
// Size: 42 bytes


longlong * FUN_140049ab0(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = (longlong)&DAT_140475ec0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x16] = (longlong)&DAT_14042af70;
  FUN_140012bb0(param_1,param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       &PTR_UNWIND_INFO_140475ec8;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_14004c640(param_1 + 2);
  lVar1 = func_0x00014004c590(param_1 + 2,param_2,param_3 | 1);
  if (lVar1 == 0) {
    lVar1 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    uVar2 = 6;
    if (*(longlong *)(lVar1 + 0x48) != 0) {
      uVar2 = 2;
    }
    func_0x000140013c20(lVar1,uVar2 | *(uint *)(lVar1 + 0x10),0);
  }
  return param_1;
}

