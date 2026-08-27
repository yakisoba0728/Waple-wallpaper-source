// Function: FUN_140124310
// Addr: 140124310
// Size: 340 bytes


undefined8 FUN_140124310(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_1 + 0x1c) = param_2;
  if ((((*(longlong *)(param_1 + 0xb0) != 0) && (0 < *(int *)(param_1 + 0x24))) &&
      (0 < *(int *)(param_1 + 0x28))) &&
     ((iVar4 = (int)param_2, 0 < iVar4 && (0 < (int)((ulonglong)param_2 >> 0x20))))) {
    piVar1 = (int *)(param_1 + 0xc0);
    local_res10 = param_2;
    FUN_140108c20(&local_res10,param_1 + 0x24,*(undefined4 *)(param_1 + 8),param_1 + 0xc,local_18,
                  piVar1);
    if (*(int *)(param_1 + 8) == 1) {
      if ((float)iVar4 / (float)local_res10._4_4_ <=
          (float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x28)) {
        *(int *)(param_1 + 0xc4) = -*(int *)(param_1 + 0xc4);
        *(int *)(param_1 + 0xcc) = local_res10._4_4_ * 2 - *(int *)(param_1 + 0xcc);
      }
      else {
        iVar2 = *piVar1;
        *piVar1 = -(iVar4 - *(int *)(param_1 + 200));
        *(int *)(param_1 + 200) = iVar4 + iVar2;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x38))
              (*(longlong **)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0x38));
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x30))
              (*(longlong **)(param_1 + 0xb0),*(int *)(param_1 + 8) == 1);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x28))
                      (*(longlong **)(param_1 + 0xb0),local_18,piVar1);
    return uVar3;
  }
  return 0;
}

