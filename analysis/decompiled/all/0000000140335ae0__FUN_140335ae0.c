// Function: FUN_140335ae0
// Addr: 140335ae0
// Size: 140 bytes


void FUN_140335ae0(longlong param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  int local_res8;
  int iStackX_c;
  int local_res10 [4];
  int iStackX_20;
  int iStackX_24;
  uint uVar4;
  int *piVar5;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48e8) + 9) == '\0') ||
     (*(char *)(param_1 + 0x48d5) != '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((*(int *)(param_1 + 0x4920) != param_2) || (*(uint *)(param_1 + 0x4924) != param_3)) ||
     (bVar2)) {
    piVar5 = local_res10;
    uVar4 = param_3;
    FUN_140335580(param_1,*(int *)(param_1 + 0x4920),*(undefined4 *)(param_1 + 0x4924),param_2,
                  param_3,piVar5,&local_res8);
    iStackX_20 = *(int *)(param_1 + 0x4920) + local_res10[0];
    iStackX_24 = *(int *)(param_1 + 0x4924) + local_res8;
    local_res10[0] = local_res10[0] + param_2;
    uVar3 = CONCAT44(iStackX_24,iStackX_20);
    iStackX_c = local_res8 + param_3;
    uVar1 = CONCAT44(iStackX_c,local_res10[0]);
    local_res8 = local_res10[0];
    if (*(char *)(param_1 + 0x48d7) != '\0') {
      FUN_140335d30(param_1,uVar3);
      *(undefined1 *)(param_1 + 0x48d7) = 0;
      *(undefined1 *)(param_1 + 0x48d4) = 1;
      *(undefined8 *)(param_1 + 0x4918) = uVar1;
    }
    if (*(char *)(param_1 + 0x4938) != '\0') {
      FUN_140335de0(param_1,param_1 + 0x10,&iStackX_20,uVar1,uVar4 & 0xffffff00);
      uVar3 = CONCAT44(iStackX_24,iStackX_20);
    }
    *(undefined8 *)(param_1 + 0x4940) = uVar3;
    *(undefined8 *)(param_1 + 0x4948) = uVar1;
    *(undefined1 *)(param_1 + 0x4938) = 1;
    *(undefined4 *)(param_1 + 0x493c) = 2;
    if (bVar2) {
      FUN_1403362f0(param_1 + 0x10,*(undefined8 *)(param_1 + 0x48d8),
                    *(undefined8 *)(param_1 + 0x48e0),*(undefined8 *)(param_1 + 0x48e8),
                    *(undefined4 *)(param_1 + 0x48f0),(ulonglong)piVar5 & 0xffffffffffffff00);
    }
    *(int *)(param_1 + 0x4920) = param_2;
    *(uint *)(param_1 + 0x4924) = param_3;
  }
  return;
}

