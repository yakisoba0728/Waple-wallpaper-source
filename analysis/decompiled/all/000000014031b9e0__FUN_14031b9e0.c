// Function: FUN_14031b9e0
// Addr: 14031b9e0
// Size: 444 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14031b9e0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_158 [32];
  int local_138 [4];
  undefined1 local_128 [208];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_158;
  puVar4 = (undefined8 *)0x0;
  local_138[0] = 0;
  puVar3 = (undefined8 *)(*(undefined8 **)(*param_1 + 0x3e0))[0x21a];
  lVar2 = FUN_1402f0420(**(undefined8 **)(*param_1 + 0x3e0),"pshinter");
  if (((lVar2 == 0) || (puVar3 == (undefined8 *)0x0)) ||
     (pcVar1 = (code *)*puVar3, pcVar1 == (code *)0x0)) {
    puVar4 = (undefined8 *)0x0;
    uVar5 = *(undefined8 *)(*param_1 + 0x98);
    lVar2 = *(longlong *)(*param_1 + 0x3e0);
  }
  else {
    puVar3 = (undefined8 *)(*pcVar1)(lVar2);
    uVar5 = *(undefined8 *)(*param_1 + 0x98);
    lVar2 = *(longlong *)(*param_1 + 0x3e0);
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_1402f7e90(uVar5,0x808,local_138);
      if (local_138[0] != 0) goto LAB_14031bb30;
      FUN_14031fb30(lVar2 + 0x5e0,local_128);
      local_138[0] = (*(code *)*puVar3)(uVar5,local_128,puVar4);
      if (local_138[0] == 0) {
        uVar6 = *(uint *)(lVar2 + 0x8a8);
        uVar7 = (ulonglong)uVar6;
        do {
          if (uVar6 == 0) {
            *(undefined8 **)param_1[7] = puVar4;
            *(undefined4 *)(param_1 + 8) = 0xffffffff;
            break;
          }
          local_138[0] = 0;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          FUN_14031fb30(*(undefined8 *)(lVar2 + 0x8b0 + uVar7 * 8),local_128);
          local_138[0] = (*(code *)*puVar3)(uVar5,local_128,puVar4 + uVar7 + 1);
        } while (local_138[0] == 0);
      }
    }
  }
  if (local_138[0] == 0) {
    return 0;
  }
LAB_14031bb30:
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = *(uint *)(lVar2 + 0x8a8);
    uVar7 = (ulonglong)uVar6;
    while (uVar6 != 0) {
      uVar6 = (int)uVar7 - 1;
      uVar7 = (ulonglong)uVar6;
      FUN_1402f7f90(uVar5,puVar4[uVar7 + 1]);
      puVar4[uVar7 + 1] = 0;
    }
    FUN_1402f7f90(uVar5,*puVar4);
    *puVar4 = 0;
  }
  FUN_1402f7f90(uVar5,puVar4);
  return local_138[0];
}

