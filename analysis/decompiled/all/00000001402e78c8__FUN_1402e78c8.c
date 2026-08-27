// Function: FUN_1402e78c8
// Addr: 1402e78c8
// Size: 831 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1402e78c8(longlong param_1,ushort *param_2,ulonglong param_3,longlong param_4)

{
  char cVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  int iVar5;
  DWORD DVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  int *local_80;
  int local_78 [2];
  ushort *local_70;
  undefined8 local_68;
  char local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_b8;
  uVar7 = 0;
  local_78[0] = 0;
  if ((param_1 != 0) && (param_3 == 0)) {
    return 0;
  }
  local_70 = param_2;
  if (param_2 == (ushort *)0x0) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 0x16;
    local_98 = (char *)0x0;
    local_90 = param_4;
    FUN_1402cacd4(0,0,0,0);
    return 0xffffffffffffffff;
  }
  if (*(char *)(param_4 + 0x28) == '\0') {
    FUN_1402c0d90(param_4);
  }
  lVar3 = *(longlong *)(param_4 + 0x18);
  iVar5 = *(int *)(lVar3 + 0xc);
  if (iVar5 == 0xfde9) {
    local_68 = 0;
    local_98 = (char *)param_4;
    uVar7 = FUN_1402eb448(param_1,&local_70,param_3,&local_68);
    return uVar7;
  }
  if (param_1 == 0) {
    if (*(longlong *)(lVar3 + 0x138) != 0) {
      local_80 = local_78;
      local_88 = 0;
      local_90 = (ulonglong)local_90._4_4_ << 0x20;
      local_98 = (char *)0x0;
      iVar5 = FUN_1402dcc08(iVar5,0,local_70,0xffffffff);
      if (((longlong)iVar5 != 0) && (local_78[0] == 0)) {
        return (longlong)iVar5 - 1;
      }
LAB_1402e7bdc:
      *(undefined4 *)(param_4 + 0x2c) = 0x2a;
      *(undefined1 *)(param_4 + 0x30) = 1;
      return 0xffffffffffffffff;
    }
    uVar2 = *local_70;
    while( true ) {
      if (uVar2 == 0) {
        return uVar7;
      }
      if (0xff < uVar2) break;
      local_70 = local_70 + 1;
      uVar7 = uVar7 + 1;
      uVar2 = *local_70;
    }
  }
  else if (*(longlong *)(lVar3 + 0x138) == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while (*local_70 < 0x100) {
      *(char *)(param_1 + uVar7) = (char)*local_70;
      uVar2 = *local_70;
      local_70 = local_70 + 1;
      if (uVar2 == 0) {
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      if (param_3 <= uVar7) {
        return uVar7;
      }
    }
  }
  else {
    uVar10 = param_3;
    puVar4 = local_70;
    local_98 = (char *)param_1;
    if (*(int *)(lVar3 + 8) != 1) {
      local_80 = local_78;
      local_88 = 0;
      local_90 = CONCAT44(local_90._4_4_,(int)param_3);
      iVar5 = FUN_1402dcc08(iVar5,0,local_70,0xffffffff);
      if (local_78[0] == 0) {
        if (iVar5 != 0) {
          return (longlong)iVar5 - 1;
        }
        DVar6 = GetLastError();
        if (DVar6 == 0x7a) {
          uVar10 = 0;
          if (param_3 == 0) {
            return 0;
          }
          while( true ) {
            local_80 = local_78;
            local_88 = 0;
            iVar5 = *(int *)(*(longlong *)(param_4 + 0x18) + 8);
            if (5 < iVar5) {
              iVar5 = 5;
            }
            local_90 = CONCAT44(local_90._4_4_,iVar5);
            local_98 = local_60;
            iVar5 = FUN_1402dcc08(*(undefined4 *)(*(longlong *)(param_4 + 0x18) + 0xc),0,local_70,1)
            ;
            if ((((iVar5 == 0) || (local_78[0] != 0)) || (iVar5 < 0)) ||
               (uVar9 = (ulonglong)iVar5, 5 < uVar9)) break;
            if (param_3 < uVar9 + uVar10) {
              return uVar10;
            }
            uVar8 = uVar7;
            if (0 < (longlong)uVar9) {
              do {
                cVar1 = local_60[uVar8];
                *(char *)(param_1 + uVar10) = cVar1;
                if (cVar1 == '\0') {
                  return uVar10;
                }
                uVar8 = uVar8 + 1;
                uVar10 = uVar10 + 1;
              } while ((longlong)uVar8 < (longlong)uVar9);
            }
            local_70 = local_70 + 1;
            if (param_3 <= uVar10) {
              return uVar10;
            }
          }
        }
      }
      goto LAB_1402e7bdc;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      if (*puVar4 == 0) {
        param_3 = ((longlong)puVar4 - (longlong)local_70 >> 1) + 1;
        break;
      }
      puVar4 = puVar4 + 1;
    }
    local_80 = local_78;
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,(int)param_3);
    iVar5 = FUN_1402dcc08(iVar5,0,local_70,param_3 & 0xffffffff);
    uVar7 = (ulonglong)iVar5;
    if ((iVar5 != 0) && (local_78[0] == 0)) {
      if (*(char *)(param_1 + -1 + uVar7) == '\0') {
        return uVar7 - 1;
      }
      return uVar7;
    }
  }
  *(undefined1 *)(param_4 + 0x30) = 1;
  *(undefined4 *)(param_4 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}

