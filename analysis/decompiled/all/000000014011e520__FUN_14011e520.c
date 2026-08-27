// Function: FUN_14011e520
// Addr: 14011e520
// Size: 851 bytes


undefined8 FUN_14011e520(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 ***local_78 [2];
  size_t local_68;
  ulonglong local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined1 local_38 [32];
  
  plVar5 = (longlong *)FUN_140005880(local_78,param_1);
  local_58 = *plVar5;
  lStack_50 = plVar5[1];
  local_48 = plVar5[2];
  uStack_40 = plVar5[3];
  plVar5[2] = 0;
  plVar5[3] = 7;
  *(undefined2 *)plVar5 = 0;
  if (7 < local_60) {
    uVar10 = local_60 * 2 + 2;
    ppppuVar9 = (undefined8 ****)local_78[0];
    if (0xfff < uVar10) {
      ppppuVar9 = (undefined8 ****)local_78[0][-1];
      if (0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)ppppuVar9)))
      goto LAB_14011e86b;
      uVar10 = local_60 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar10);
  }
  uVar6 = FUN_140053f80(&local_58,local_38);
  FUN_140018ce0(uVar6,local_78);
  FUN_140016770(local_38);
  if (7 < uStack_40) {
    uVar10 = uStack_40 * 2 + 2;
    lVar8 = local_58;
    if (0xfff < uVar10) {
      lVar8 = *(longlong *)(local_58 + -8);
      if (0x1f < (local_58 - lVar8) - 8U) goto LAB_14011e86b;
      uVar10 = uStack_40 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar8,uVar10);
  }
  iVar11 = 0;
  do {
    pcVar1 = (&PTR_s__json_140483850)[iVar11];
    sVar7 = strlen(pcVar1);
    ppppuVar9 = local_78;
    if (0xf < local_60) {
      ppppuVar9 = (undefined8 ****)local_78[0];
    }
    if (local_68 == sVar7) {
      if (local_68 != 0) {
        iVar4 = memcmp(ppppuVar9,pcVar1,local_68);
        if (iVar4 != 0) goto LAB_14011e6b1;
      }
      uVar6 = 1;
      goto LAB_14011e802;
    }
LAB_14011e6b1:
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  iVar11 = 0;
  do {
    pcVar1 = (&PTR_s__html_1404837d0)[iVar11];
    sVar7 = strlen(pcVar1);
    ppppuVar9 = local_78;
    if (0xf < local_60) {
      ppppuVar9 = (undefined8 ****)local_78[0];
    }
    if (local_68 == sVar7) {
      if (local_68 == 0) goto LAB_14011e79e;
      iVar4 = memcmp(ppppuVar9,pcVar1,local_68);
      if (iVar4 == 0) goto LAB_14011e79e;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 1);
  iVar11 = 0;
  do {
    pcVar1 = (&PTR_DAT_1404837c0)[iVar11];
    sVar7 = strlen(pcVar1);
    ppppuVar9 = local_78;
    if (0xf < local_60) {
      ppppuVar9 = (undefined8 ****)local_78[0];
    }
    if (local_68 == sVar7) {
      if (local_68 != 0) {
        iVar4 = memcmp(ppppuVar9,pcVar1,local_68);
        if (iVar4 != 0) goto LAB_14011e749;
      }
      uVar6 = 3;
      goto LAB_14011e802;
    }
LAB_14011e749:
    iVar11 = iVar11 + 1;
  } while (iVar11 < 1);
  iVar11 = 0;
  do {
    pcVar1 = (&PTR_DAT_140483810)[iVar11];
    sVar7 = strlen(pcVar1);
    ppppuVar9 = local_78;
    if (0xf < local_60) {
      ppppuVar9 = (undefined8 ****)local_78[0];
    }
    if (local_68 == sVar7) {
      if (local_68 != 0) {
        iVar4 = memcmp(ppppuVar9,pcVar1,local_68);
        if (iVar4 != 0) goto LAB_14011e78b;
      }
      uVar6 = 4;
      goto LAB_14011e802;
    }
LAB_14011e78b:
    iVar11 = iVar11 + 1;
  } while (iVar11 < 7);
  cVar3 = FUN_140018980(param_1);
  if (cVar3 == '\0') {
    iVar11 = 0;
    do {
      pcVar1 = (&PTR_DAT_1404837e0)[iVar11];
      sVar7 = strlen(pcVar1);
      ppppuVar9 = local_78;
      if (0xf < local_60) {
        ppppuVar9 = (undefined8 ****)local_78[0];
      }
      if (local_68 == sVar7) {
        if (local_68 != 0) {
          iVar4 = memcmp(ppppuVar9,pcVar1,local_68);
          if (iVar4 != 0) goto LAB_14011e7f9;
        }
        uVar6 = 5;
        goto LAB_14011e802;
      }
LAB_14011e7f9:
      iVar11 = iVar11 + 1;
    } while (iVar11 < 5);
    uVar6 = 0;
  }
  else {
LAB_14011e79e:
    uVar6 = 2;
  }
LAB_14011e802:
  if (0xf < local_60) {
    uVar10 = local_60 + 1;
    ppppuVar9 = (undefined8 ****)local_78[0];
    if (0xfff < uVar10) {
      ppppuVar9 = (undefined8 ****)local_78[0][-1];
      if (0x1f < (ulonglong)((longlong)local_78[0] + (-8 - (longlong)ppppuVar9))) {
LAB_14011e86b:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return uVar6;
      }
      uVar10 = local_60 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar10);
  }
  return uVar6;
}

