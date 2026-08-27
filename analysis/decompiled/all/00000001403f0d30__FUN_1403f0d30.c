// Function: FUN_1403f0d30
// Addr: 1403f0d30
// Size: 704 bytes


uint FUN_1403f0d30(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint local_res8 [2];
  char local_res10;
  longlong *local_res18;
  
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (((plVar3 == (longlong *)0x0) || (0x10 < *(uint *)(param_1 + 0x2c))) ||
     ((0x10105U >> (*(uint *)(param_1 + 0x2c) & 0x1f) & 1) == 0)) {
    return 0;
  }
  uVar7 = 0;
  *(longlong *)(param_1 + 0x48) = plVar3[6];
  plVar3[1] = *(longlong *)(param_1 + 8);
  plVar3[6] = 0;
  lVar12 = *(longlong *)(param_1 + 0x20);
  uVar13 = (int)plVar3[1] - (int)*plVar3;
  lVar8 = lVar12;
  if (lVar12 == 0) {
    lVar8 = *plVar3;
  }
  *(longlong *)(param_1 + 8) = lVar8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (uVar13 != 0) {
    local_res10 = param_2;
    local_res18 = plVar3;
    if (param_2 != '\0') {
      uVar11 = plVar3[1] - *plVar3;
      if (0x7f < (longlong)uVar11) {
        uVar11 = 0x80;
      }
      uVar6 = FUN_1403bf5d0(plVar3[3],*(int *)((longlong)plVar3 + 0x14) * 0xc,0xf437ffe6);
      uVar7 = FUN_1403bf5d0(*plVar3,uVar11 & 0xffffffff,0xf437ffe6);
      uVar7 = uVar7 ^ uVar6;
      if ((*(longlong *)(param_1 + 0x88) == 0) ||
         (lVar8 = FUN_1403bf7b0(param_1 + 0x60,&local_res18,uVar7), lVar8 == 0)) {
        puVar9 = (uint *)&DAT_14045dd10;
      }
      else {
        puVar9 = (uint *)(lVar8 + 0xc);
      }
      uVar6 = *puVar9;
      if (uVar6 != 0) {
        if (uVar6 < *(uint *)(param_1 + 0x54)) {
          lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar6 * 8);
        }
        else {
          DAT_1404e4f20 = DAT_14045dd10;
          lVar12 = DAT_14045dd10;
        }
        puVar10 = (undefined8 *)plVar3[5];
        puVar1 = (undefined8 *)
                 ((longlong)puVar10 + (ulonglong)*(uint *)((longlong)plVar3 + 0x24) * 0xc);
        for (; puVar10 != puVar1; puVar10 = (undefined8 *)((longlong)puVar10 + 0xc)) {
          if ((*(int *)(lVar12 + 0x24) < *(int *)(lVar12 + 0x20)) ||
             (cVar4 = FUN_1403a4c80(lVar12 + 0x20,*(int *)(lVar12 + 0x24) + 1,0), cVar4 != '\0')) {
            puVar2 = (undefined8 *)
                     (*(longlong *)(lVar12 + 0x28) + (ulonglong)*(uint *)(lVar12 + 0x24) * 0xc);
            *(uint *)(lVar12 + 0x24) = *(uint *)(lVar12 + 0x24) + 1;
            *puVar2 = *puVar10;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
          }
          else {
            DAT_1404e4f20 = DAT_14045dd10;
            DAT_1404e4f28 = (undefined4)DAT_14045dd18;
          }
        }
        FUN_1403c29e0(plVar3);
        *plVar3 = *(longlong *)(param_1 + 0x30);
        *(longlong **)(param_1 + 0x30) = plVar3;
        return uVar6;
      }
    }
    cVar4 = local_res10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - (ulonglong)uVar13;
    if (lVar12 == 0) {
      FUN_1404210f0(*(undefined8 *)(param_1 + 0x10),*plVar3,uVar13);
    }
    *plVar3 = *(longlong *)(param_1 + 0x10);
    plVar3[1] = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar13;
    if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) ||
       (cVar5 = FUN_1403a46a0(param_1 + 0x50,*(int *)(param_1 + 0x54) + 1,0), cVar5 != '\0')) {
      uVar13 = *(uint *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x54) = uVar13 + 1;
      *(longlong **)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar13 * 8) = plVar3;
    }
    else {
      DAT_1404e4f20 = DAT_14045dd10;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (-1 < *(int *)(param_1 + 0x50)) {
        uVar13 = *(int *)(param_1 + 0x54) - 1;
        if (cVar4 != '\0') {
          local_res8[0] = uVar13;
          FUN_14038def0(param_1 + 0x60,&local_res18,uVar7,local_res8,1);
        }
        if (*(int *)(param_1 + 0x2c) != 0) {
          return uVar13;
        }
        if (*(char *)(param_1 + 0x70) != '\0') {
          return uVar13;
        }
        *(undefined4 *)(param_1 + 0x2c) = 1;
        return uVar13;
      }
      *(undefined4 *)(param_1 + 0x2c) = 1;
    }
    FUN_1403c29e0(plVar3);
    return 0;
  }
  return 0;
}

