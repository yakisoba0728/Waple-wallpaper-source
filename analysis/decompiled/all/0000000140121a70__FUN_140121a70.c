// Function: FUN_140121a70
// Addr: 140121a70
// Size: 161 bytes


undefined4 FUN_140121a70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_res10;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined8 *)(param_1 + 0x1c) = param_2;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    piVar1 = (int *)(param_1 + 0xd4);
    local_res10 = (longlong *)param_2;
    FUN_140108cf0(&local_res10,param_1 + 0x24,*(undefined4 *)(param_1 + 8),param_1 + 0xc,&local_28,
                  piVar1);
    if (*(int *)(param_1 + 8) == 1) {
      iVar4 = (int)param_2;
      if ((float)iVar4 / (float)local_res10._4_4_ <=
          (float)*(int *)(param_1 + 0x24) / (float)*(int *)(param_1 + 0x28)) {
        *(int *)(param_1 + 0xd8) = -*(int *)(param_1 + 0xd8);
        *(int *)(param_1 + 0xe0) = local_res10._4_4_ * 2 - *(int *)(param_1 + 0xe0);
      }
      else {
        iVar2 = *piVar1;
        *piVar1 = -(iVar4 - *(int *)(param_1 + 0xdc));
        *(int *)(param_1 + 0xdc) = iVar4 + iVar2;
      }
    }
    fStack_18 = (float)local_28 / (float)*(int *)(param_1 + 0x24);
    fStack_14 = (float)iStack_24 / (float)*(int *)(param_1 + 0x28);
    fStack_10 = (float)iStack_20 / (float)*(int *)(param_1 + 0x24);
    fStack_c = (float)iStack_1c / (float)*(int *)(param_1 + 0x28);
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x38))
              (*(longlong **)(param_1 + 0xa0),*(int *)(param_1 + 8) == 1);
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))
                      (*(longlong **)(param_1 + 0xa0),&fStack_18,piVar1);
    if (*(int *)(param_1 + 8) == 1) {
      local_res10 = (longlong *)0x0;
      iVar4 = (*pcRam00000001404e3a80)
                        (*(undefined8 *)(param_1 + 0x88),&UNK_14042c450,&UNK_14048a070,&local_res10)
      ;
      if (-1 < iVar4) {
        (**(code **)(*local_res10 + 0x70))(local_res10,*(undefined4 *)(param_1 + 0x38));
        if (local_res10 != (longlong *)0x0) {
          (**(code **)(*local_res10 + 0x10))();
        }
      }
    }
    return uVar3;
  }
  return 0;
}

