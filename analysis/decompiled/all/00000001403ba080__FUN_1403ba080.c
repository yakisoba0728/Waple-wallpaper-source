// Function: FUN_1403ba080
// Addr: 1403ba080
// Size: 912 bytes


int * FUN_1403ba080(longlong param_1)

{
  int iVar1;
  byte *pbVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar17;
  byte *pbVar16;
  undefined4 local_78 [2];
  byte *local_70;
  byte *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  int *local_48;
  int local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  local_58 = 0;
  local_3b = 0;
  local_40 = *(int *)(param_1 + 0x18);
  if (local_40 == -1) {
    lVar5 = FUN_140398a10(param_1 + 0x80);
    local_40 = (uint)*(byte *)(lVar5 + 5) + (uint)*(byte *)(lVar5 + 4) * 0x100;
    if (local_40 == 0) {
      local_40 = 0;
    }
    *(int *)(param_1 + 0x18) = local_40;
  }
  local_3c = 1;
  if (*(code **)(param_1 + 0x20) == (code *)0x0) {
    piVar8 = (int *)&DAT_14045dd10;
  }
  else {
    piVar6 = (int *)(**(code **)(param_1 + 0x20))
                              (param_1,0x7472616b,*(undefined8 *)(param_1 + 0x28));
    piVar8 = (int *)&DAT_14045dd10;
    if (piVar6 != (int *)0x0) {
      piVar8 = piVar6;
    }
  }
  if (*piVar8 != 0) {
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
  }
  local_50 = 0;
  pbVar2 = *(byte **)(piVar8 + 4);
  pbVar10 = pbVar2 + (uint)piVar8[6];
  uVar12 = (int)pbVar10 - (int)pbVar2;
  if (uVar12 < 0x3ffffff) {
    uVar9 = 0x4000;
    if (0x3fff < uVar12 * 0x40) {
      uVar9 = uVar12 * 0x40;
    }
    local_5c = 0x3fffffff;
    if (uVar9 < 0x40000000) {
      local_5c = uVar9;
    }
  }
  else {
    local_5c = 0x3fffffff;
  }
  local_78[0] = 0;
  local_54 = 0;
  iVar11 = 1;
  local_70 = pbVar2;
  local_68 = pbVar10;
  local_60 = uVar12;
  local_48 = piVar8;
  FUN_1402fc370("SANITIZE",pbVar2,0,1,0,CONCAT44(uVar15,1),"start [%p..%p] (%lu bytes)",pbVar2,
                pbVar10,CONCAT44(uVar17,uVar12));
  if (pbVar2 == (byte *)0x0) {
    iVar13 = -1;
    FUN_1402fc370("SANITIZE");
    if (*piVar8 != 0) {
      LOCK();
      iVar1 = *piVar8;
      *piVar8 = *piVar8 + iVar13;
      UNLOCK();
      if (iVar1 == iVar11) {
        *piVar8 = -0xdead;
        lVar5 = *(longlong *)(piVar8 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
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
  }
  else {
    pcVar7 = "OUT-OF-RANGE";
    if (0xb < uVar12) {
      pcVar7 = "OK";
    }
    uVar15 = 0;
    pbVar16 = pbVar10;
    FUN_1402fc370("SANITIZE");
    pbVar14 = pbVar2;
    if (((((uVar12 < 0xc) || ((uint)pbVar2[1] + (uint)*pbVar2 * 0x100 != iVar11)) ||
         (cVar4 = FUN_1404093d0(pbVar2 + 6,local_78,pbVar2), cVar4 == '\0')) ||
        ((uVar12 = (uint)pbVar2[7] + (uint)pbVar2[6] * 0x100, uVar12 != 0 &&
         (cVar4 = FUN_140405f50(pbVar2 + uVar12,local_78,pbVar2), pbVar10 = local_68,
         pbVar14 = local_70, cVar4 == '\0')))) ||
       ((cVar4 = FUN_1404093d0(pbVar2 + 8,local_78,pbVar2), cVar4 == '\0' ||
        ((uVar12 = (uint)pbVar2[9] + (uint)pbVar2[8] * 0x100, uVar12 != 0 &&
         (cVar4 = FUN_140405f50(pbVar2 + uVar12,local_78,pbVar2), pbVar10 = local_68,
         pbVar14 = local_70, cVar4 == '\0')))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar13 = -1;
    iVar11 = 1;
    FUN_1402fc370("SANITIZE",pbVar14,0,1,0,CONCAT44(uVar15,0xffffffff),"end [%p..%p]",pbVar14,
                  pbVar10,pbVar16,pcVar7);
    piVar6 = local_48;
    if ((local_48 != (int *)0x0) && (*local_48 != 0)) {
      LOCK();
      iVar1 = *local_48;
      *local_48 = *local_48 + iVar13;
      UNLOCK();
      if (iVar1 == iVar11) {
        *local_48 = -0xdead;
        lVar5 = *(longlong *)(local_48 + 2);
        if (lVar5 != 0) {
          FUN_1403c3220(lVar5);
          thunk_FUN_1402d9040(lVar5);
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
    if (bVar3) {
      if ((char)piVar8[1] != '\0') {
        *(undefined1 *)(piVar8 + 1) = 0;
      }
    }
    else {
      FUN_140414150(piVar8);
      piVar8 = (int *)&DAT_14045dd10;
    }
  }
  return piVar8;
}

