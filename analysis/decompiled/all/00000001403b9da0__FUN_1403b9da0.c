// Function: FUN_1403b9da0
// Addr: 1403b9da0
// Size: 735 bytes


int * FUN_1403b9da0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  char cVar12;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar13;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar15;
  byte *pbVar14;
  
  uVar13 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar6 = (int *)&DAT_14045dd10;
  }
  else {
    piVar3 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x6d617870,*(undefined8 *)(param_1 + 0x28));
    piVar6 = (int *)&DAT_14045dd10;
    if (piVar3 != (int *)0x0) {
      piVar6 = piVar3;
    }
  }
  if (*piVar6 != 0) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  pbVar11 = *(byte **)(piVar6 + 4);
  pbVar8 = pbVar11 + (uint)piVar6[6];
  uVar10 = (int)pbVar8 - (int)pbVar11;
  iVar9 = 1;
  FUN_1402fc370("SANITIZE",pbVar11,0,1,0,CONCAT44(uVar13,1),"start [%p..%p] (%lu bytes)",pbVar11,
                pbVar8,CONCAT44(uVar15,uVar10));
  if (pbVar11 == (byte *)0x0) {
    iVar5 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar6 != 0) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + iVar5;
      UNLOCK();
      if (iVar1 == iVar9) {
        *piVar6 = -0xdead;
        lVar2 = *(longlong *)(piVar6 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar6[2] = 0;
          piVar6[3] = 0;
        }
        if (*(code **)(piVar6 + 10) != (code *)0x0) {
          (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
          piVar6[8] = 0;
          piVar6[9] = 0;
          piVar6[10] = 0;
          piVar6[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar6);
      }
    }
    return piVar6;
  }
  pcVar7 = "OUT-OF-RANGE";
  pcVar4 = "OUT-OF-RANGE";
  if (5 < uVar10) {
    pcVar4 = "OK";
  }
  uVar13 = 0;
  pbVar14 = pbVar8;
  FUN_1402fc370("SANITIZE",pbVar11 + 6);
  if (5 < uVar10) {
    iVar5 = (uint)pbVar11[1] + (uint)*pbVar11 * 0x100;
    if (iVar5 == iVar9) {
      if (0x1f < uVar10) {
        pcVar7 = "OK";
      }
      uVar13 = 0;
      pbVar14 = pbVar8;
      FUN_1402fc370("SANITIZE");
      cVar12 = 0x1f < uVar10;
      pcVar4 = pcVar7;
      goto LAB_1403b9fab;
    }
    if ((iVar5 == 0) && ((uint)pbVar11[3] + (uint)pbVar11[2] * 0x100 == 0x5000)) {
      cVar12 = (char)iVar9;
      goto LAB_1403b9fab;
    }
  }
  cVar12 = '\0';
LAB_1403b9fab:
  iVar5 = -1;
  iVar9 = 1;
  FUN_1402fc370("SANITIZE",pbVar11,0,1,0,CONCAT44(uVar13,0xffffffff),"end [%p..%p]",pbVar11,pbVar8,
                pbVar14,pcVar4);
  if (*piVar6 != 0) {
    LOCK();
    iVar1 = *piVar6;
    *piVar6 = *piVar6 + iVar5;
    UNLOCK();
    if (iVar1 == iVar9) {
      *piVar6 = -0xdead;
      lVar2 = *(longlong *)(piVar6 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        piVar6[2] = 0;
        piVar6[3] = 0;
      }
      if (*(code **)(piVar6 + 10) != (code *)0x0) {
        (**(code **)(piVar6 + 10))(*(undefined8 *)(piVar6 + 8));
        piVar6[8] = 0;
        piVar6[9] = 0;
        piVar6[10] = 0;
        piVar6[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar6);
    }
  }
  if (cVar12 != '\0') {
    if ((char)piVar6[1] != '\0') {
      *(undefined1 *)(piVar6 + 1) = 0;
    }
    return piVar6;
  }
  FUN_140414150(piVar6);
  return (int *)&DAT_14045dd10;
}

