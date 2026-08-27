// Function: FUN_1402c983c
// Addr: 1402c983c
// Size: 247 bytes


undefined4
FUN_1402c983c(longlong *param_1,char *param_2,longlong param_3,undefined8 *param_4,
             undefined4 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_28;
  
  if (param_1 != (longlong *)0x0) {
    *param_1 = 0;
    if (param_2 == (char *)0x0) {
      puVar1 = (undefined4 *)FUN_1402caf34();
      *puVar1 = 9;
      return 9;
    }
    if ((param_3 != 0) && (param_4 != (undefined8 *)0x0)) {
      if (*param_2 == '\0') {
        puVar1 = (undefined4 *)FUN_1402caf34();
        *puVar1 = 0x16;
        return 0x16;
      }
      local_28 = 0;
      FUN_1402c9b24(param_4);
      if ((*(uint *)((longlong)param_4 + 0x14) >> 0xd & 1) != 0) {
        FUN_1402c9c60(param_4);
      }
      *param_4 = 0;
      param_4[1] = 0;
      *(undefined4 *)(param_4 + 2) = 0;
      LOCK();
      *(undefined4 *)((longlong)param_4 + 0x14) = 0;
      UNLOCK();
      LOCK();
      *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) | 0x2000;
      UNLOCK();
      lVar2 = FUN_1402dd69c(param_2,param_3,param_5,param_4);
      *param_1 = lVar2;
      if (lVar2 == 0) {
        LOCK();
        *(uint *)((longlong)param_4 + 0x14) = *(uint *)((longlong)param_4 + 0x14) & 0xffffdfff;
        UNLOCK();
        puVar1 = (undefined4 *)FUN_1402caf34();
        local_28 = *puVar1;
      }
      FUN_1402c9b30(param_4);
      return local_28;
    }
  }
  puVar1 = (undefined4 *)FUN_1402caf34();
  *puVar1 = 0x16;
  FUN_1402cad8c();
  return 0x16;
}

