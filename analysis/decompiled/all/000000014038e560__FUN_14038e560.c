// Function: FUN_14038e560
// Addr: 14038e560
// Size: 152 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14038e560(longlong param_1,uint param_2,longlong param_3,code *param_4,undefined8 param_5)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [6];
  ulonglong local_30;
  
  local_30 = DAT_1404dc040 ^ (ulonglong)auStack_68;
  if (param_2 == *(uint *)(param_1 + 0x18)) {
    uVar5 = 1;
    if (1 < param_2) {
      do {
        local_48[0] = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + uVar5 * 4);
        uVar2 = (ulonglong)((int)uVar5 - 1);
        cVar1 = (*param_4)(local_48,(uint)*(byte *)(param_3 + uVar2 * 2) * 0x100 +
                                    (uint)*(byte *)(param_3 + 1 + uVar2 * 2),param_5);
        if (cVar1 == '\0') goto LAB_14038e5d8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while (uVar4 < param_2);
    }
    uVar3 = 1;
  }
  else {
LAB_14038e5d8:
    uVar3 = 0;
  }
  return uVar3;
}

