// Function: FUN_1401ee3a0
// Addr: 1401ee3a0
// Size: 380 bytes


void FUN_1401ee3a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  char *_Str;
  size_t _Size;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  undefined8 *_Buf1;
  longlong lVar9;
  
  lVar9 = *(longlong *)(param_1 + 0x100);
  lVar2 = *(longlong *)(param_1 + 0x108);
  _Str = (char *)*param_4;
  while( true ) {
    if (lVar9 == lVar2) {
      return;
    }
    _Buf1 = (undefined8 *)(lVar9 + 8);
    sVar7 = strlen(_Str);
    _Size = *(size_t *)(lVar9 + 0x18);
    if (0xf < *(ulonglong *)(lVar9 + 0x20)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size == sVar7) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Str,_Size), iVar6 == 0)))) break;
    lVar9 = lVar9 + 0x40;
  }
  iVar6 = 0;
  lVar2 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) >> 2 == 0) {
    return;
  }
  do {
    lVar3 = *(longlong *)(param_1 + 0xe8);
    lVar8 = (longlong)iVar6;
    plVar4 = *(longlong **)(lVar3 + lVar8 * 0x50);
    lVar5 = plVar4[1];
    plVar1 = (longlong *)(lVar5 + 0x50);
    *plVar1 = *plVar1 + 8;
    **(longlong **)(lVar5 + 0x50) = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x48))();
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x118))
              (plVar1,*(undefined4 *)(lVar3 + 0x14 + lVar8 * 0x50),
               *(undefined4 *)(lVar3 + 0x18 + lVar8 * 0x50),
               *(undefined4 *)(lVar3 + 0x1c + lVar8 * 0x50),
               *(undefined4 *)(lVar3 + 0x20 + lVar8 * 0x50));
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 200) + 0x1518);
    (**(code **)(*plVar1 + 0x120))(plVar1,1,0);
    plVar1 = *(longlong **)(lVar3 + lVar8 * 0x50);
    *(longlong *)(plVar1[1] + 0x50) = *(longlong *)(plVar1[1] + 0x50) + -8;
    if ((longlong *)**(longlong **)(plVar1[1] + 0x50) == (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1);
    }
    else {
      (**(code **)(*(longlong *)**(longlong **)(plVar1[1] + 0x50) + 0x48))();
    }
    iVar6 = iVar6 + 1;
  } while ((ulonglong)(longlong)iVar6 <
           (ulonglong)(*(longlong *)(lVar9 + 0x30) - *(longlong *)(lVar9 + 0x28) >> 2));
  return;
}

