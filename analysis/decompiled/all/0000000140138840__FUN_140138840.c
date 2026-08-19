// Function: FUN_140138840
// Addr: 140138840
// Size: 191 bytes


undefined8 FUN_140138840(longlong param_1,undefined *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined *puVar11;
  bool bVar12;
  undefined8 ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 ***pppuStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  ulonglong uStack_40;
  undefined8 ***local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  ulonglong uStack_20;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  bVar12 = false;
  local_68 = 0;
  puVar11 = &DAT_140474608;
  if (param_2 != (undefined *)0x0) {
    puVar11 = param_2;
  }
  local_60 = 0;
  local_78 = (undefined8 ****)0x0;
  uStack_70 = 0;
  uVar5 = FUN_1402d6b70(puVar11);
  FUN_140016240(&local_78,puVar11,uVar5);
  ppppuVar7 = (undefined8 ****)pppuStack_58;
  uVar10 = uStack_40;
  if (*(longlong *)(lVar1 + 0x28) == 0) {
code_r0x0001401389bf:
    bVar3 = false;
  }
  else {
    bVar12 = true;
    if (local_68 == 0) {
UNWIND_INFO_140138900_UnwindCodes_48__OffsetInProlog:
      lStack_48 = 0;
      uStack_50 = 0;
      uStack_40 = 0xf;
      pppuStack_58 = (undefined8 ****)0x0;
    }
    else {
      ppppuVar7 = &local_78;
      if (7 < local_60) {
        ppppuVar7 = (undefined8 ****)local_78;
      }
      iVar4 = (*DAT_140426608)(0xfde9,0,ppppuVar7,local_68,0,0,0,0);
      if (iVar4 < 1) goto UNWIND_INFO_140138900_UnwindCodes_48__OffsetInProlog;
      FUN_140016a10(&local_38,(longlong)iVar4,0);
      ppppuVar7 = &local_38;
      if (0xf < uStack_20) {
        ppppuVar7 = (undefined8 ****)local_38;
      }
      ppppuVar6 = &local_78;
      if (7 < local_60) {
        ppppuVar6 = (undefined8 ****)local_78;
      }
      (*DAT_140426608)(0xfde9,0,ppppuVar6,local_68 & 0xffffffff,ppppuVar7,iVar4,0,0);
      lStack_48 = lStack_28;
      uStack_40 = uStack_20;
      pppuStack_58 = local_38;
      uStack_50 = uStack_30;
    }
    uVar10 = uStack_40;
    ppppuVar7 = (undefined8 ****)pppuStack_58;
    plVar8 = (longlong *)(lVar1 + 0x18);
    if (0xf < *(ulonglong *)(lVar1 + 0x30)) {
      plVar8 = (longlong *)*plVar8;
    }
    ppppuVar6 = &pppuStack_58;
    if (0xf < uStack_40) {
      ppppuVar6 = (undefined8 ****)pppuStack_58;
    }
    if ((lStack_48 != *(longlong *)(lVar1 + 0x28)) ||
       ((lStack_48 != 0 && (iVar4 = func_0x0001404210c0(ppppuVar6,plVar8), iVar4 != 0))))
    goto code_r0x0001401389bf;
    bVar3 = true;
  }
  if ((bVar12) && (0xf < uVar10)) {
    uVar9 = uVar10 + 1;
    ppppuVar6 = ppppuVar7;
    if (0xfff < uVar9) {
      ppppuVar6 = (undefined8 ****)ppppuVar7[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar7 + (-8 - (longlong)ppppuVar6)))
      goto code_r0x000140138a66;
      uVar9 = uVar10 + 0x28;
    }
    func_0x00014028b040(ppppuVar6,uVar9);
  }
  if (bVar3) {
    *(undefined1 *)(lVar1 + 0x10) = 1;
  }
  if (7 < local_60) {
    uVar10 = local_60 * 2 + 2;
    ppppuVar7 = (undefined8 ****)local_78;
    if (0xfff < uVar10) {
      ppppuVar7 = (undefined8 ****)local_78[-1];
      if (0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)ppppuVar7))) {
code_r0x000140138a66:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return uVar5;
      }
      uVar10 = local_60 * 2 + 0x29;
    }
    func_0x00014028b040(ppppuVar7,uVar10);
  }
  return 0;
}

