// Function: FUN_1400610b0
// Addr: 1400610b0
// Size: 464 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400610b0(char *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 ***pppuVar5;
  ulonglong uVar6;
  int iVar7;
  size_t sVar8;
  ulonglong uVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *_Buf2;
  longlong *plVar13;
  undefined8 ***local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong local_50;
  
  plVar13 = (longlong *)0x0;
  local_68 = (undefined8 ****)0x0;
  uStack_60 = 0;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  sVar8 = strlen(param_1);
  FUN_140017480(&local_68,param_1,sVar8);
  uVar6 = local_50;
  plVar1 = local_58;
  pppuVar5 = local_68;
  lVar2 = DAT_1404e8af8;
  plVar4 = DAT_1404e8ae8;
  uVar9 = 0xcbf29ce484222325;
  ppppuVar10 = &local_68;
  if (0xf < local_50) {
    ppppuVar10 = (undefined8 ****)local_68;
  }
  plVar11 = plVar13;
  if (local_58 != (longlong *)0x0) {
    do {
      plVar12 = (longlong *)((longlong)plVar11 + 1);
      uVar9 = (uVar9 ^ *(byte *)((longlong)ppppuVar10 + (longlong)plVar11)) * 0x100000001b3;
      plVar11 = plVar12;
    } while (plVar12 < local_58);
  }
  uVar9 = DAT_1404e8b10 & uVar9;
  plVar11 = *(longlong **)(DAT_1404e8af8 + 8 + uVar9 * 0x10);
  if (plVar11 != DAT_1404e8ae8) {
    plVar12 = *(longlong **)(DAT_1404e8af8 + uVar9 * 0x10);
    while( true ) {
      _Buf2 = plVar11 + 2;
      if (0xf < (ulonglong)plVar11[5]) {
        _Buf2 = (longlong *)*_Buf2;
      }
      ppppuVar10 = &local_68;
      if (0xf < uVar6) {
        ppppuVar10 = (undefined8 ****)pppuVar5;
      }
      if ((plVar1 == (longlong *)plVar11[4]) &&
         ((plVar13 = plVar11, plVar1 == (longlong *)0x0 ||
          (iVar7 = memcmp(ppppuVar10,_Buf2,(size_t)plVar1), iVar7 == 0)))) goto LAB_1400611bf;
      if (plVar11 == plVar12) break;
      plVar11 = (longlong *)plVar11[1];
    }
    plVar13 = (longlong *)0x0;
LAB_1400611bf:
    plVar11 = *(longlong **)(lVar2 + 8 + uVar9 * 0x10);
  }
  if (plVar13 != (longlong *)0x0) {
    plVar1 = *(longlong **)(lVar2 + uVar9 * 0x10);
    if (plVar11 == plVar13) {
      if (plVar1 == plVar13) {
        *(longlong **)(lVar2 + uVar9 * 0x10) = plVar4;
        *(longlong **)(lVar2 + 8 + uVar9 * 0x10) = plVar4;
      }
      else {
        *(longlong *)(lVar2 + 8 + uVar9 * 0x10) = plVar13[1];
      }
    }
    else if (plVar1 == plVar13) {
      *(longlong *)(lVar2 + uVar9 * 0x10) = *plVar13;
    }
    lVar2 = *plVar13;
    _DAT_1404e8af0 = _DAT_1404e8af0 + -1;
    *(longlong *)plVar13[1] = lVar2;
    *(longlong *)(lVar2 + 8) = plVar13[1];
    FUN_140017240(plVar13 + 6);
    FUN_140017240(plVar13 + 2);
    thunk_FUN_14028af80(plVar13,0x50);
  }
  if (0xf < uVar6) {
    uVar9 = uVar6 + 1;
    ppppuVar10 = (undefined8 ****)pppuVar5;
    if (0xfff < uVar9) {
      ppppuVar10 = (undefined8 ****)pppuVar5[-1];
      if (0x1f < (ulonglong)((longlong)pppuVar5 + (-8 - (longlong)ppppuVar10))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = uVar6 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar10,uVar9);
  }
  return;
}

