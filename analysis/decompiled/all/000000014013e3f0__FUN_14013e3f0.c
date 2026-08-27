// Function: FUN_14013e3f0
// Addr: 14013e3f0
// Size: 319 bytes


void FUN_14013e3f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  size_t _Size;
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  FUN_14013daf0();
  FUN_14013daf0(param_1,param_3);
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  lVar6 = *(longlong *)(param_1 + 0x58);
  iVar5 = 0;
  uVar7 = (*(longlong *)(param_1 + 0x60) - lVar6 >> 3) * -0x71c71c71c71c71c7;
  if (uVar7 != 0) {
    do {
      _Buf1 = (undefined8 *)(lVar6 + (longlong)iVar5 * 0x48);
      _Buf2 = param_3;
      if (0xf < (ulonglong)param_3[3]) {
        _Buf2 = (undefined8 *)*param_3;
      }
      _Size = _Buf1[2];
      if (0xf < (ulonglong)_Buf1[3]) {
        _Buf1 = (undefined8 *)*_Buf1;
      }
      if ((_Size == param_3[2]) && ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))
         ) {
        *(int *)(param_1 + 0x50) = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while ((ulonglong)(longlong)iVar5 < uVar7);
  }
  bVar3 = false;
  if (*(int *)(param_1 + 0x50) < 0) {
    *(int *)(param_1 + 0x50) = (int)uVar7;
    FUN_14013e530(param_1 + 0x58,param_3);
    lVar1 = *(longlong *)(param_1 + 0x90);
    for (lVar6 = *(longlong *)(param_1 + 0x88); lVar6 != lVar1; lVar6 = lVar6 + 0x40) {
      plVar2 = *(longlong **)(lVar6 + 0x38);
      if (plVar2 == (longlong *)0x0) goto LAB_14013e52a;
      (**(code **)(*plVar2 + 0x10))(plVar2,param_3);
    }
    bVar3 = true;
  }
  lVar6 = *(longlong *)(param_1 + 0x70);
  lVar1 = *(longlong *)(param_1 + 0x78);
  while( true ) {
    if (lVar6 == lVar1) {
      if (bVar3) {
        FUN_14013d5a0(param_1);
      }
      return;
    }
    plVar2 = *(longlong **)(lVar6 + 0x38);
    if (plVar2 == (longlong *)0x0) break;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
    lVar6 = lVar6 + 0x40;
  }
LAB_14013e52a:
                    /* WARNING: Subroutine does not return */
  FUN_14028c2c0();
}

