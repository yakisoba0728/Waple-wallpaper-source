// Function: FUN_140290bf0
// Addr: 140290bf0
// Size: 307 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_140290bf0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38 [6];
  
  puVar3 = auStack_68;
  local_38[4] = DAT_1404dc040 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_4 + lVar4) != '\0');
  local_48 = param_1;
  FUN_140017480(local_38,param_4);
  local_48 = (undefined8 *)CONCAT44(local_48._4_4_,param_2);
  local_40 = param_3;
  FUN_140015b40(param_1,&local_48,local_38);
  if (0xf < (ulonglong)local_38[3]) {
    if (DAT_140472230 != '\0') {
      uVar6 = local_38[3] + 1U + local_38[0];
      uVar7 = local_38[2] + 1 + local_38[0];
      uVar2 = uVar6 + 7 & 0xfffffffffffffff8;
      uVar5 = uVar2;
      if (uVar7 <= uVar2) {
        uVar5 = uVar7;
      }
      if (uVar2 < uVar6) {
        uVar6 = uVar2;
      }
      _guard_check_icall(local_38[0],uVar2,uVar5,uVar6);
    }
    lVar4 = local_38[0];
    puVar3 = auStack_68;
    if ((0xfff < local_38[3] + 1U) &&
       (lVar4 = *(longlong *)(local_38[0] + -8), puVar3 = auStack_68,
       0x1f < (local_38[0] - lVar4) - 8U)) {
      pcVar1 = (code *)swi(0x29);
      lVar4 = (*pcVar1)(5);
      puVar3 = auStack_60;
    }
    *(undefined8 *)(puVar3 + -8) = 0x140290cf6;
    thunk_FUN_14028af80(lVar4);
  }
  *param_1 = std::system_error::vftable;
  *(undefined8 *)(puVar3 + -8) = 0x140290d10;
  return param_1;
}

