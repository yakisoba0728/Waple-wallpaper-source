// Function: FUN_1403652d0
// Addr: 1403652d0
// Size: 1252 bytes


void FUN_1403652d0(ulonglong *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4,
                  undefined8 *param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *local_res18;
  undefined2 *local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [40];
  
  puVar10 = param_3 + 1;
  if (param_2 < param_3) {
    uVar5 = *param_5;
    while( true ) {
      uVar2 = *param_3;
      lVar8 = FUN_1403c03e0(uVar5,local_80,uVar2);
      uVar3 = param_3[-1];
      puVar12 = param_3 + -1;
      lVar9 = FUN_1403c03e0(uVar5,local_68,uVar3);
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (uVar4 == *(uint *)(lVar8 + 0x10)) {
        if (uVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
        }
      }
      else {
        iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
      }
      if (0 < iVar7) break;
      lVar8 = FUN_1403c03e0(uVar5,local_68,uVar3);
      lVar9 = FUN_1403c03e0(uVar5,local_80,uVar2);
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (uVar4 == *(uint *)(lVar8 + 0x10)) {
        if (uVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
        }
      }
      else {
        iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
      }
      if ((0 < iVar7) || (param_3 = puVar12, puVar12 <= param_2)) break;
    }
  }
  puVar12 = puVar10;
  local_88 = puVar10;
  local_res18 = param_3;
  puVar11 = param_3;
  if (puVar10 < param_4) {
    uVar5 = *param_5;
    uVar2 = *param_3;
    while( true ) {
      lVar8 = FUN_1403c03e0(uVar5,local_68,uVar2);
      uVar3 = *puVar10;
      lVar9 = FUN_1403c03e0(uVar5,local_80,uVar3);
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (uVar4 == *(uint *)(lVar8 + 0x10)) {
        if (uVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
        }
      }
      else {
        iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
      }
      puVar12 = puVar10;
      local_88 = puVar10;
      if (0 < iVar7) break;
      lVar8 = FUN_1403c03e0(uVar5,local_68,uVar3);
      lVar9 = FUN_1403c03e0(uVar5,local_80,uVar2);
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (uVar4 == *(uint *)(lVar8 + 0x10)) {
        if (uVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
        }
      }
      else {
        iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
      }
      if ((0 < iVar7) ||
         (puVar10 = puVar10 + 1, puVar12 = puVar10, local_88 = puVar10, param_4 <= puVar10)) break;
    }
  }
joined_r0x0001403654d7:
  do {
    puVar6 = param_3;
    puVar1 = local_res18;
    if (param_4 <= puVar10) {
joined_r0x0001403655d2:
      while (param_3 = puVar6, local_res18 = puVar1, param_2 < param_3) {
        uVar5 = *param_5;
        puVar1 = param_3 + -1;
        lVar8 = FUN_1403c03e0(uVar5,local_68,*puVar11);
        uVar2 = *puVar1;
        lVar9 = FUN_1403c03e0(uVar5,local_80,uVar2);
        uVar4 = *(uint *)(lVar9 + 0x10);
        if (uVar4 == *(uint *)(lVar8 + 0x10)) {
          if (uVar4 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
          }
        }
        else {
          iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
        }
        puVar10 = local_88;
        puVar6 = puVar1;
        if (iVar7 < 1) {
          lVar8 = FUN_1403c03e0(uVar5,local_68,uVar2);
          lVar9 = FUN_1403c03e0(uVar5,local_80,*puVar11);
          uVar4 = *(uint *)(lVar9 + 0x10);
          if (uVar4 == *(uint *)(lVar8 + 0x10)) {
            if (uVar4 == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
            }
          }
          else {
            iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
          }
          local_res18 = param_3;
          if (0 < iVar7) break;
          puVar11 = puVar11 + -1;
          if (puVar11 != puVar1) {
            uVar3 = *puVar11;
            *puVar11 = uVar2;
            *puVar1 = uVar3;
          }
        }
      }
      if (param_3 == param_2) {
        if (puVar10 == param_4) {
          *param_1 = (ulonglong)puVar11;
          param_1[1] = (ulonglong)puVar12;
          return;
        }
        if (puVar12 != puVar10) {
          uVar2 = *puVar11;
          *puVar11 = *puVar12;
          *puVar12 = uVar2;
        }
        uVar2 = *puVar11;
        *puVar11 = *puVar10;
        *puVar10 = uVar2;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
        local_88 = puVar10;
        puVar11 = puVar11 + 1;
      }
      else {
        param_3 = param_3 + -1;
        local_res18 = param_3;
        if (puVar10 == param_4) {
          puVar11 = puVar11 + -1;
          if (param_3 != puVar11) {
            uVar2 = *param_3;
            *param_3 = *puVar11;
            *puVar11 = uVar2;
          }
          uVar2 = *puVar11;
          *puVar11 = puVar12[-1];
          puVar12[-1] = uVar2;
          puVar12 = puVar12 + -1;
        }
        else {
          uVar2 = *puVar10;
          *puVar10 = *param_3;
          puVar10 = puVar10 + 1;
          *param_3 = uVar2;
          local_88 = puVar10;
        }
      }
      goto joined_r0x0001403654d7;
    }
    uVar2 = *puVar10;
    uVar5 = *param_5;
    lVar8 = FUN_1403c03e0(uVar5,local_68,uVar2);
    lVar9 = FUN_1403c03e0(uVar5,local_80,*puVar11);
    uVar4 = *(uint *)(lVar9 + 0x10);
    if (uVar4 == *(uint *)(lVar8 + 0x10)) {
      if (uVar4 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
      }
    }
    else {
      iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
    }
    if (iVar7 < 1) {
      lVar8 = FUN_1403c03e0(uVar5,local_68,*puVar11);
      lVar9 = FUN_1403c03e0(uVar5,local_80,uVar2);
      uVar4 = *(uint *)(lVar9 + 0x10);
      if (uVar4 == *(uint *)(lVar8 + 0x10)) {
        if (uVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = memcmp(*(void **)(lVar8 + 8),*(void **)(lVar9 + 8),(ulonglong)uVar4);
        }
      }
      else {
        iVar7 = *(uint *)(lVar8 + 0x10) - uVar4;
      }
      puVar6 = local_res18;
      local_88 = puVar10;
      if (0 < iVar7) goto joined_r0x0001403655d2;
      if (puVar12 != puVar10) {
        uVar3 = *puVar12;
        *puVar12 = uVar2;
        *puVar10 = uVar3;
      }
      puVar12 = puVar12 + 1;
    }
    puVar10 = puVar10 + 1;
    param_3 = local_res18;
    local_88 = puVar10;
  } while( true );
}

