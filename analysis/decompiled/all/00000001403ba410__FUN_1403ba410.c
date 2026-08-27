// Function: FUN_1403ba410
// Addr: 1403ba410
// Size: 604 bytes


int * FUN_1403ba410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 in_stack_ffffffffffffffa0;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffffc0;
  undefined4 uVar11;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffa0 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar4 = (int *)&DAT_14045dd10;
  }
  else {
    piVar3 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x76686561,*(undefined8 *)(param_1 + 0x28));
    piVar4 = (int *)&DAT_14045dd10;
    if (piVar3 != (int *)0x0) {
      piVar4 = piVar3;
    }
  }
  if (*piVar4 != 0) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  pbVar9 = *(byte **)(piVar4 + 4);
  uVar5 = (int)(pbVar9 + (uint)piVar4[6]) - (int)pbVar9;
  iVar7 = 1;
  FUN_1402fc370("SANITIZE",pbVar9,0,1,0,CONCAT44(uVar10,1),"start [%p..%p] (%lu bytes)",pbVar9,
                pbVar9 + (uint)piVar4[6],CONCAT44(uVar11,uVar5));
  if (pbVar9 == (byte *)0x0) {
    iVar8 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar4 != 0) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + iVar8;
      UNLOCK();
      if (iVar1 == iVar7) {
        *piVar4 = -0xdead;
        lVar2 = *(longlong *)(piVar4 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar4[2] = 0;
          piVar4[3] = 0;
        }
        if (*(code **)(piVar4 + 10) != (code *)0x0) {
          (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
          piVar4[8] = 0;
          piVar4[9] = 0;
          piVar4[10] = 0;
          piVar4[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar4);
      }
    }
    return piVar4;
  }
  FUN_1402fc370("SANITIZE");
  if ((uVar5 < 0x24) || ((uint)pbVar9[1] + (uint)*pbVar9 * 0x100 != iVar7)) {
    cVar6 = '\0';
  }
  else {
    cVar6 = (char)iVar7;
  }
  iVar8 = -1;
  FUN_1402fc370("SANITIZE",pbVar9);
  if (*piVar4 != 0) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + iVar8;
    UNLOCK();
    if (iVar1 == iVar7) {
      *piVar4 = -0xdead;
      lVar2 = *(longlong *)(piVar4 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        piVar4[2] = 0;
        piVar4[3] = 0;
      }
      if (*(code **)(piVar4 + 10) != (code *)0x0) {
        (**(code **)(piVar4 + 10))(*(undefined8 *)(piVar4 + 8));
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        piVar4[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar4);
    }
  }
  if (cVar6 != '\0') {
    if ((char)piVar4[1] != '\0') {
      *(undefined1 *)(piVar4 + 1) = 0;
    }
    return piVar4;
  }
  FUN_140414150(piVar4);
  return (int *)&DAT_14045dd10;
}

