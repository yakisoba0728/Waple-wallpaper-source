// Function: FUN_1403b8640
// Addr: 1403b8640
// Size: 777 bytes


int * FUN_1403b8640(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar16;
  byte *pbVar15;
  undefined4 local_68 [2];
  byte *local_60;
  byte *local_58;
  uint local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  int *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  local_48 = 0;
  local_2c = 1;
  local_30 = 0;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar8 = (int *)&DAT_14045dd10;
  }
  else {
    piVar5 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x564f5247,*(undefined8 *)(param_1 + 0x28));
    piVar8 = (int *)&DAT_14045dd10;
    if (piVar5 != (int *)0x0) {
      piVar8 = piVar5;
    }
  }
  if (*piVar8 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_40 = 0;
  pbVar11 = *(byte **)(piVar8 + 4);
  pbVar13 = pbVar11 + (uint)piVar8[6];
  uVar9 = (int)pbVar13 - (int)pbVar11;
  if (uVar9 < 0x3ffffff) {
    uVar7 = 0x4000;
    if (0x3fff < uVar9 * 0x40) {
      uVar7 = uVar9 * 0x40;
    }
    local_4c = 0x3fffffff;
    if (uVar7 < 0x40000000) {
      local_4c = uVar7;
    }
  }
  else {
    local_4c = 0x3fffffff;
  }
  local_68[0] = 0;
  local_44 = 0;
  iVar10 = 1;
  local_60 = pbVar11;
  local_58 = pbVar13;
  local_50 = uVar9;
  local_38 = piVar8;
  FUN_1402fc370("SANITIZE",pbVar11,0,1,0,CONCAT44(uVar14,1),"start [%p..%p] (%lu bytes)",pbVar11,
                pbVar13,CONCAT44(uVar16,uVar9));
  if (pbVar11 == (byte *)0x0) {
    iVar12 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar8 != 0) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + iVar12;
      UNLOCK();
      if (iVar1 == iVar10) {
        *piVar8 = -0xdead;
        lVar2 = *(longlong *)(piVar8 + 2);
        if (lVar2 != 0) {
          FUN_1403c3220(lVar2);
          thunk_FUN_1402d9040(lVar2);
          piVar8[2] = 0;
          piVar8[3] = 0;
        }
        if (*(code **)(piVar8 + 10) != (code *)0x0) {
          (**(code **)(piVar8 + 10))(*(undefined8 *)(piVar8 + 8));
          piVar8[8] = 0;
          piVar8[9] = 0;
          piVar8[10] = 0;
          piVar8[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar8);
      }
    }
    return piVar8;
  }
  pcVar6 = "OUT-OF-RANGE";
  if (7 < uVar9) {
    pcVar6 = "OK";
  }
  uVar14 = 0;
  pbVar15 = pbVar13;
  FUN_1402fc370("SANITIZE");
  if ((7 < uVar9) && ((uint)pbVar11[1] + (uint)*pbVar11 * 0x100 == iVar10)) {
    cVar4 = FUN_140407b60(pbVar11 + 6,local_68);
    pbVar11 = local_60;
    pbVar13 = local_58;
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_1403b886a;
    }
  }
  bVar3 = false;
LAB_1403b886a:
  iVar12 = -1;
  iVar10 = 1;
  FUN_1402fc370("SANITIZE",pbVar11,0,1,0,CONCAT44(uVar14,0xffffffff),"end [%p..%p]",pbVar11,pbVar13,
                pbVar15,pcVar6);
  piVar5 = local_38;
  if ((local_38 != (int *)0x0) && (*local_38 != 0)) {
    LOCK();
    iVar1 = *local_38;
    *local_38 = *local_38 + iVar12;
    UNLOCK();
    if (iVar1 == iVar10) {
      *local_38 = -0xdead;
      lVar2 = *(longlong *)(local_38 + 2);
      if (lVar2 != 0) {
        FUN_1403c3220(lVar2);
        thunk_FUN_1402d9040(lVar2);
        piVar5[2] = 0;
        piVar5[3] = 0;
      }
      if (*(code **)(piVar5 + 10) != (code *)0x0) {
        (**(code **)(piVar5 + 10))(*(undefined8 *)(piVar5 + 8));
        piVar5[8] = 0;
        piVar5[9] = 0;
        piVar5[10] = 0;
        piVar5[0xb] = 0;
      }
      thunk_FUN_1402d9040(piVar5);
    }
  }
  if (bVar3) {
    if ((char)piVar8[1] != '\0') {
      *(undefined1 *)(piVar8 + 1) = 0;
    }
    return piVar8;
  }
  FUN_140414150(piVar8);
  return (int *)&DAT_14045dd10;
}

