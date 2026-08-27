// Function: FUN_140122000
// Addr: 140122000
// Size: 546 bytes


void FUN_140122000(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong *local_res8;
  float local_res10 [2];
  float local_res18;
  undefined4 uStackX_1c;
  longlong *local_res20;
  longlong *local_68;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  *(float *)(param_1 + 0x30) = param_2;
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return;
  }
  if (*(float *)(param_1 + 0xcc) == param_2) {
    return;
  }
  local_res20 = (longlong *)0x0;
  local_68 = (longlong *)0x0;
  iVar2 = MFGetService(*(longlong *)(param_1 + 0x88),&DAT_140474278,&DAT_140489f70,&local_res20);
  if ((-1 < iVar2) &&
     (iVar2 = MFGetService(*(undefined8 *)(param_1 + 0x88),&DAT_140474278,&DAT_140489f80,&local_68),
     -1 < iVar2)) {
    local_res10[0] = 1.0;
    iVar2 = (**(code **)(*local_68 + 0x28))(local_68,0,param_2,local_res10);
    if (iVar2 == -0x3ff2c930) {
      local_res18 = 0.0;
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,0x40000000);
      (**(code **)(*local_68 + 0x18))(local_68,0,0,&local_res18);
      (**(code **)(*local_68 + 0x20))(local_68,0,0,&local_res8);
      if (local_res8._0_4_ <= local_res10[0]) {
        local_res10[0] = local_res8._0_4_;
      }
      fVar1 = local_res18;
      if (local_res18 <= local_res10[0]) {
        fVar1 = local_res10[0];
      }
    }
    else {
      fVar1 = local_res10[0];
      if (iVar2 < 0) goto LAB_1401221e7;
    }
    local_res10[0] = fVar1;
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 == 3) {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x50))();
    }
    (**(code **)(*local_res20 + 0x18))(local_res20,0,DAT_140492704);
    (**(code **)(*local_res20 + 0x18))(local_res20,0,local_res10[0]);
    if (iVar2 == 3) {
      local_res8 = (longlong *)0x0;
      local_48 = 0;
      uStack_50 = 0;
      local_58 = 0x14;
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x70))
                (*(longlong **)(param_1 + 0x88),&local_res8);
      if (local_res8 != (longlong *)0x0) {
        iVar2 = (**(code **)(*local_res8 + 0x20))(local_res8,0,&local_res18,local_60);
        if (-1 < iVar2) {
          uStack_50 = CONCAT44(uStackX_1c,local_res18);
        }
        if (local_res8 != (longlong *)0x0) {
          (**(code **)(*local_res8 + 0x10))();
          local_res8 = (longlong *)0x0;
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x48))
                (*(longlong **)(param_1 + 0x88),0,&local_58);
      *(undefined4 *)(param_1 + 0xb0) = 3;
      PropVariantClear((PROPVARIANT *)&local_58);
    }
  }
LAB_1401221e7:
  if (local_res20 != (longlong *)0x0) {
    (**(code **)(*local_res20 + 0x10))();
    local_res20 = (longlong *)0x0;
  }
  if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x10))();
  }
  *(float *)(param_1 + 0xcc) = param_2;
  return;
}

