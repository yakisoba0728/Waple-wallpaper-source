// Function: FUN_140414a00
// Addr: 140414a00
// Size: 185 bytes


void FUN_140414a00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((*(int *)(param_1 + 0x3c) == 0) && (uVar5 = 0, *(int *)(param_1 + 0x60) != 0)) {
    do {
      lVar3 = *(longlong *)(param_1 + 0x10);
      iVar2 = (**(code **)(lVar3 + 0x38))
                        (lVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + uVar5 * 0x14),
                         *(undefined8 *)(lVar3 + 0x78));
      if ((iVar2 != 0x5a797979) && ((iVar2 != 0x5a696e68 && (iVar2 != 0x5a7a7a7a)))) {
        *(int *)(param_1 + 0x3c) = iVar2;
        break;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x60));
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar2 = FUN_140418d30(*(undefined4 *)(param_1 + 0x3c));
    *(int *)(param_1 + 0x38) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x38) = 4;
    }
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = DAT_1404e52f8;
    if (DAT_1404e52f8 == 0) {
      lVar3 = FUN_140416da0(&DAT_14048f3ac,0xffffffff);
      LOCK();
      lVar1 = lVar3;
      if (DAT_1404e52f8 != 0) {
        lVar1 = DAT_1404e52f8;
      }
      DAT_1404e52f8 = lVar1;
      UNLOCK();
    }
    *(longlong *)(param_1 + 0x40) = lVar3;
  }
  return;
}

