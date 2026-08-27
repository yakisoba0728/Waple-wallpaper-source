// Function: FUN_1400fe3a0
// Addr: 1400fe3a0
// Size: 760 bytes


bool FUN_1400fe3a0(longlong *param_1,undefined8 param_2,char *param_3)

{
  undefined8 *puVar1;
  HWND hWnd;
  code *pcVar2;
  longlong lVar3;
  undefined1 *puVar4;
  BOOL BVar5;
  int iVar6;
  undefined8 uVar7;
  size_t sVar8;
  LPCSTR ***ppppCVar9;
  LPWSTR ***ppppWVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined1 auStackY_e8 [8];
  undefined1 auStackY_e0 [24];
  LPWSTR **local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  LPCSTR **local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong local_80;
  LPWSTR **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined1 local_50 [40];
  
  puVar13 = auStackY_e8;
  FUN_14010a520();
  (**(code **)(*param_1 + 0x98))(param_1,local_50);
  uVar7 = FUN_140086de0(local_50,"general","");
  uVar7 = FUN_140085090(&local_78,uVar7);
  FUN_1400ff750(param_1,uVar7);
  uVar7 = FUN_140086de0(local_50,"wproperties","");
  uVar7 = FUN_140085090(&local_78,uVar7);
  FUN_1400ffcb0(param_1,uVar7);
  *(uint *)((longlong)param_1 + 0x17c) = *(uint *)((longlong)param_1 + 0x17c) & 0xfffffffe;
  BVar5 = IsWindow((HWND)param_1[0x2d]);
  puVar4 = auStackY_e8;
  if (BVar5 != 0) {
    lVar3 = param_1[0x4f];
    local_98 = (LPCSTR **)0x0;
    uStack_90 = 0;
    local_88 = 0;
    local_80 = 0;
    sVar8 = strlen(param_3);
    FUN_140017480(&local_98,param_3,sVar8);
    if (local_88 == 0) {
LAB_1400fe51d:
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = (LPWSTR **)0x0;
      uStack_a0 = 7;
    }
    else {
      ppppCVar9 = &local_98;
      if (0xf < local_80) {
        ppppCVar9 = (LPCSTR ***)local_98;
      }
      iVar6 = MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar9,(int)local_88,(LPWSTR)0x0,0);
      if (iVar6 < 1) goto LAB_1400fe51d;
      local_68 = 0;
      uStack_60 = 0;
      local_78 = (LPWSTR **)0x0;
      uStack_70 = 0;
      FUN_1400167e0(&local_78,0,(longlong)iVar6);
      ppppWVar10 = &local_78;
      if (7 < uStack_60) {
        ppppWVar10 = (LPWSTR ***)local_78;
      }
      ppppCVar9 = &local_98;
      if (0xf < local_80) {
        ppppCVar9 = (LPCSTR ***)local_98;
      }
      MultiByteToWideChar(0xfde9,0,(LPCSTR)ppppCVar9,(int)local_88,(LPWSTR)ppppWVar10,iVar6);
      local_a8 = local_68;
      uStack_a0 = uStack_60;
      local_b8 = local_78;
      uStack_b0 = uStack_70;
    }
    if (local_80 < 0x10) {
LAB_1400fe575:
      if ((((int)lVar3 < 0) || (puVar1 = (undefined8 *)param_1[0x2c], puVar1 == (undefined8 *)0x0))
         || (param_1[0x56] != 0)) {
LAB_1400fe5ca:
        ppppWVar10 = &local_b8;
        if (7 < uStack_a0) {
          ppppWVar10 = (LPWSTR ***)local_b8;
        }
        FUN_140100cf0(param_1,ppppWVar10);
      }
      else {
        ppppWVar10 = &local_b8;
        if (7 < uStack_a0) {
          ppppWVar10 = (LPWSTR ***)local_b8;
        }
        iVar6 = (**(code **)*puVar1)(puVar1,ppppWVar10);
        if (iVar6 < 0) {
          if ((longlong *)param_1[0x2c] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x2c] + 0x20))();
            param_1[0x2c] = 0;
          }
          goto LAB_1400fe5ca;
        }
      }
      BVar5 = IsWindow((HWND)param_1[0x2d]);
      if (BVar5 != 0) {
        InvalidateRect((HWND)param_1[0x2d],(RECT *)0x0,0);
      }
      if (7 < uStack_a0) {
        uVar11 = uStack_a0 * 2 + 2;
        ppppWVar10 = (LPWSTR ***)local_b8;
        if (0xfff < uVar11) {
          ppppWVar10 = (LPWSTR ***)local_b8[-1];
          if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppWVar10)))
          goto LAB_1400fe646;
          uVar11 = uStack_a0 * 2 + 0x29;
        }
        thunk_FUN_14028af80(ppppWVar10,uVar11);
      }
      bVar14 = true;
      goto LAB_1400fe67e;
    }
    uVar11 = local_80 + 1;
    ppppCVar9 = (LPCSTR ***)local_98;
    if (uVar11 < 0x1000) {
LAB_1400fe56c:
      thunk_FUN_14028af80(ppppCVar9,uVar11);
      goto LAB_1400fe575;
    }
    ppppCVar9 = (LPCSTR ***)local_98[-1];
    if ((ulonglong)((longlong)local_98 + (-8 - (longlong)ppppCVar9)) < 0x20) {
      uVar11 = local_80 + 0x28;
      goto LAB_1400fe56c;
    }
LAB_1400fe646:
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar4 = auStackY_e0;
  }
  puVar13 = puVar4;
  plVar12 = param_1 + 0x20;
  if (0xf < (ulonglong)param_1[0x23]) {
    plVar12 = (longlong *)*plVar12;
  }
  *(undefined8 *)(puVar13 + -8) = 0x1400fe66c;
  FUN_140100ac0(param_1,plVar12,0);
  hWnd = (HWND)param_1[0x2d];
  *(undefined8 *)(puVar13 + -8) = 0x1400fe679;
  BVar5 = IsWindow(hWnd);
  bVar14 = BVar5 != 0;
LAB_1400fe67e:
  *(undefined8 *)(puVar13 + -8) = 0x1400fe687;
  FUN_140085440(local_50);
  return bVar14;
}

