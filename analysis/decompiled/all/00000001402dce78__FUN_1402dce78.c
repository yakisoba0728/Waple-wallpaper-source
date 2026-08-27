// Function: FUN_1402dce78
// Addr: 1402dce78
// Size: 602 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402dce78(uint param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined4 local_res10;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1402dcecf:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_1404e4d60;
    }
    else if (param_1 == 6) {
LAB_1402dcf71:
      puVar8 = &DAT_1404e4d70;
      plVar9 = plVar10;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_1404e4d78;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_1404e4d68;
      plVar9 = plVar10;
    }
    else {
      if (param_1 == 0x16) goto LAB_1402dcf71;
      puVar8 = (ulonglong *)0x0;
      plVar9 = plVar10;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1402dceff;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1402dcf51;
      }
      goto LAB_1402dcecf;
    }
LAB_1402dceff:
    plVar9 = (longlong *)FUN_1402d98f4();
    if (plVar9 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar4 = *plVar9;
    lVar3 = DAT_14042e660 * 0x10 + lVar4;
    for (; lVar4 != lVar3; lVar4 = lVar4 + 0x10) {
      if (*(uint *)(lVar4 + 4) == param_1) goto LAB_1402dcf4c;
    }
    lVar4 = 0;
LAB_1402dcf4c:
    if (lVar4 == 0) {
LAB_1402dcf51:
      puVar2 = (undefined4 *)FUN_1402caf34();
      *puVar2 = 0x16;
      FUN_1402cad8c();
      return 0xffffffff;
    }
    puVar8 = (ulonglong *)(lVar4 + 8);
    bVar1 = false;
  }
  lVar4 = 0;
  if (bVar1) {
    __acrt_lock(3);
  }
  pcVar7 = (code *)*puVar8;
  if (bVar1) {
    bVar5 = (byte)DAT_1404dc040 & 0x3f;
    pcVar7 = (code *)(((ulonglong)pcVar7 ^ DAT_1404dc040) >> bVar5 |
                     ((ulonglong)pcVar7 ^ DAT_1404dc040) << 0x40 - bVar5);
  }
  if (pcVar7 == (code *)0x1) goto LAB_1402dd05a;
  if (pcVar7 == (code *)0x0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402d0f9c(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar4 = plVar9[1];
    plVar9[1] = 0;
    if (param_1 == 8) {
      lVar3 = FUN_1402d9894();
      local_res10 = *(undefined4 *)(lVar3 + 0x10);
      lVar3 = FUN_1402d9894();
      *(undefined4 *)(lVar3 + 0x10) = 0x8c;
      goto LAB_1402dd012;
    }
  }
  else {
LAB_1402dd012:
    if (param_1 == 8) {
      lVar3 = DAT_14042e668 * 0x10 + *plVar9;
      lVar6 = DAT_14042e670 * 0x10 + lVar3;
      for (; lVar3 != lVar6; lVar3 = lVar3 + 0x10) {
        *(undefined8 *)(lVar3 + 8) = 0;
      }
      goto LAB_1402dd05a;
    }
  }
  *puVar8 = DAT_1404dc040;
LAB_1402dd05a:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (pcVar7 != (code *)0x1) {
    if (param_1 == 8) {
      lVar3 = FUN_1402d9894();
      (*pcVar7)(8,*(undefined4 *)(lVar3 + 0x10));
    }
    else {
      (*pcVar7)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar9[1] = lVar4, param_1 == 8)) {
      lVar4 = FUN_1402d9894();
      *(undefined4 *)(lVar4 + 0x10) = local_res10;
    }
  }
  return 0;
}

