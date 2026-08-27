// Function: FUN_1402d3620
// Addr: 1402d3620
// Size: 507 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1402d3620(undefined8 param_1,short *param_2)

{
  short sVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  longlong local_a0 [2];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  FUN_1404217a0(param_1,0,0x1ca);
  uVar9 = 0;
  plVar8 = local_a0;
  uVar7 = uVar9;
  uVar10 = uVar9;
  do {
    while( true ) {
      do {
        uVar6 = uVar7;
        if (3 < uVar6) {
          return 0;
        }
        if ((int)uVar10 == 2) {
          lVar4 = -1;
          do {
            lVar4 = lVar4 + 1;
          } while (param_2[lVar4] != 0);
        }
        else {
          lVar4 = FUN_1402e5710(param_2,&DAT_14042e9e0);
        }
        plVar8[-1] = (longlong)param_2;
        uVar7 = uVar6 + 1;
        *plVar8 = lVar4;
        sVar1 = param_2[lVar4];
        param_2 = param_2 + lVar4 + 1;
        *(int *)(plVar8 + 1) = (int)uVar10;
        plVar8 = plVar8 + 3;
        if (sVar1 == 0) goto LAB_1402d36d2;
        uVar10 = uVar9;
      } while (sVar1 == 0x2d);
      if (sVar1 != 0x2e) break;
      uVar10 = 2;
    }
  } while (sVar1 == 0x5f);
LAB_1402d36d2:
  if (uVar6 == 0) {
    uVar3 = FUN_1402d3864(param_1,local_a8);
    return uVar3;
  }
  if (uVar6 == 1) {
    cVar2 = FUN_1402d3864(param_1,local_a8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1402d39e4(param_1,local_90);
    if (cVar2 != '\0') {
      return 1;
    }
    cVar2 = FUN_1402d38f0(param_1,local_90);
    if (cVar2 != '\0') {
      return 1;
    }
    puVar5 = local_90;
  }
  else if (uVar6 == 2) {
    cVar2 = FUN_1402d3864(param_1,local_a8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1402d39e4(param_1,local_90);
    if (cVar2 != '\0') {
      cVar2 = FUN_1402d38f0(param_1,local_78);
      if (cVar2 != '\0') {
        return 1;
      }
      cVar2 = FUN_1402d381c(param_1,local_78);
      if (cVar2 != '\0') {
        return 1;
      }
    }
    cVar2 = FUN_1402d38f0(param_1,local_90);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar5 = local_78;
  }
  else {
    if (uVar6 != 3) {
      return 0;
    }
    cVar2 = FUN_1402d3864(param_1,local_a8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1402d39e4(param_1,local_90);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = FUN_1402d38f0(param_1,local_78);
    if (cVar2 == '\0') {
      return 0;
    }
    puVar5 = local_60;
  }
  cVar2 = FUN_1402d381c(param_1,puVar5);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}

