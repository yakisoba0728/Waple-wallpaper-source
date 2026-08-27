// Function: FUN_14040a460
// Addr: 14040a460
// Size: 248 bytes


bool FUN_14040a460(undefined2 *param_1,longlong param_2,uint param_3,undefined1 param_4)

{
  byte bVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined2 local_res10;
  
  if ((*(int *)(param_2 + 0x2c) == 0) && (param_1 <= param_1 + 1)) {
    lVar2 = *(longlong *)(param_2 + 8);
    puVar3 = (undefined1 *)((longlong)param_1 + (2 - lVar2));
    if ((puVar3 < (undefined1 *)0x80000000) &&
       ((longlong)puVar3 <= *(longlong *)(param_2 + 0x10) - lVar2)) {
      if ((int)puVar3 != 0) {
        FUN_1404217a0(lVar2,0,(ulonglong)puVar3 & 0xffffffff);
      }
      lVar2 = *(longlong *)(param_2 + 8);
      *(undefined1 **)(param_2 + 8) = puVar3 + lVar2;
      if ((lVar2 != 0) && (param_1 != (undefined2 *)0x0)) {
        bVar1 = (byte)(param_3 >> 8);
        local_res10 = CONCAT11((char)param_3,bVar1);
        *param_1 = local_res10;
        if ((uint)bVar1 * 0x100 + (param_3 & 0xff) != param_3) {
          *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) | 0x10;
        }
        lVar2 = FUN_140386ea0(param_2,param_1,
                              (ulonglong)
                              CONCAT11(*(undefined1 *)param_1,*(undefined1 *)((longlong)param_1 + 1)
                                      ) * 2 + 2,param_4);
        return lVar2 != 0;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x2c) = 4;
    }
  }
  return false;
}

