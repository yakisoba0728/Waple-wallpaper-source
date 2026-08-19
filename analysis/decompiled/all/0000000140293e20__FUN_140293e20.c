// Function: FUN_140293e20
// Addr: 140293e20
// Size: 408 bytes


longlong FUN_140293e20(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_68 [4];
  undefined1 local_64 [44];
  
  lVar1 = DAT_1404e3d78;
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e3d78 == 0) {
        lVar1 = func_0x000140291580(local_68,0);
        return lVar1;
      }
      lVar1 = func_0x00014028aff0(0x30);
      return lVar1;
    }
    if (DAT_1404e3d78 == 0) {
      lVar1 = func_0x000140291580(local_68,0);
      return lVar1;
    }
    uVar2 = FUN_140013e10(param_4);
    thunk_FUN_140293ba0(param_3,uVar2,lVar1);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e9288 == 0) {
        lVar1 = func_0x000140291580(local_68,0);
        return lVar1;
      }
      lVar1 = func_0x000140291580(local_64,0);
      return lVar1;
    }
    if (DAT_1404e9288 == 0) {
      lVar1 = func_0x000140291580(local_68,0);
      return lVar1;
    }
    lVar1 = func_0x00014028aff0(0x10);
    return lVar1;
  }
  if ((param_2 & 2) == 0) {
    FUN_1402b5d40(param_1,param_2,param_3,param_4);
    FUN_1402a6990(param_1,param_2,param_3,param_4);
    FUN_1402a5460(param_1,param_2,param_3,param_4);
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | param_2;
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (lVar1 == 0) {
      lVar1 = param_1 + 0x60;
    }
    if (*(longlong *)(param_3 + 0x28) != lVar1) {
      if (*(longlong *)(param_3 + 0x28) != 0) {
        lVar1 = func_0x0001402bf8e0();
        return lVar1;
      }
      *(undefined8 *)(param_3 + 0x28) = 0;
      if (lVar1 != 0) {
        lVar4 = -1;
        do {
          lVar3 = lVar4;
          lVar4 = lVar3 + 1;
        } while (*(char *)(lVar1 + lVar4) != '\0');
        lVar3 = lVar3 + 2;
        lVar4 = thunk_FUN_1402da070(lVar3);
        if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(lVar4,lVar1,lVar3);
        }
        *(undefined8 *)(param_3 + 0x28) = 0;
      }
    }
    return param_3;
  }
  if (param_4 != 0) {
    if (DAT_1404e9190 == 0) {
      lVar1 = func_0x000140291580(local_64,0);
      return lVar1;
    }
    lVar1 = func_0x000140291580(local_68,0);
    return lVar1;
  }
  if (DAT_1404e9190 == 0) {
    lVar1 = func_0x000140291580(local_64,0);
    return lVar1;
  }
  lVar1 = func_0x00014028aff0(0x10);
  return lVar1;
}

