// Function: FUN_1403962a0
// Addr: 1403962a0
// Size: 371 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403962a0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  *param_1 = DWriteFontFileLoader::vftable;
  puVar7 = (undefined8 *)param_1[0xc];
  uVar5 = 0;
  uVar8 = (ulonglong)(*(int *)((longlong)param_1 + 0x54) + 1);
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    uVar8 = uVar5;
  }
  while (((iVar6 = (int)uVar8, iVar6 != 0 && ((*(byte *)(puVar7 + 1) & 1) == 0)) && (iVar6 != 0))) {
    puVar7 = puVar7 + 3;
    uVar8 = (ulonglong)(iVar6 - 1);
  }
  puVar9 = puVar7 + uVar8 * 3;
  while (((iVar6 = (int)uVar5, iVar6 != 0 && (cVar3 = FUN_1403e6b80(puVar9), cVar3 == '\0')) &&
         (iVar6 != 0))) {
    puVar9 = puVar9 + 3;
    uVar5 = (ulonglong)(iVar6 - 1);
  }
  uVar10 = (undefined4)DAT_14045dd20;
  uVar11 = (undefined4)((ulonglong)DAT_14045dd20 >> 0x20);
  uVar12 = (undefined4)DAT_14045dd10;
  uVar13 = DAT_14045dd10._4_4_;
  uVar14 = (undefined4)DAT_14045dd18;
  uVar15 = DAT_14045dd18._4_4_;
  do {
    uVar5 = uVar8;
    if ((puVar7 == puVar9) && ((int)uVar5 == iVar6)) {
      *(undefined4 *)(param_1 + 7) = 0xffff2153;
      lVar1 = param_1[8];
      if (lVar1 != 0) {
        FUN_1403c3220(lVar1);
        thunk_FUN_1402d9040(lVar1);
        param_1[8] = 0;
      }
      if (param_1[0xc] != 0) {
        thunk_FUN_1402d9040();
        param_1[0xc] = 0;
      }
      *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014039640c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
      return;
    }
    puVar4 = puVar7;
    if ((int)uVar5 == 0) {
      _DAT_1404e4f30 = CONCAT44(uVar11,uVar10);
      puVar4 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = uVar12;
      DAT_1404e4f20._4_4_ = uVar13;
      DAT_1404e4f28 = uVar14;
      _DAT_1404e4f2c = uVar15;
    }
    puVar4 = (undefined8 *)FUN_1403cfd30(puVar4);
    (**(code **)(*(longlong *)*puVar4 + 0x10))();
    uVar2 = DAT_14045dd20;
    uVar15 = DAT_14045dd18._4_4_;
    uVar14 = (undefined4)DAT_14045dd18;
    uVar13 = DAT_14045dd10._4_4_;
    uVar12 = (undefined4)DAT_14045dd10;
    uVar10 = (undefined4)DAT_14045dd20;
    uVar11 = (undefined4)((ulonglong)DAT_14045dd20 >> 0x20);
    uVar8 = uVar5;
    do {
      if ((int)uVar5 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulonglong)((int)uVar5 - 1);
        puVar7 = puVar7 + 3;
        uVar8 = uVar5;
      }
      if ((int)uVar8 == 0) break;
      puVar4 = puVar7;
      if ((int)uVar5 == 0) {
        DAT_1404e4f20._0_4_ = uVar12;
        DAT_1404e4f20._4_4_ = uVar13;
        DAT_1404e4f28 = uVar14;
        _DAT_1404e4f2c = uVar15;
        _DAT_1404e4f30 = uVar2;
        puVar4 = &DAT_1404e4f20;
      }
      cVar3 = FUN_1403e6b80(puVar4);
    } while (cVar3 == '\0');
  } while( true );
}

