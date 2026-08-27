// Function: FUN_14028f260
// Addr: 14028f260
// Size: 392 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14028f260(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_258;
  do {
    while( true ) {
      uVar3 = param_2 - param_1;
      uVar1 = param_3 - param_2;
      if (uVar1 < uVar3) break;
      if (uVar3 == 0) {
        return;
      }
      if ((uVar3 < 0x201) && ((uVar3 < 0x81 || (uVar3 * 2 <= uVar1)))) {
        FUN_1404210f0(local_238,param_1,uVar3);
        FUN_1404210f0(param_1,param_2,uVar1);
        param_1 = uVar1 + param_1;
        uVar1 = uVar3;
LAB_14028f3b7:
        FUN_1404210f0(param_1,local_238,uVar1);
        return;
      }
      lVar2 = param_3 - uVar3;
      if (uVar1 < uVar3 * 2) {
        FUN_14028f410();
        param_3 = lVar2;
      }
      else {
        FUN_14028ec00(lVar2,param_3,param_1,lVar2 - uVar3);
        param_3 = lVar2 - uVar3;
      }
    }
    if (uVar1 == 0) {
      return;
    }
    if ((uVar1 < 0x201) && ((uVar1 < 0x81 || (uVar1 * 2 <= uVar3)))) {
      FUN_1404210f0(local_238,param_2,uVar1);
      FUN_1404210f0(uVar1 + param_1,param_1,uVar3);
      goto LAB_14028f3b7;
    }
    if (uVar3 < uVar1 * 2) {
      FUN_14028f410(param_2,param_3,param_1);
      param_1 = uVar1 + param_1;
    }
    else {
      FUN_14028ec00(param_2,param_3,uVar1 + param_1,param_1);
      param_1 = param_1 + uVar1 * 2;
    }
  } while( true );
}

