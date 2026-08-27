// Function: FUN_14029d730
// Addr: 14029d730
// Size: 277 bytes


longlong FUN_14029d730(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  FUN_1402914b0(local_res10,0);
  lVar4 = DAT_1404e4288;
  local_res18 = DAT_1404e4288;
  if (DAT_1404e41d8 == 0) {
    FUN_1402914b0(&local_res8,0);
    if (DAT_1404e41d8 == 0) {
      DAT_1404e3c90 = DAT_1404e3c90 + 1;
      DAT_1404e41d8 = (ulonglong)DAT_1404e3c90;
    }
    FUN_140291550();
  }
  uVar2 = DAT_1404e41d8;
  lVar3 = *(longlong *)(param_1 + 8);
  lVar1 = DAT_1404e41d8 * 8;
  if (DAT_1404e41d8 < *(ulonglong *)(lVar3 + 0x18)) {
    lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
    if (lVar5 != 0) goto LAB_14029d7c3;
  }
  else {
    lVar5 = 0;
  }
  if (*(char *)(lVar3 + 0x24) == '\0') {
LAB_14029d7f8:
    if (lVar5 != 0) goto LAB_14029d7c3;
  }
  else {
    lVar3 = FUN_1402916f0();
    if (uVar2 < *(ulonglong *)(lVar3 + 0x18)) {
      lVar5 = *(longlong *)(lVar1 + *(longlong *)(lVar3 + 0x10));
      goto LAB_14029d7f8;
    }
  }
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar4 = FUN_1402a0200(&local_res18,param_1);
    lVar5 = local_res18;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_140292650();
    }
    lVar4 = local_res18;
    local_res8 = local_res18;
    FUN_1402916b0(local_res18);
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5);
    DAT_1404e4288 = lVar4;
  }
LAB_14029d7c3:
  FUN_140291550(local_res10);
  return lVar5;
}

