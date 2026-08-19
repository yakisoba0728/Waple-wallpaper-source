// Function: FUN_1400cbb70
// Addr: 1400cbb70
// Size: 913 bytes


void FUN_1400cbb70(longlong param_1,int *param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *local_2c8;
  int *local_2c0;
  uint local_2b8;
  undefined8 local_2b0;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  int local_248;
  int iStack_244;
  int local_240;
  int iStack_23c;
  int local_238;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_128 [232];
  
  iVar10 = *param_2;
  if (iVar10 == 1) {
    uVar6 = param_2[1];
    if ((3 < uVar6) && (piVar7 = *(int **)(param_2 + 2), *piVar7 == 2)) {
      uVar5 = (ulonglong)uVar6;
      piVar4 = piVar7 + 1;
      FUN_1400c1510(local_128);
      piVar8 = piVar4;
      if (4 < uVar6) {
        do {
          if ((char)*piVar8 == '\0') break;
          piVar8 = (int *)((longlong)piVar8 + 1);
        } while ((longlong)piVar8 - (longlong)piVar7 < (longlong)uVar5);
      }
      if ((longlong)((longlong)piVar8 + (1 - (longlong)piVar7)) <= (longlong)uVar5) {
        func_0x000140421ed0(piVar4);
        return;
      }
      func_0x000140421ed0(&DAT_140474550);
      return;
    }
  }
  else if (iVar10 == 2) {
    local_2b8 = param_2[1];
    local_2c8 = *(int **)(param_2 + 2);
    local_2b0 = 0;
    if ((3 < local_2b8) && (local_2c0 = local_2c8 + 1, *local_2c8 == 2)) {
      local_278 = 0;
      local_288 = 0;
      uStack_280 = 0;
      piVar7 = local_2c8 + 2;
      local_260 = 0;
      uVar5 = (ulonglong)local_2b8;
      local_258 = 0xf;
      local_250 = 0;
      iVar10 = 0;
      uStack_268 = 0;
      local_270 = 0;
      if (7 < local_2b8) {
        iVar10 = *local_2c0;
        local_2c0 = piVar7;
        piVar7 = local_2c8 + 3;
      }
      local_238 = 0;
      iVar11 = local_238;
      if ((longlong)local_2c0 + (4 - (longlong)local_2c8) <= (longlong)uVar5) {
        iVar11 = *local_2c0;
        local_2c0 = piVar7;
      }
      _local_248 = CONCAT44(iVar11,iVar10);
      iVar10 = local_238;
      if ((longlong)local_2c0 + (4 - (longlong)local_2c8) <= (longlong)uVar5) {
        iVar10 = *local_2c0;
        local_2c0 = local_2c0 + 1;
      }
      iVar11 = local_238;
      if ((longlong)local_2c0 + (4 - (longlong)local_2c8) <= (longlong)uVar5) {
        iVar11 = *local_2c0;
        local_2c0 = local_2c0 + 1;
      }
      _local_240 = CONCAT44(iVar11,iVar10);
      if ((longlong)local_2c0 + (4 - (longlong)local_2c8) <= (longlong)uVar5) {
        local_238 = *local_2c0;
        local_2c0 = local_2c0 + 1;
      }
      uVar3 = FUN_14009c5d0(&local_2c8);
      func_0x000140421ed0(uVar3);
      return;
    }
  }
  else if (iVar10 == 3) {
    uVar6 = param_2[1];
    if ((3 < uVar6) && (piVar7 = *(int **)(param_2 + 2), *piVar7 == 2)) {
      if (uVar6 < 8) {
        piVar4 = piVar7 + 1;
        iVar10 = 0;
      }
      else {
        iVar10 = piVar7[1];
        piVar4 = piVar7 + 2;
      }
      *(int *)(*(longlong *)(param_1 + 8) + 0x658) = iVar10;
      lVar2 = (longlong)piVar4 - (longlong)piVar7;
      piVar8 = piVar4;
      while ((lVar2 < (longlong)(ulonglong)uVar6 && ((char)*piVar8 != '\0'))) {
        piVar8 = (int *)((longlong)piVar8 + 1);
        lVar2 = (longlong)piVar8 - (longlong)piVar7;
      }
      piVar9 = (int *)&DAT_140474550;
      if ((longlong)((longlong)piVar8 + (1 - (longlong)piVar7)) <= (longlong)(ulonglong)uVar6) {
        piVar9 = piVar4;
      }
      func_0x000140421ed0(piVar9);
      return;
    }
  }
  else if (iVar10 == 4) {
    uVar6 = param_2[1];
    if ((3 < uVar6) && (piVar7 = *(int **)(param_2 + 2), *piVar7 == 2)) {
      piVar4 = piVar7 + 2;
      uVar5 = (ulonglong)uVar6;
      iVar10 = 0;
      if (uVar6 < 8) {
        iVar11 = 0;
        piVar8 = piVar4;
        piVar4 = piVar7 + 1;
      }
      else {
        iVar11 = piVar7[1];
        piVar8 = piVar7 + 3;
      }
      *(int *)(*(longlong *)(param_1 + 8) + 0x65c) = iVar11;
      pcVar1 = (char *)((longlong)piVar4 + (4 - (longlong)piVar7));
      if ((longlong)pcVar1 <= (longlong)uVar5) {
        iVar10 = *piVar4;
      }
      if ((longlong)pcVar1 <= (longlong)uVar5) {
        piVar4 = piVar8;
      }
      *(int *)(*(longlong *)(param_1 + 8) + 0x660) = iVar10;
      lVar2 = (longlong)piVar4 - (longlong)piVar7;
      piVar8 = piVar4;
      while ((lVar2 < (longlong)uVar5 && ((char)*piVar8 != '\0'))) {
        piVar8 = (int *)((longlong)piVar8 + 1);
        lVar2 = (longlong)piVar8 - (longlong)piVar7;
      }
      piVar9 = (int *)&DAT_140474550;
      if ((longlong)((longlong)piVar8 + (1 - (longlong)piVar7)) <= (longlong)uVar5) {
        piVar9 = piVar4;
      }
      func_0x000140421ed0(piVar9);
      return;
    }
  }
  else if (((iVar10 == 10) && (uVar6 = param_2[1], 3 < uVar6)) &&
          (piVar7 = *(int **)(param_2 + 2), *piVar7 == 2)) {
    piVar4 = piVar7 + 1;
    piVar8 = piVar4;
    if (4 < uVar6) {
      do {
        if ((char)*piVar8 == '\0') break;
        piVar8 = (int *)((longlong)piVar8 + 1);
      } while ((longlong)piVar8 - (longlong)piVar7 < (longlong)(ulonglong)uVar6);
    }
    local_208 = 0;
    uStack_200 = 0;
    piVar9 = (int *)&DAT_140474550;
    if ((longlong)((longlong)piVar8 + (1 - (longlong)piVar7)) <= (longlong)(ulonglong)uVar6) {
      piVar9 = piVar4;
    }
    local_1f8 = 0;
    local_1f0 = 0;
    func_0x000140421ed0(piVar9);
    return;
  }
  return;
}

