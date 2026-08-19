// Function: FUN_140396370
// Addr: 140396370
// Size: 249 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140396370(undefined8 *param_1)

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
  
  *param_1 = &PTR_UNWIND_INFO_14032ad9e_UnwindCodes_31__OffsetInProlog_140470bc8;
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
  while (((iVar6 = (int)uVar5, iVar6 != 0 && (cVar3 = FUN_1403e6c50(puVar9), cVar3 == '\0')) &&
         (iVar6 != 0))) {
    puVar9 = puVar9 + 3;
    uVar5 = (ulonglong)(iVar6 - 1);
  }
  uVar10 = (undefined4)DAT_14045ddf0;
  uVar11 = (undefined4)((ulonglong)DAT_14045ddf0 >> 0x20);
  uVar12 = (undefined4)DAT_14045dde0;
  uVar13 = DAT_14045dde0._4_4_;
  uVar14 = _DAT_14045dde8;
  uVar15 = _DAT_14045ddec;
  do {
    uVar5 = uVar8;
    if ((puVar7 == puVar9) && ((int)uVar5 == iVar6)) {
      *(undefined4 *)(param_1 + 7) = 0xffff2153;
      lVar1 = param_1[8];
      if (lVar1 != 0) {
        FUN_1403c32f0(lVar1);
        func_0x0001402bf8e0(lVar1);
        return;
      }
      if (param_1[0xc] == 0) {
        *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
        (*DAT_140426568)(param_1 + 2);
        return;
      }
      func_0x0001402bf8e0();
      return;
    }
    puVar4 = puVar7;
    if ((int)uVar5 == 0) {
      _DAT_1404e5000 = CONCAT44(uVar11,uVar10);
      puVar4 = &DAT_1404e4ff0;
      DAT_1404e4ff0._0_4_ = uVar12;
      DAT_1404e4ff0._4_4_ = uVar13;
      DAT_1404e4ff8._0_4_ = uVar14;
      DAT_1404e4ff8._4_4_ = uVar15;
    }
    puVar4 = (undefined8 *)func_0x0001403cfe00(puVar4);
    (**(code **)(*(longlong *)*puVar4 + 0x10))();
    uVar2 = DAT_14045ddf0;
    uVar15 = _DAT_14045ddec;
    uVar14 = _DAT_14045dde8;
    uVar13 = DAT_14045dde0._4_4_;
    uVar12 = (undefined4)DAT_14045dde0;
    uVar10 = (undefined4)DAT_14045ddf0;
    uVar11 = (undefined4)((ulonglong)DAT_14045ddf0 >> 0x20);
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
        DAT_1404e4ff0._0_4_ = uVar12;
        DAT_1404e4ff0._4_4_ = uVar13;
        DAT_1404e4ff8._0_4_ = uVar14;
        DAT_1404e4ff8._4_4_ = uVar15;
        _DAT_1404e5000 = uVar2;
        puVar4 = &DAT_1404e4ff0;
      }
      cVar3 = FUN_1403e6c50(puVar4);
    } while (cVar3 == '\0');
  } while( true );
}

