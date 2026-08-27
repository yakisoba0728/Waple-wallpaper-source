// Function: FUN_1402eb448
// Addr: 1402eb448
// Size: 339 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1402eb448(undefined1 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_78;
  puVar6 = (undefined2 *)*param_2;
  local_58 = param_5;
  puVar4 = param_1;
  puVar7 = puVar6;
  local_50 = param_4;
  if (param_1 == (undefined1 *)0x0) {
    lVar5 = 0;
    lVar3 = FUN_1402db318(local_48,*puVar6,param_4,param_5);
    uVar1 = local_58;
    if (lVar3 != -1) {
      do {
        if ((lVar3 != 0) && (local_48[lVar3 + -1] == '\0')) {
          return lVar3 + -1 + lVar5;
        }
        puVar6 = puVar6 + 1;
        lVar5 = lVar5 + lVar3;
        lVar3 = FUN_1402db318(local_48,*puVar6,param_4,uVar1);
      } while (lVar3 != -1);
      lVar3 = -1;
    }
    return lVar3;
  }
  do {
    puVar8 = local_48;
    if (3 < param_3) {
      puVar8 = puVar4;
    }
    uVar2 = FUN_1402db318(puVar8,*puVar7,local_50,local_58);
    if (uVar2 == 0xffffffffffffffff) {
      *param_2 = puVar6;
      return -1;
    }
    if (puVar8 != puVar4) {
      if (param_3 < uVar2) goto LAB_1402eb50e;
      FUN_1404210f0(puVar4,puVar8,uVar2);
    }
    if (uVar2 != 0) {
      if (puVar4[uVar2 - 1] == '\0') {
        puVar6 = (undefined2 *)0x0;
        puVar4 = puVar4 + (uVar2 - 1);
LAB_1402eb50e:
        *param_2 = puVar6;
        return (longlong)puVar4 - (longlong)param_1;
      }
      puVar6 = puVar7 + 1;
    }
    param_3 = param_3 - uVar2;
    puVar4 = puVar4 + uVar2;
    puVar7 = puVar7 + 1;
  } while( true );
}

