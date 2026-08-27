// Function: FUN_1401e4000
// Addr: 1401e4000
// Size: 694 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e4000(ulonglong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 local_res10;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined4 local_58;
  int *local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined8 *puStack_30;
  undefined8 *local_28;
  
  iVar4 = FUN_140290d80(&DAT_1404dfb40);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb8c == 0x7fffffff) {
    DAT_1404dfb8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  puVar8 = auStack_78;
  if ((param_1[7] == 0) || (puVar8 = auStack_78, DAT_1404e8358 != 0)) goto LAB_1401e424c;
  puVar1 = (undefined8 *)param_1[6];
  uVar9 = 0;
  local_28 = (undefined8 *)0x0;
  local_38 = 0;
  puStack_30 = (undefined8 *)0x0;
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar7 = puVar2[2];
    local_res10 = 0;
    *(undefined1 *)(lVar7 + 0x84) = 1;
    FUN_1401e2990(lVar7,&local_res10);
    if (puStack_30 == local_28) {
      FUN_14005ffa0(&local_38,puStack_30,&local_res10);
    }
    else {
      *puStack_30 = local_res10;
      puStack_30 = puStack_30 + 1;
    }
  }
  puVar5 = (ulonglong *)FUN_14028af20(0x30);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  if ((longlong)puStack_30 - local_38 == 0) {
LAB_1401e4185:
    puVar5[3] = *param_1;
    puVar5[4] = (ulonglong)param_1;
    puVar5[5] = (ulonglong)FUN_1401e2bc0;
    local_50 = &local_40;
    local_58 = 0;
    local_48 = FUN_1402ca17c(0,0,FUN_1401e4ca0,puVar5);
    if (local_48 == 0) {
      local_40 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_140290d30(6);
    }
    if (DAT_1404e8358 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140015110();
    }
    DAT_1404e8358 = local_40;
    _DAT_1404e835c = local_3c;
    puVar8 = auStack_78;
    _DAT_1404e8350 = local_48;
    if (local_38 == 0) goto LAB_1401e424c;
    lVar7 = local_38;
    puVar8 = auStack_78;
    if ((0xfff < (ulonglong)(((longlong)local_28 - local_38 >> 3) * 8)) &&
       (lVar7 = *(longlong *)(local_38 + -8), puVar8 = auStack_78,
       0x1f < (local_38 - *(longlong *)(local_38 + -8)) - 8U)) goto LAB_1401e422e;
  }
  else {
    uVar6 = (longlong)puStack_30 - local_38 >> 3;
    if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140013050();
    }
    uVar6 = uVar6 * 8;
    if (uVar6 == 0) {
LAB_1401e4154:
      *puVar5 = uVar9;
      puVar5[1] = uVar9;
      puVar5[2] = uVar6 + uVar9;
      uVar6 = (longlong)puStack_30 - local_38;
      FUN_1404210f0(uVar9,local_38,uVar6);
      puVar5[1] = (uVar6 & 0xfffffffffffffff8) + uVar9;
      goto LAB_1401e4185;
    }
    if (uVar6 < 0x1000) {
      uVar9 = FUN_14028af20(uVar6);
      goto LAB_1401e4154;
    }
    if (uVar6 + 0x27 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_140017370();
    }
    lVar7 = FUN_14028af20();
    if (lVar7 != 0) {
      uVar9 = lVar7 + 0x27U & 0xffffffffffffffe0;
      *(longlong *)(uVar9 - 8) = lVar7;
      goto LAB_1401e4154;
    }
LAB_1401e422e:
    lVar7 = 5;
    pcVar3 = (code *)swi(0x29);
    (*pcVar3)(5);
    puVar8 = auStack_70;
  }
  *(undefined8 *)(puVar8 + -8) = 0x1401e4240;
  thunk_FUN_14028af80(lVar7);
  local_28 = (undefined8 *)0x0;
  local_38 = 0;
  puStack_30 = (undefined8 *)0x0;
LAB_1401e424c:
  *(undefined8 *)(puVar8 + -8) = 0x1401e4258;
  FUN_140290ea0(&DAT_1404dfb40);
  return;
}

