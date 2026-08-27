// Function: FUN_1401ab5f0
// Addr: 1401ab5f0
// Size: 463 bytes


void FUN_1401ab5f0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong _Size;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *_Buf1;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  plVar2 = *(longlong **)(param_1 + 8);
  plVar9 = (longlong *)*plVar2;
  while( true ) {
    if (plVar9 == plVar2) goto LAB_1401ab795;
    plVar6 = plVar9 + 2;
    if ((undefined8 *)plVar9[6] == param_2) break;
    plVar9 = (longlong *)*plVar9;
  }
  _Size = plVar9[4];
  uVar3 = plVar9[5];
  plVar9 = plVar6;
  if (0xf < uVar3) {
    plVar9 = (longlong *)*plVar6;
  }
  uVar8 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)(uVar8 + (longlong)plVar9);
      uVar8 = uVar8 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < _Size);
  }
  lVar4 = *(longlong *)(param_1 + 0x18);
  uVar10 = *(ulonglong *)(param_1 + 0x30) & uVar10;
  plVar9 = *(longlong **)(lVar4 + 8 + uVar10 * 0x10);
  if (plVar9 == plVar2) {
LAB_1401ab719:
    plVar11 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(lVar4 + uVar10 * 0x10);
    plVar11 = plVar9;
    while( true ) {
      plVar9 = plVar11 + 2;
      if (0xf < (ulonglong)plVar11[5]) {
        plVar9 = (longlong *)*plVar9;
      }
      _Buf1 = plVar6;
      if (0xf < uVar3) {
        _Buf1 = (longlong *)*plVar6;
      }
      if ((_Size == plVar11[4]) &&
         ((_Size == 0 || (iVar7 = memcmp(_Buf1,plVar9,_Size), iVar7 == 0)))) break;
      if (plVar11 == plVar5) {
        plVar9 = *(longlong **)(lVar4 + 8 + uVar10 * 0x10);
        goto LAB_1401ab719;
      }
      plVar11 = (longlong *)plVar11[1];
    }
    plVar9 = *(longlong **)(lVar4 + 8 + uVar10 * 0x10);
  }
  if (plVar11 != (longlong *)0x0) {
    plVar6 = *(longlong **)(lVar4 + uVar10 * 0x10);
    if (plVar9 == plVar11) {
      if (plVar6 == plVar11) {
        *(longlong **)(lVar4 + uVar10 * 0x10) = plVar2;
        *(longlong **)(lVar4 + 8 + uVar10 * 0x10) = plVar2;
      }
      else {
        *(longlong *)(lVar4 + 8 + uVar10 * 0x10) = plVar11[1];
      }
    }
    else if (plVar6 == plVar11) {
      *(longlong *)(lVar4 + uVar10 * 0x10) = *plVar11;
    }
    lVar4 = *plVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    *(longlong *)plVar11[1] = lVar4;
    *(longlong *)(lVar4 + 8) = plVar11[1];
    FUN_140017240(plVar11 + 2);
    thunk_FUN_14028af80(plVar11,0x38);
  }
LAB_1401ab795:
  if (param_2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001401ab7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_2)(param_2,1);
    return;
  }
  return;
}

