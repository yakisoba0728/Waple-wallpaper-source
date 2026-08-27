// Function: FUN_14038b450
// Addr: 14038b450
// Size: 345 bytes


int * FUN_14038b450(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 == -1) {
      lVar3 = FUN_140398a10(param_2 + 0x80);
      iVar2 = (uint)*(byte *)(lVar3 + 4) * 0x100 + (uint)*(byte *)(lVar3 + 5);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar2;
    }
    *(int *)(param_1 + 0x38) = iVar2;
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  if (((param_3 == 0) || (*(code **)(param_2 + 0x20) == (code *)0x0)) ||
     (piVar4 = (int *)(**(code **)(param_2 + 0x20))(param_2,param_3,*(undefined8 *)(param_2 + 0x28))
     , piVar4 == (int *)0x0)) {
    piVar4 = (int *)&DAT_14045dd10;
  }
  if (*piVar4 != 0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  *(int **)(param_1 + 0x30) = piVar4;
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_14040c230(param_1,0,0);
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    cVar1 = FUN_140403f30(lVar3,param_1);
    if (((cVar1 == '\0') || (cVar1 = FUN_140409580(lVar3 + 0x14,param_1,lVar3), cVar1 == '\0')) ||
       ((uVar5 = (uint)*(byte *)(lVar3 + 0x15) * 0x10000 + (uint)*(byte *)(lVar3 + 0x16) * 0x100 +
                 (uint)*(byte *)(lVar3 + 0x14) * 0x1000000 + (uint)*(byte *)(lVar3 + 0x17),
        uVar5 != 0 && (cVar1 = FUN_140403310((ulonglong)uVar5 + lVar3,param_1), cVar1 == '\0')))) {
      FUN_1403beff0(param_1);
      FUN_140414150(piVar4);
      piVar4 = (int *)&DAT_14045dd10;
    }
    else {
      FUN_1403beff0(param_1);
      if ((char)piVar4[1] != '\0') {
        *(undefined1 *)(piVar4 + 1) = 0;
      }
    }
    return piVar4;
  }
  FUN_1403beff0(param_1);
  return piVar4;
}

