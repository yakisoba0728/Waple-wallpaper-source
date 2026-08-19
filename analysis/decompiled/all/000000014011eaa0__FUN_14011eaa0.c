// Function: FUN_14011eaa0
// Addr: 14011eaa0
// Size: 660 bytes


undefined8
FUN_14011eaa0(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffff08;
  undefined8 *puVar5;
  undefined8 local_c8;
  int iStack_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_78;
  undefined4 local_74;
  int iStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  wchar_t *local_38;
  undefined8 uStack_30;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  iStack_c0 = param_4[2];
  iStack_bc = param_4[3];
  local_c8 = 0;
  (*DAT_1404268a8)(&local_c8,0xcf0000,0,0);
  iVar2 = param_4[1];
  if (iVar2 == -0x80000000) {
    if (*param_4 != -0x80000000) {
      param_4[1] = 0;
      iVar2 = 0;
      goto LAB_14011eb04;
    }
  }
  else {
LAB_14011eb04:
    if (*param_4 == -0x80000000) {
      *param_4 = 0;
    }
  }
  if ((*(longlong *)(param_1 + 8) == 0) || (iVar1 = (*DAT_140426af0)(), iVar1 == 0)) {
    iVar2 = func_0x000140290e50(&DAT_1404dfb20);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (DAT_1404dfb6c != 0x7fffffff) {
      if (DAT_1404e908c == 0) {
        local_74 = 0;
        iStack_70 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = (wchar_t *)0x0;
        uStack_30 = 0;
        local_6c = 0;
        uStack_68 = 0;
        local_64 = 0;
        uStack_60 = 0;
        local_5c = 0;
        local_50 = 0;
        local_78 = 0x50;
        local_58 = param_3;
        local_48 = (*DAT_140426198)(4);
        iStack_70 = 0x4011e9b0;
        local_6c = 1;
        uVar3 = (*DAT_140426438)(0);
        uStack_60 = (undefined4)uVar3;
        local_5c = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_38 = L"WPEOverlappedWallpaper";
        DAT_1404e908c = (*DAT_1404268e8)(&local_78);
      }
      FUN_140290f70(&DAT_1404dfb20);
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      uVar3 = func_0x000140421ed0(param_2);
      return uVar3;
    }
    DAT_1404dfb6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  local_78 = 0x2c;
  iVar1 = (*DAT_1404268a0)(*(undefined8 *)(param_1 + 8),&local_78);
  if ((iVar1 == 1) && ((iStack_70 == 3) != (bool)param_5)) {
    puVar5 = &local_res8;
    local_res8 = 0;
    if (param_5 != '\0') {
      (*DAT_1404267f0)(*(undefined8 *)(param_1 + 8),0x112,0xf030);
      goto LAB_14011eec0;
    }
    (*DAT_1404267f0)(*(undefined8 *)(param_1 + 8),0x112,0xf120,0,1,0,puVar5);
    uVar6 = (undefined4)((ulonglong)puVar5 >> 0x20);
  }
  else if (param_5 != '\0') goto LAB_14011eec0;
  if ((*param_4 == -0x80000000) || (uVar4 = 0x14, iVar2 == -0x80000000)) {
    uVar4 = 0x16;
  }
  (*DAT_140426950)(*(undefined8 *)(param_1 + 8),0,*param_4,iVar2,iStack_c0 - (int)local_c8,
                   iStack_bc - local_c8._4_4_,CONCAT44(uVar6,uVar4));
LAB_14011eec0:
  return *(undefined8 *)(param_1 + 8);
}

