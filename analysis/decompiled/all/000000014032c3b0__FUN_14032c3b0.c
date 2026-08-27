// Function: FUN_14032c3b0
// Addr: 14032c3b0
// Size: 624 bytes


int FUN_14032c3b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  int local_res10 [2];
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  local_res10[0] = FUN_1402f5c50(param_1,0);
  if (local_res10[0] == 0) {
    local_res10[0] = FUN_1402f5610(param_1,&DAT_14043fd90,(int *)(param_2 + 0x138));
    if (local_res10[0] == 0) {
      if (((*(int *)(param_2 + 0x138) != 0x70636601) ||
          (uVar10 = *(uint *)(param_2 + 0x13c), uVar10 == 0)) || (*(uint *)(param_1 + 8) < 0x10)) {
        return 3;
      }
      uVar8 = *(uint *)(param_1 + 8) >> 4;
      if ((uVar8 < uVar10) || (9 < uVar10)) {
        uVar10 = 9;
        if (uVar8 < 9) {
          uVar10 = uVar8;
        }
        *(uint *)(param_2 + 0x13c) = uVar10;
      }
      lVar9 = FUN_1402f7ff0(uVar1,0x10,0,uVar10,0,local_res10);
      *(longlong *)(param_2 + 0x140) = lVar9;
      if (local_res10[0] == 0) {
        uVar8 = 0;
        uVar10 = 0;
        if (*(int *)(param_2 + 0x13c) != 0) {
          do {
            local_res10[0] = FUN_1402f5610(param_1,&DAT_14043fda0,lVar9);
            if (local_res10[0] != 0) goto LAB_14032c5a6;
            uVar10 = *(uint *)(param_2 + 0x13c);
            lVar9 = lVar9 + 0x10;
            uVar8 = uVar8 + 1;
            local_res10[0] = 0;
          } while (uVar8 < uVar10);
        }
        if (uVar10 != 1) {
          lVar9 = *(longlong *)(param_2 + 0x140);
          uVar8 = 0;
          while( true ) {
            bVar7 = false;
            uVar12 = 0;
            if (uVar10 - uVar8 == 1) break;
            do {
              uVar14 = (int)uVar12 + 1;
              puVar11 = (undefined8 *)(uVar12 * 0x10 + lVar9);
              puVar13 = (undefined8 *)((ulonglong)uVar14 * 0x10 + lVar9);
              if (*(uint *)((longlong)puVar13 + 0xc) < *(uint *)((longlong)puVar11 + 0xc)) {
                uVar6 = puVar11[1];
                bVar7 = true;
                uVar2 = *(undefined4 *)puVar13;
                uVar3 = *(undefined4 *)((longlong)puVar13 + 4);
                uVar4 = *(undefined4 *)(puVar13 + 1);
                uVar5 = *(undefined4 *)((longlong)puVar13 + 0xc);
                *puVar13 = *puVar11;
                puVar13[1] = uVar6;
                *(undefined4 *)puVar11 = uVar2;
                *(undefined4 *)((longlong)puVar11 + 4) = uVar3;
                *(undefined4 *)(puVar11 + 1) = uVar4;
                *(undefined4 *)((longlong)puVar11 + 0xc) = uVar5;
              }
              if ((*(uint *)((longlong)puVar13 + 0xc) < *(uint *)(puVar11 + 1)) ||
                 (*(uint *)((longlong)puVar13 + 0xc) - *(uint *)(puVar11 + 1) <
                  *(uint *)((longlong)puVar11 + 0xc))) {
                local_res10[0] = 9;
                goto LAB_14032c5a6;
              }
              uVar10 = *(uint *)(param_2 + 0x13c);
              uVar12 = (ulonglong)uVar14;
            } while (uVar14 < (uVar10 - uVar8) - 1);
            if ((!bVar7) || (uVar8 = uVar8 + 1, uVar10 - 1 <= uVar8)) break;
          }
        }
        lVar9 = *(longlong *)(param_2 + 0x140);
        uVar8 = *(uint *)(param_1 + 8);
        uVar14 = 0;
        if (uVar10 != 1) {
          do {
            if ((uVar8 < *(uint *)(lVar9 + 8)) ||
               (uVar8 - *(uint *)(lVar9 + 8) < *(uint *)(lVar9 + 0xc))) goto LAB_14032c59e;
            lVar9 = lVar9 + 0x10;
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar10 - 1);
        }
        if (uVar8 < *(uint *)(lVar9 + 0xc)) {
LAB_14032c59e:
          local_res10[0] = 8;
LAB_14032c5a6:
          FUN_1402f7f90(uVar1,*(undefined8 *)(param_2 + 0x140));
          *(undefined8 *)(param_2 + 0x140) = 0;
        }
        else {
          uVar8 = uVar8 - *(uint *)(lVar9 + 0xc);
          if (uVar8 < *(uint *)(lVar9 + 8)) {
            *(uint *)(lVar9 + 8) = uVar8;
          }
          local_res10[0] = 0;
        }
      }
      return local_res10[0];
    }
  }
  return 1;
}

