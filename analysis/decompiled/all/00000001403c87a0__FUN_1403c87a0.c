// Function: FUN_1403c87a0
// Addr: 1403c87a0
// Size: 249 bytes


undefined1
FUN_1403c87a0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
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
  undefined8 uStack_78;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  if ((uint)param_3 < *(uint *)(param_1 + 0x1c)) {
    puVar3 = param_5;
    if (param_5 == (undefined4 *)0xffffffffffffffff) {
      puVar3 = (undefined4 *)0x0;
    }
    if (puVar3[4] == 0) {
      lVar2 = FUN_1403d02e0(param_1,&local_88,param_3,0);
      if (*(int *)(lVar2 + 0x24) == 0) {
        *param_4 = 0;
        param_4[1] = 0;
        return 1;
      }
      uVar1 = func_0x000140387010(*(undefined8 *)(lVar2 + 0x18),param_2,param_1,
                                  *(undefined4 *)(lVar2 + 0x20),param_4);
      return uVar1;
    }
    if (*(uint *)(param_1 + 0x1c) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      if (lVar2 != 0) {
        LOCK();
        bVar4 = lVar2 == *(longlong *)(param_1 + 0x30);
        if (bVar4) {
          *(longlong *)(param_1 + 0x30) = 0;
        }
        UNLOCK();
        if (bVar4) {
          local_88 = *param_5;
          uStack_84 = param_5[1];
          uStack_80 = param_5[2];
          uStack_7c = param_5[3];
          uStack_78 = *(undefined8 *)(param_5 + 4);
          uStack_48 = 0;
          uStack_40 = 1;
          uStack_3c = 0x7f7fffff;
          uStack_38 = 0x7f7fffff;
          uStack_34 = 0xff7fffff;
          uStack_30 = 0xff7fffff;
          local_58 = param_2;
          puStack_50 = param_4;
          uVar1 = FUN_140389cb0(param_1,param_2,param_3 & 0xffffffff,&local_58,&local_88,lVar2,0);
          LOCK();
          bVar4 = *(longlong *)(param_1 + 0x30) == 0;
          if (bVar4) {
            *(longlong *)(param_1 + 0x30) = lVar2;
          }
          UNLOCK();
          if (bVar4) {
            return uVar1;
          }
          FUN_1403971e0(lVar2);
          func_0x0001402bf8e0(lVar2);
          return uVar1;
        }
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1402dd8b0(1,0x98);
    }
  }
  return 0;
}

