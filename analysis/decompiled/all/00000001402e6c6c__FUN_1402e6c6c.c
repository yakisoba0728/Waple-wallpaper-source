// Function: FUN_1402e6c6c
// Addr: 1402e6c6c
// Size: 264 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402e6c6c(undefined8 param_1)

{
  uint *puVar1;
  LCID Locale;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_128 [32];
  WCHAR local_108 [120];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_128;
  lVar3 = FUN_1402d9894();
  lVar4 = FUN_1402d9894();
  puVar1 = *(uint **)(lVar4 + 0x3a0);
  Locale = FUN_1402e6d74(param_1);
  iVar2 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_108,0x78);
  if (iVar2 == 0) {
    *puVar1 = 0;
    return 1;
  }
  iVar2 = FUN_1402c12c0(*(undefined8 *)(lVar3 + 0x98),local_108);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xb0) == 0) {
      uVar5 = 1;
      goto LAB_1402e6d2e;
    }
  }
  else {
    if (((*(int *)(lVar3 + 0xb0) != 0) || (*(int *)(lVar3 + 0xac) == 0)) ||
       (iVar2 = FUN_1402c12c0(*(undefined8 *)(lVar3 + 0x98),local_108), iVar2 != 0))
    goto LAB_1402e6d45;
    uVar5 = 0;
LAB_1402e6d2e:
    iVar2 = FUN_1402e6e78(Locale,uVar5,puVar1);
    if (iVar2 == 0) goto LAB_1402e6d45;
  }
  *puVar1 = *puVar1 | 4;
  puVar1[1] = Locale;
  puVar1[2] = Locale;
LAB_1402e6d45:
  return ~(*puVar1 >> 2) & 1;
}

