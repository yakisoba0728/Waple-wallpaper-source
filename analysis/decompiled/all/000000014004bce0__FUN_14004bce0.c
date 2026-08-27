// Function: FUN_14004bce0
// Addr: 14004bce0
// Size: 533 bytes


longlong * FUN_14004bce0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  
  plVar5 = (longlong *)0x0;
  FUN_1402914b0(local_res10,0);
  plVar2 = DAT_1404e8f48;
  if (DAT_1404e90c0 == 0) {
    FUN_1402914b0(local_res8,0);
    if (DAT_1404e90c0 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e90c0 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550(local_res8);
  }
  uVar3 = DAT_1404e90c0;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_1404e90c0 * 8;
  if ((DAT_1404e90c0 < *(ulonglong *)(lVar4 + 0x18)) &&
     (plVar5 = *(longlong **)(lVar1 + *(longlong *)(lVar4 + 0x10)), plVar5 != (longlong *)0x0))
  goto LAB_14004bd79;
  if (*(char *)(lVar4 + 0x24) == '\0') {
LAB_14004bdb8:
    if (plVar5 != (longlong *)0x0) goto LAB_14004bd79;
  }
  else {
    lVar4 = FUN_1402916f0();
    if (uVar3 < *(ulonglong *)(lVar4 + 0x18)) {
      plVar5 = *(longlong **)(lVar1 + *(longlong *)(lVar4 + 0x10));
      goto LAB_14004bdb8;
    }
  }
  plVar5 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_14028af20(0x10);
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
      puVar6 = &DAT_140474480;
    }
    else {
      puVar6 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1402914b0(local_98,0);
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c370("bad locale name");
    }
    FUN_1402917f0(local_98,puVar6);
    *(undefined4 *)(plVar5 + 1) = 0;
    *plVar5 = (longlong)std::codecvt<char,char,_Mbstatet>::vftable;
    FUN_1402918b0(local_98);
    if (local_40 != 0) {
      thunk_FUN_1402d9040();
    }
    local_40 = 0;
    if (local_50 != 0) {
      thunk_FUN_1402d9040();
    }
    local_50 = 0;
    if (local_60 != 0) {
      thunk_FUN_1402d9040();
    }
    local_60 = 0;
    if (local_70 != 0) {
      thunk_FUN_1402d9040();
    }
    local_70 = 0;
    if (local_80 != 0) {
      thunk_FUN_1402d9040();
    }
    local_80 = 0;
    if (local_90 != 0) {
      thunk_FUN_1402d9040();
    }
    local_90 = 0;
    FUN_140291550(local_98);
    FUN_1402916b0(plVar5);
    (**(code **)(*plVar5 + 8))(plVar5);
    DAT_1404e8f48 = plVar5;
  }
LAB_14004bd79:
  FUN_140291550(local_res10);
  return plVar5;
}

