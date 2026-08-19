// Function: FUN_1402dcf48
// Addr: 1402dcf48
// Size: 519 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402dcf48(uint param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  undefined4 local_res10;
  longlong *plVar10;
  
  plVar10 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1402dcf9f:
    if (param_1 == 2) {
      puVar8 = (ulonglong *)&DAT_1404e4e30;
    }
    else if (param_1 == 6) {
LAB_1402dd041:
      puVar8 = &DAT_1404e4e40;
      plVar9 = plVar10;
    }
    else if (param_1 == 0xf) {
      puVar8 = (ulonglong *)&DAT_1404e4e48;
    }
    else if (param_1 == 0x15) {
      puVar8 = (ulonglong *)&DAT_1404e4e38;
      plVar9 = plVar10;
    }
    else {
      if (param_1 == 0x16) goto LAB_1402dd041;
      puVar8 = (ulonglong *)0x0;
      plVar9 = plVar10;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1402dcfcf;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_1402dd021;
      }
      goto LAB_1402dcf9f;
    }
LAB_1402dcfcf:
    plVar9 = (longlong *)func_0x0001402d99c4();
    if (plVar9 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar3 = *plVar9;
    lVar2 = DAT_14042e730 * 0x10 + lVar3;
    for (; lVar3 != lVar2; lVar3 = lVar3 + 0x10) {
      if (*(uint *)(lVar3 + 4) == param_1) goto LAB_1402dd01c;
    }
    lVar3 = 0;
LAB_1402dd01c:
    if (lVar3 == 0) {
LAB_1402dd021:
                    /* WARNING: Subroutine does not return */
      FUN_1402cb004();
    }
    puVar8 = (ulonglong *)(lVar3 + 8);
    bVar1 = false;
  }
  lVar3 = 0;
  if (bVar1) {
    FUN_1402d6370(3);
  }
  uVar7 = *puVar8;
  if (bVar1) {
    bVar5 = (byte)DAT_1404dc110 & 0x3f;
    uVar7 = (uVar7 ^ DAT_1404dc110) >> bVar5 | (uVar7 ^ DAT_1404dc110) << 0x40 - bVar5;
  }
  if (uVar7 == 1) goto LAB_1402dd12a;
  if (uVar7 == 0) {
    if (bVar1) {
      __acrt_unlock(3);
    }
    uVar4 = func_0x0001402d106c(3);
    return uVar4;
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar3 = plVar9[1];
    plVar9[1] = 0;
    if (param_1 == 8) {
      lVar2 = FUN_1402d9964();
      local_res10 = *(undefined4 *)(lVar2 + 0x10);
      lVar2 = FUN_1402d9964();
      *(undefined4 *)(lVar2 + 0x10) = 0x8c;
      goto UNWIND_INFO_1402dd0d4_FunctionUnwindInfoAddress_2;
    }
  }
  else {
UNWIND_INFO_1402dd0d4_FunctionUnwindInfoAddress_2:
    if (param_1 == 8) {
      lVar2 = _UNK_14042e738 * 0x10 + *plVar9;
      lVar6 = _UNK_14042e740 * 0x10 + lVar2;
      for (; lVar2 != lVar6; lVar2 = lVar2 + 0x10) {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
      goto LAB_1402dd12a;
    }
  }
  *puVar8 = DAT_1404dc110;
LAB_1402dd12a:
  if (bVar1) {
    __acrt_unlock(3);
  }
  if (uVar7 != 1) {
    if (param_1 == 8) {
      lVar2 = FUN_1402d9964();
      thunk_FUN_140420d40(8,*(undefined4 *)(lVar2 + 0x10));
    }
    else {
      thunk_FUN_140420d40(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar9[1] = lVar3, param_1 == 8)) {
      lVar3 = FUN_1402d9964();
      *(undefined4 *)(lVar3 + 0x10) = local_res10;
    }
  }
  return 0;
}

