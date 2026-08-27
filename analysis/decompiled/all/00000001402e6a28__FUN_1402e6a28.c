// Function: FUN_1402e6a28
// Addr: 1402e6a28
// Size: 579 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402e6a28(undefined8 param_1)

{
  longlong *plVar1;
  uint *puVar2;
  LCID Locale;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_138 [32];
  WCHAR local_118 [120];
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_138;
  lVar4 = FUN_1402d9894();
  plVar1 = (longlong *)(lVar4 + 0x98);
  lVar5 = FUN_1402d9894();
  puVar2 = *(uint **)(lVar5 + 0x3a0);
  Locale = FUN_1402e6d74(param_1);
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb4) != 0) & 0xfffff005) + 0x1002,
                         local_118,0x78);
  if (iVar3 == 0) goto LAB_1402e6c3b;
  iVar3 = FUN_1402c12c0(*(undefined8 *)(lVar4 + 0xa0),local_118);
  lVar5 = -1;
  if (iVar3 == 0) {
    iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                           local_118,0x78);
    if (iVar3 == 0) goto LAB_1402e6c3b;
    iVar3 = FUN_1402c12c0(*plVar1,local_118);
    if (iVar3 == 0) {
      puVar2[1] = Locale;
      *puVar2 = *puVar2 | 0x304;
LAB_1402e6b6d:
      puVar2[2] = Locale;
    }
    else if ((*puVar2 & 2) == 0) {
      if ((*(int *)(lVar4 + 0xac) == 0) ||
         (iVar3 = FUN_1402cafd0(*plVar1,local_118,(longlong)*(int *)(lVar4 + 0xac)), iVar3 != 0)) {
        if ((*puVar2 & 1) == 0) {
          uVar8 = 0;
          psVar7 = &DAT_140431628;
          do {
            if ((short)Locale == *psVar7) goto LAB_1402e6b70;
            uVar8 = uVar8 + 1;
            psVar7 = psVar7 + 1;
          } while (uVar8 < 10);
          *puVar2 = *puVar2 | 1;
          goto LAB_1402e6b6d;
        }
      }
      else {
        *puVar2 = *puVar2 | 2;
        lVar6 = -1;
        puVar2[2] = Locale;
        do {
          lVar6 = lVar6 + 1;
        } while (*(short *)(*plVar1 + lVar6 * 2) != 0);
        if ((int)lVar6 == *(int *)(lVar4 + 0xac)) {
          puVar2[1] = Locale;
        }
      }
    }
  }
LAB_1402e6b70:
  if ((*puVar2 & 0x300) == 0x300) goto LAB_1402e6c2f;
  iVar3 = GetLocaleInfoW(Locale,(-(uint)(*(int *)(lVar4 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                         local_118,0x78);
  if (iVar3 == 0) {
LAB_1402e6c3b:
    *puVar2 = 0;
    return 1;
  }
  iVar3 = FUN_1402c12c0(*plVar1,local_118);
  if (iVar3 == 0) {
    uVar8 = *puVar2;
    *puVar2 = uVar8 | 0x200;
    if ((*(int *)(lVar4 + 0xb0) == 0) && (*(int *)(lVar4 + 0xac) != 0)) {
      do {
        lVar5 = lVar5 + 1;
      } while (*(short *)(*plVar1 + lVar5 * 2) != 0);
      if ((int)lVar5 == *(int *)(lVar4 + 0xac)) {
        uVar9 = 1;
        goto LAB_1402e6c14;
      }
    }
    *puVar2 = uVar8 | 0x300;
  }
  else {
    if (((*(int *)(lVar4 + 0xb0) != 0) || (*(int *)(lVar4 + 0xac) == 0)) ||
       (iVar3 = FUN_1402c12c0(*plVar1,local_118), iVar3 != 0)) goto LAB_1402e6c2f;
    uVar9 = 0;
LAB_1402e6c14:
    iVar3 = FUN_1402e6e78(Locale,uVar9,puVar2);
    if (iVar3 == 0) goto LAB_1402e6c2f;
    *puVar2 = *puVar2 | 0x100;
  }
  if (puVar2[1] == 0) {
    puVar2[1] = Locale;
  }
LAB_1402e6c2f:
  return ~(*puVar2 >> 2) & 1;
}

