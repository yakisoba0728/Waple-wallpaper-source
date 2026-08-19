// Function: FUN_14003dbe0
// Addr: 14003dbe0
// Size: 263 bytes


uint FUN_14003dbe0(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint local_res10 [2];
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68 [4];
  undefined4 local_60;
  undefined2 local_50 [4];
  char local_48 [48];
  
  local_48._0_4_ = s_IFolderView2_140475cc0._8_4_;
  local_res18 = (longlong *)0x0;
  local_70 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  local_80 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  iVar1 = (*DAT_140426b78)(&DAT_140426fa8,0,0x17,&DAT_140426f98,&local_70);
  if (-1 < iVar1) {
    local_60 = 0;
    local_68[0] = 3;
    local_50[0] = 0;
    iVar1 = (**(code **)(*local_70 + 0x78))(local_70,local_68,local_50,8,local_res10,1,&local_78);
    if (-1 < iVar1) {
      iVar1 = (**(code **)*local_78)(local_78,&DAT_140475d48,&local_80);
      if (-1 < iVar1) {
        iVar1 = (**(code **)(*local_80 + 0x18))(local_80,&DAT_140426f58,&DAT_140475d38,&local_88);
        if (-1 < iVar1) {
          iVar1 = (**(code **)(*local_88 + 0x78))(local_88,&local_res20);
          if (-1 < iVar1) {
            (**(code **)*local_res20)(local_res20,&UNK_140475d28,&local_res18);
          }
        }
      }
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_res18 == (longlong *)0x0) {
    uVar2 = 1;
  }
  else {
    local_res10[0] = 0;
    (**(code **)(*local_res18 + 200))(local_res18,local_res10);
    if ((param_1 == (byte *)0x0) || (*param_1 != (~(byte)(local_res10[0] >> 0xc) & 1))) {
      (**(code **)(*local_res18 + 0xc0))(local_res18,0x1000,local_res10[0] ^ 0x1000);
    }
    (**(code **)(*local_res18 + 0x10))();
    uVar2 = local_res10[0] >> 0xc & 0xffffff01;
  }
  return uVar2;
}

