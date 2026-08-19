// Function: FUN_1402ca24c
// Addr: 1402ca24c
// Size: 10 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1402ca24c(undefined8 param_1,undefined4 param_2,longlong param_3,undefined8 param_4,
                      undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 auStackX_18 [2];
  
  if (param_3 != 0) {
    lVar2 = func_0x0001402ca1e8(param_3,param_4);
    lVar3 = 0;
    if (lVar2 != 0) {
      auStackX_18[0] = 0;
      lVar3 = (*_UNK_1404264f8)(param_1,param_2,0x1402ca11c,lVar2,param_5,auStackX_18);
      if (lVar3 == 0) {
        uVar1 = (*DAT_1404266a8)();
        FUN_1402caf94(uVar1);
        if (*(longlong *)(lVar2 + 0x10) != 0) {
          (*DAT_140426368)();
        }
        if (*(longlong *)(lVar2 + 0x18) != 0) {
          (*DAT_140426728)();
        }
        FUN_1402d9110(lVar2);
        lVar3 = 0;
      }
      else if (param_6 != (undefined4 *)0x0) {
        *param_6 = auStackX_18[0];
      }
    }
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

