// Function: FUN_14032b800
// Addr: 14032b800
// Size: 888 bytes


int FUN_14032b800(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  uint uVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  int local_res18 [2];
  longlong local_res20;
  longlong local_48;
  
  uVar12 = 0;
  local_res20 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  local_48 = 0;
  if (*(uint *)(param_2 + 0x13c) != 0) {
    do {
      piVar11 = (int *)(uVar12 * 0x10 + *(longlong *)(param_2 + 0x140));
      if (*piVar11 == 1) {
        if (((uint)piVar11[3] < *(uint *)(param_1 + 0xc)) ||
           (iVar4 = FUN_1402f5c90(param_1,piVar11[3] - *(uint *)(param_1 + 0xc)), iVar4 != 0))
        goto LAB_14032b9d0;
        uVar13 = piVar11[2];
        local_res18[0] = 0;
        uVar5 = FUN_1402f5970(param_1,local_res18);
        if ((local_res18[0] != 0) || ((uVar5 & 0xffffff00) != 0)) goto LAB_14032b86e;
        uVar5 = uVar5 & 4;
        if (uVar5 == 0) {
          uVar6 = FUN_1402f5970(param_1,local_res18);
        }
        else {
          uVar6 = FUN_1402f58c0();
        }
        if (local_res18[0] != 0) goto LAB_14032b86e;
        if (uVar13 / 9 < uVar6) goto LAB_14032b919;
        uVar14 = uVar6;
        if (0x100 < uVar6) {
          uVar14 = 0x100;
        }
        *(uint *)(param_2 + 0x19c) = uVar14;
        local_res20 = FUN_1402f7ff0(uVar3,0xc,0,uVar14,0,local_res18);
        if (local_res18[0] != 0) goto LAB_14032b86e;
        uVar12 = 0;
        iVar4 = local_res18[0];
        if (uVar14 != 0) goto LAB_14032b980;
        goto LAB_14032b9b8;
      }
      uVar13 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(param_2 + 0x13c));
  }
  local_res18[0] = 3;
  goto LAB_14032b86e;
  while( true ) {
    uVar10 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar10;
    local_res18[0] = 0;
    iVar4 = 0;
    if (uVar14 <= uVar10) break;
LAB_14032b980:
    local_res18[0] = iVar4;
    puVar9 = &DAT_14043fe30;
    if (uVar5 == 0) {
      puVar9 = &DAT_14043fe18;
    }
    local_res18[0] = FUN_1402f5610(param_1,puVar9,local_res20 + uVar12 * 0xc);
    if (local_res18[0] != 0) goto LAB_14032b86e;
  }
LAB_14032b9b8:
  local_res18[0] = FUN_1402f5c90(param_1,(uVar6 - uVar14) * 9);
  if (local_res18[0] == 0) {
    iVar4 = 0;
    if (((uVar6 & 3) == 0) || (iVar4 = FUN_1402f5c90(param_1,4 - (uVar6 & 3)), iVar4 == 0)) {
      local_res18[0] = iVar4;
      if (uVar5 == 0) {
        uVar5 = FUN_1402f5970(param_1,local_res18);
      }
      else {
        uVar5 = FUN_1402f58c0();
      }
      if (local_res18[0] == 0) {
        if (uVar13 + uVar6 * -9 < uVar5) {
LAB_14032b919:
          local_res18[0] = 8;
        }
        else {
          if (0x1000100 < uVar5) {
            uVar5 = 0x1000100;
          }
          local_48 = FUN_1402f7fa0(uVar3,uVar5 + 1,local_res18);
          if ((local_res18[0] == 0) &&
             (local_res18[0] = FUN_1402f54b0(param_1,local_48,(ulonglong)uVar5), local_res18[0] == 0
             )) {
            *(undefined1 *)((ulonglong)uVar5 + local_48) = 0;
            lVar7 = FUN_1402f80b0(uVar3,0x18,0,uVar14,0,local_res18);
            if (local_res18[0] == 0) {
              uVar12 = 0;
              *(longlong *)(param_2 + 0x1a0) = lVar7;
              if (uVar14 != 0) {
                do {
                  lVar1 = local_res20 + uVar12 * 0xc;
                  uVar13 = *(uint *)(local_res20 + uVar12 * 0xc);
                  if (((int)uVar13 < 0) || (uVar5 < uVar13)) {
LAB_14032bb6c:
                    local_res18[0] = 9;
                    goto LAB_14032b86e;
                  }
                  puVar2 = (undefined8 *)(lVar7 + uVar12 * 0x18);
                  uVar8 = FUN_1402f8160(uVar3,(int)uVar13 + local_48,local_res18);
                  *puVar2 = uVar8;
                  if (local_res18[0] != 0) goto LAB_14032b86e;
                  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(lVar1 + 4);
                  uVar13 = *(uint *)(lVar1 + 8);
                  if (*(char *)(lVar1 + 4) == '\0') {
                    *(uint *)(puVar2 + 2) = uVar13;
                  }
                  else {
                    if (((int)uVar13 < 0) || (uVar5 < uVar13)) goto LAB_14032bb6c;
                    uVar8 = FUN_1402f8160(uVar3,(int)uVar13 + local_48,local_res18);
                    puVar2[2] = uVar8;
                    if (local_res18[0] != 0) goto LAB_14032b86e;
                  }
                  uVar13 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar13;
                } while (uVar13 < uVar14);
              }
              local_res18[0] = 0;
            }
          }
        }
      }
      goto LAB_14032b86e;
    }
  }
LAB_14032b9d0:
  local_res18[0] = 0x53;
LAB_14032b86e:
  FUN_1402f7f90(uVar3,local_res20);
  FUN_1402f7f90(uVar3,local_48);
  return local_res18[0];
}

