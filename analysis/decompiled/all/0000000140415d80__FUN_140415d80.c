// Function: FUN_140415d80
// Addr: 140415d80
// Size: 318 bytes


longlong FUN_140415d80(int *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  
  piVar5 = (int *)&DAT_1404ded88;
  if (param_1 != (int *)0x0) {
    piVar5 = param_1;
  }
  lVar2 = FUN_14039ced0(*(undefined8 *)(piVar5 + 8));
  if (*(char *)(lVar2 + 4) != '\0') {
    if (*piVar5 != 0) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    *(int **)(lVar2 + 0x18) = piVar5;
    *(int *)(lVar2 + 0x28) = piVar5[10];
    *(int *)(lVar2 + 0x2c) = piVar5[0xb];
    *(int *)(lVar2 + 0x34) = piVar5[0xd];
    *(int *)(lVar2 + 0x38) = piVar5[0xe];
    *(char *)(lVar2 + 0x3c) = (char)piVar5[0xf];
    *(int *)(lVar2 + 0x48) = piVar5[0x12];
    *(int *)(lVar2 + 0x68) = piVar5[0x1a];
    *(int *)(lVar2 + 0x6c) = piVar5[0x1b];
    *(int *)(lVar2 + 0x70) = piVar5[0x1c];
    uVar1 = piVar5[0x1f];
    uVar6 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      lVar3 = _calloc_base(uVar6,4);
      lVar4 = _calloc_base(uVar1,4);
      if ((lVar3 == 0) || (lVar4 == 0)) {
        thunk_FUN_1402d9040(lVar3);
        thunk_FUN_1402d9040(lVar4);
      }
      else {
        if (uVar6 != 0) {
          FUN_1404210f0(lVar3,*(undefined8 *)(piVar5 + 0x20),uVar6 * 4);
          FUN_1404210f0(lVar4,*(undefined8 *)(piVar5 + 0x22),uVar6 * 4);
        }
        FUN_14039ce50(lVar2,lVar3,lVar4,uVar1);
      }
    }
    FUN_1403b2f70(lVar2);
    *(undefined4 *)(lVar2 + 0x14) = *(undefined4 *)(lVar2 + 0x10);
  }
  return lVar2;
}

