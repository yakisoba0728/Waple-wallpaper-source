// Function: FUN_1402afc70
// Addr: 1402afc70
// Size: 146 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402afc70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 ***pppuVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  undefined8 **local_38 [2];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_58;
  FUN_1402b2290(param_1,local_38,param_2,param_3);
  uVar4 = 0x84222325;
  pppuVar3 = local_38;
  if (7 < local_20) {
    pppuVar3 = (undefined8 ***)local_38[0];
  }
  uVar2 = 0;
  if (local_28 * 2 != 0) {
    do {
      pbVar1 = (byte *)((longlong)pppuVar3 + uVar2);
      uVar2 = uVar2 + 1;
      uVar4 = (uVar4 ^ *pbVar1) * 0x1b3;
    } while (uVar2 < (ulonglong)(local_28 * 2));
  }
  FUN_140016770(local_38);
  return uVar4;
}

