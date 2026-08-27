// Function: FUN_140121f00
// Addr: 140121f00
// Size: 242 bytes


void FUN_140121f00(longlong param_1,float param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *local_res8;
  uint local_res10 [2];
  
  *(float *)(param_1 + 0x2c) = param_2;
  if ((*(longlong *)(param_1 + 0x88) != 0) && (param_2 != *(float *)(param_1 + 200))) {
    local_res8 = (longlong *)0x0;
    iVar1 = MFGetService(*(longlong *)(param_1 + 0x88),&DAT_140474268,&DAT_140489f90,&local_res8);
    if (-1 < iVar1) {
      (**(code **)(*local_res8 + 0x18))(local_res8,local_res10);
      uVar2 = SUB168(ZEXT816(4) * ZEXT416(local_res10[0]),0);
      if (SUB168(ZEXT816(4) * ZEXT416(local_res10[0]),8) != 0) {
        uVar2 = 0xffffffffffffffff;
      }
      lVar3 = thunk_FUN_14028af20(uVar2);
      uVar5 = 0;
      if (local_res10[0] != 0) {
        do {
          lVar4 = (longlong)(int)uVar5;
          uVar5 = uVar5 + 1;
          *(float *)(lVar3 + lVar4 * 4) = param_2;
        } while (uVar5 < local_res10[0]);
      }
      (**(code **)(*local_res8 + 0x30))(local_res8,local_res10[0],lVar3);
      thunk_FUN_14028af80(lVar3);
    }
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
    *(float *)(param_1 + 200) = param_2;
  }
  return;
}

