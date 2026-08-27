// Function: FUN_1403c86d0
// Addr: 1403c86d0
// Size: 441 bytes


undefined1
FUN_1403c86d0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  
  if ((uint)param_3 < *(uint *)(param_1 + 0x1c)) {
    puVar3 = param_5;
    if (param_5 == (undefined4 *)0xffffffffffffffff) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3[4] == 0) {
      lVar2 = FUN_1403d0210(param_1,&local_88,param_3,0);
      if (*(int *)(lVar2 + 0x24) == 0) {
        *param_4 = 0;
        param_4[1] = 0;
        return 1;
      }
      uVar1 = FUN_140386f40(*(undefined8 *)(lVar2 + 0x18),param_2,param_1,
                            *(undefined4 *)(lVar2 + 0x20),param_4);
      return uVar1;
    }
    if (*(uint *)(param_1 + 0x1c) == 0) {
      return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (lVar2 != 0) {
      LOCK();
      bVar4 = lVar2 == *(longlong *)(param_1 + 0x30);
      if (bVar4) {
        *(longlong *)(param_1 + 0x30) = 0;
      }
      UNLOCK();
      if (bVar4) goto LAB_1403c875f;
    }
    lVar2 = _calloc_base(1,0x98);
    if (lVar2 != 0) {
LAB_1403c875f:
      local_88 = *param_5;
      uStack_84 = param_5[1];
      uStack_80 = param_5[2];
      uStack_7c = param_5[3];
      local_78 = *(undefined8 *)(param_5 + 4);
      local_48 = 0;
      local_40 = 1;
      local_3c = 0x7f7fffff;
      local_38 = 0x7f7fffff;
      local_34 = 0xff7fffff;
      local_30 = 0xff7fffff;
      local_58 = param_2;
      local_50 = param_4;
      uVar1 = FUN_140389be0(param_1,param_2,param_3 & 0xffffffff,&local_58,&local_88,lVar2,0);
      LOCK();
      bVar4 = *(longlong *)(param_1 + 0x30) == 0;
      if (bVar4) {
        *(longlong *)(param_1 + 0x30) = lVar2;
      }
      UNLOCK();
      if (!bVar4) {
        FUN_140397110(lVar2);
        thunk_FUN_1402d9040(lVar2);
        return uVar1;
      }
      return uVar1;
    }
  }
  return 0;
}

