// Function: FUN_1402e7470
// Addr: 1402e7470
// Size: 379 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1402e7470(__crt_locale_pointers *param_1,undefined8 param_2,undefined4 param_3,ulonglong param_4
             ,int param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_88 [64];
  undefined4 local_48 [2];
  longlong local_40;
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  puVar8 = auStack_88;
  puVar9 = auStack_88;
  local_20 = DAT_1404dc040 ^ (ulonglong)local_48;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
  uVar3 = *(undefined4 *)(local_38 + 0xc);
  iVar2 = FUN_1402dc1dc(param_2,param_3,0,0);
  if (iVar2 == 0) {
    uVar3 = 0;
    puVar9 = auStack_88;
    goto LAB_1402e75b2;
  }
  uVar6 = (longlong)iVar2 * 2 + 0x10;
  uVar6 = -(ulonglong)((ulonglong)((longlong)iVar2 * 2) < uVar6) & uVar6;
  if (uVar6 == 0) {
    puVar7 = (undefined4 *)0x0;
LAB_1402e759a:
    uVar3 = 0;
    if (puVar7 == (undefined4 *)0x0) goto LAB_1402e75b2;
  }
  else {
    if (uVar6 < 0x401) {
      uVar4 = uVar6 + 0xf;
      if (uVar4 <= uVar6) {
        uVar4 = 0xffffffffffffff0;
      }
      lVar1 = -(uVar4 & 0xfffffffffffffff0);
      puVar9 = auStack_88 + lVar1;
      puVar8 = auStack_88 + lVar1;
      puVar5 = (undefined4 *)((longlong)local_48 + lVar1);
      puVar7 = (undefined4 *)0x0;
      if (puVar5 == (undefined4 *)0x0) goto LAB_1402e759a;
      *puVar5 = 0xcccc;
LAB_1402e7541:
      puVar7 = puVar5 + 4;
      puVar9 = puVar8;
    }
    else {
      puVar5 = (undefined4 *)_malloc_base(uVar6);
      puVar7 = (undefined4 *)0x0;
      puVar9 = auStack_88;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_1402e7541;
      }
    }
    if (puVar7 == (undefined4 *)0x0) goto LAB_1402e759a;
    *(undefined8 *)(puVar9 + -8) = 0x1402e755a;
    iVar2 = FUN_1402dc1dc(param_2,param_3,puVar7,iVar2);
    if (iVar2 == 0) goto LAB_1402e759a;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(int *)(puVar9 + 0x28) = param_5;
    *(ulonglong *)(puVar9 + 0x20) = -(ulonglong)(param_5 != 0) & param_4;
    *(undefined8 *)(puVar9 + -8) = 0x1402e7594;
    uVar3 = FUN_1402dcc08(uVar3,0,puVar7,0xffffffff);
  }
  if (puVar7[-4] == 0xdddd) {
    *(undefined8 *)(puVar9 + -8) = 0x1402e75b2;
    FUN_1402d9040();
  }
LAB_1402e75b2:
  if (local_28 != '\0') {
    *(uint *)(local_40 + 0x3a8) = *(uint *)(local_40 + 0x3a8) & 0xfffffffd;
  }
  *(undefined8 *)(puVar9 + -8) = 0x1402e75d1;
  return uVar3;
}

