// Function: FUN_1403f0e00
// Addr: 1403f0e00
// Size: 282 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1403f0e00(longlong param_1,char param_2)

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
  uint auStackX_8 [2];
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
      uVar6 = func_0x0001403bf6a0(plVar3[3],*(int *)((longlong)plVar3 + 0x14) * 0xc,0xf437ffe6);
      uVar7 = func_0x0001403bf6a0(*plVar3,uVar11 & 0xffffffff,0xf437ffe6);
      uVar7 = uVar7 ^ uVar6;
      if ((*(longlong *)(param_1 + 0x88) == 0) ||
         (lVar8 = FUN_1403bf880(param_1 + 0x60,&local_res18,uVar7), lVar8 == 0)) {
        puVar9 = (uint *)&DAT_14045dde0;
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
          DAT_1404e4ff0 = DAT_14045dde0;
          lVar12 = DAT_14045dde0;
        }
        puVar10 = (undefined8 *)plVar3[5];
        puVar1 = (undefined8 *)
                 ((longlong)puVar10 + (ulonglong)*(uint *)((longlong)plVar3 + 0x24) * 0xc);
        for (; puVar10 != puVar1; puVar10 = (undefined8 *)((longlong)puVar10 + 0xc)) {
          if ((*(int *)(lVar12 + 0x24) < *(int *)(lVar12 + 0x20)) ||
             (cVar4 = FUN_1403a4d50(lVar12 + 0x20,*(int *)(lVar12 + 0x24) + 1,0), cVar4 != '\0')) {
            puVar2 = (undefined8 *)
                     (*(longlong *)(lVar12 + 0x28) + (ulonglong)*(uint *)(lVar12 + 0x24) * 0xc);
            *(uint *)(lVar12 + 0x24) = *(uint *)(lVar12 + 0x24) + 1;
            *puVar2 = *puVar10;
            *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
          }
          else {
            DAT_1404e4ff0 = DAT_14045dde0;
            DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
          }
        }
        FUN_1403c2ab0(plVar3);
        *plVar3 = *(longlong *)(param_1 + 0x30);
        *(longlong **)(param_1 + 0x30) = plVar3;
        return uVar6;
      }
    }
    cVar4 = local_res10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - (ulonglong)uVar13;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(*(undefined8 *)(param_1 + 0x10),*plVar3,uVar13);
    }
    *plVar3 = *(longlong *)(param_1 + 0x10);
    plVar3[1] = *(longlong *)(param_1 + 0x10) + (ulonglong)uVar13;
    if ((*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0x50)) ||
       (cVar5 = FUN_1403a4770(param_1 + 0x50,*(int *)(param_1 + 0x54) + 1,0), cVar5 != '\0')) {
      uVar13 = *(uint *)(param_1 + 0x54);
      *(uint *)(param_1 + 0x54) = uVar13 + 1;
      *(longlong **)(*(longlong *)(param_1 + 0x58) + (ulonglong)uVar13 * 8) = plVar3;
    }
    else {
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (-1 < *(int *)(param_1 + 0x50)) {
        uVar13 = *(int *)(param_1 + 0x54) - 1;
        if (cVar4 != '\0') {
          auStackX_8[0] = uVar13;
          func_0x00014038dfc0(param_1 + 0x60,&local_res18,uVar7,auStackX_8,1);
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
    FUN_1403c2ab0(plVar3);
    return 0;
  }
  return 0;
}

