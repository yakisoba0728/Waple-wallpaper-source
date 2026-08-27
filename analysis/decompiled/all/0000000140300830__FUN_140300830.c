// Function: FUN_140300830
// Addr: 140300830
// Size: 255 bytes


void FUN_140300830(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  if (param_1 <= param_2) {
    lVar6 = param_3;
    if (*(int *)(param_3 + 0x1c) <= *(int *)(param_4 + 0x1c)) {
      lVar6 = param_4;
      param_4 = param_3;
    }
    iVar1 = *(int *)(param_4 + 0x18);
    iVar2 = *(int *)(lVar6 + 0x18);
    iVar3 = *(int *)(param_4 + 0x1c);
    iVar4 = *(int *)(lVar6 + 0x1c);
    if ((iVar1 == iVar2) || (iVar3 == iVar4)) {
      do {
        iVar5 = *(int *)(param_1 + 0x1c);
        if (iVar3 < iVar5) {
          iVar7 = iVar5 + (iVar2 - iVar4);
          if (iVar5 < iVar4) {
            iVar7 = iVar1;
          }
        }
        else {
          iVar7 = iVar5 + (iVar1 - iVar3);
        }
        *(int *)(param_1 + 0x18) = iVar7;
        param_1 = param_1 + 0x30;
      } while (param_1 <= param_2);
    }
    else {
      iVar5 = FUN_1402efa10(iVar2 - iVar1,iVar4 - iVar3);
      do {
        iVar7 = *(int *)(param_1 + 0x1c);
        if (iVar3 < iVar7) {
          if (iVar7 < iVar4) {
            lVar6 = (longlong)(iVar7 - iVar3) * (longlong)iVar5;
            iVar7 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10) + iVar1;
          }
          else {
            iVar7 = iVar7 + (iVar2 - iVar4);
          }
        }
        else {
          iVar7 = iVar7 + (iVar1 - iVar3);
        }
        *(int *)(param_1 + 0x18) = iVar7;
        param_1 = param_1 + 0x30;
      } while (param_1 <= param_2);
    }
  }
  return;
}

