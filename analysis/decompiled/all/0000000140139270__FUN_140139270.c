// Function: FUN_140139270
// Addr: 140139270
// Size: 283 bytes


void FUN_140139270(longlong param_1)

{
  LPVOID *ppv;
  longlong *plVar1;
  HRESULT HVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  
  FUN_140139390();
  ppv = (LPVOID *)(param_1 + 0x38);
  HVar2 = CoCreateInstance((IID *)&DAT_140483870,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_140483890,ppv);
  if (HVar2 != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if (*(ulonglong *)(param_1 + 0x30) < 0x10) {
      piVar5 = (int *)(param_1 + 0x18);
    }
    else {
      piVar5 = *(int **)(param_1 + 0x18);
    }
    if (*(longlong *)(param_1 + 0x28) == 7) {
      iVar4 = *piVar5 + -0x61666564;
      if ((iVar4 == 0) && (iVar4 = *(ushort *)(piVar5 + 1) - 0x6c75, iVar4 == 0)) {
        iVar4 = *(byte *)((longlong)piVar5 + 6) - 0x74;
      }
      if (iVar4 == 0) goto LAB_14013930b;
    }
    uVar3 = FUN_1400cedd0(param_1 + 0x18,*ppv,local_res8);
    *(undefined8 *)(param_1 + 0x40) = uVar3;
  }
LAB_14013930b:
  if ((*(longlong *)(param_1 + 0x40) != 0) ||
     (iVar4 = (**(code **)(*(longlong *)*ppv + 0x20))(*ppv,0,0,param_1 + 0x40), iVar4 == 0)) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
                      (*(longlong **)(param_1 + 0x40),&DAT_140483880,0x17,0,
                       (undefined8 *)(param_1 + 0x48));
    if (iVar4 == 0) {
      (**(code **)(*(longlong *)*ppv + 0x30))(*ppv,*(undefined8 *)(param_1 + 8));
      plVar1 = *(longlong **)(param_1 + 0x48);
      lVar6 = *(longlong *)(param_1 + 8) + 8;
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar6 = 0;
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,lVar6);
      *(undefined1 *)(param_1 + 0x11) = 1;
    }
  }
  return;
}

