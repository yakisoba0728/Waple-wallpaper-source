// Function: FUN_1400cedd0
// Addr: 1400cedd0
// Size: 841 bytes


longlong * FUN_1400cedd0(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  LPVOID pvVar3;
  LPSTR **pppCVar4;
  int iVar5;
  undefined8 uVar6;
  LPSTR ***ppppCVar7;
  LPCWSTR ***ppppWVar8;
  undefined8 *_Buf2;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_res20 [2];
  undefined1 auStackY_f8 [8];
  undefined1 auStackY_f0 [24];
  longlong *local_b8;
  longlong *local_b0;
  LPVOID local_a8;
  LPCWSTR **local_a0;
  undefined8 uStack_98;
  longlong local_90;
  ulonglong local_88;
  int local_80 [2];
  LPSTR **local_78;
  undefined8 uStack_70;
  size_t local_68;
  ulonglong uStack_60;
  LPSTR **local_58;
  undefined8 uStack_50;
  size_t local_48;
  ulonglong uStack_40;
  
  puVar11 = auStackY_f8;
  uVar12 = 0;
  local_80[1] = 1;
  local_b0 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  local_a8 = (LPVOID)0x0;
  local_80[0] = 0;
  while( true ) {
    uVar13 = 0;
    iVar1 = local_80[(int)uVar12];
    iVar5 = (**(code **)(*param_2 + 0x18))(param_2,iVar1,1,&local_b0);
    if ((iVar5 < 0) || (iVar5 = (**(code **)(*local_b0 + 0x18))(local_b0,local_res20), iVar5 < 0))
    break;
    if (local_res20[0] != 0) {
      do {
        iVar5 = (**(code **)(*local_b0 + 0x20))(local_b0,uVar13,&local_b8);
        if ((iVar5 < 0) ||
           (iVar5 = (**(code **)(*local_b8 + 0x28))(local_b8,&local_a8), pvVar3 = local_a8,
           iVar5 < 0)) goto LAB_1400cf0d2;
        local_90 = 0;
        local_a0 = (LPCWSTR **)0x0;
        uStack_98 = 0;
        local_88 = 0;
        uVar6 = FUN_1402d6aa0(local_a8);
        FUN_140016170(&local_a0,pvVar3,uVar6);
        if (local_90 == 0) {
LAB_1400cef7f:
          local_68 = 0;
          uStack_70 = 0;
          uStack_60 = 0xf;
          local_78 = (LPSTR **)0x0;
        }
        else {
          ppppWVar8 = &local_a0;
          if (7 < local_88) {
            ppppWVar8 = (LPCWSTR ***)local_a0;
          }
          iVar5 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar8,(int)local_90,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar5 < 1) goto LAB_1400cef7f;
          FUN_140016940(&local_58,(longlong)iVar5,0);
          ppppCVar7 = &local_58;
          if (0xf < uStack_40) {
            ppppCVar7 = (LPSTR ***)local_58;
          }
          ppppWVar8 = &local_a0;
          if (7 < local_88) {
            ppppWVar8 = (LPCWSTR ***)local_a0;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar8,(int)local_90,(LPSTR)ppppCVar7,iVar5,
                              (LPCSTR)0x0,(LPBOOL)0x0);
          local_68 = local_48;
          uStack_60 = uStack_40;
          local_78 = local_58;
          uStack_70 = uStack_50;
        }
        uVar10 = uStack_60;
        pppCVar4 = local_78;
        _Buf2 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          _Buf2 = (undefined8 *)*param_1;
        }
        ppppCVar7 = &local_78;
        if (0xf < uStack_60) {
          ppppCVar7 = (LPSTR ***)local_78;
        }
        if (local_68 == param_1[2]) {
          if (local_68 == 0) {
            bVar14 = true;
          }
          else {
            iVar5 = memcmp(ppppCVar7,_Buf2,local_68);
            bVar14 = iVar5 == 0;
          }
        }
        else {
          bVar14 = false;
        }
        if (0xf < uVar10) {
          uVar9 = uVar10 + 1;
          ppppCVar7 = (LPSTR ***)pppCVar4;
          if (uVar9 < 0x1000) {
LAB_1400cf008:
            thunk_FUN_14028af80(ppppCVar7,uVar9);
            goto LAB_1400cf010;
          }
          ppppCVar7 = (LPSTR ***)pppCVar4[-1];
          if ((LPSTR)((longlong)pppCVar4 + (-8 - (longlong)ppppCVar7)) < (LPSTR)0x20) {
            uVar9 = uVar10 + 0x28;
            goto LAB_1400cf008;
          }
LAB_1400cf0b9:
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar11 = auStackY_f0;
LAB_1400cf0c0:
          *(bool *)param_3 = iVar1 == 0;
          goto LAB_1400cf0e1;
        }
LAB_1400cf010:
        if (7 < local_88) {
          uVar10 = local_88 * 2 + 2;
          ppppWVar8 = (LPCWSTR ***)local_a0;
          if (0xfff < uVar10) {
            ppppWVar8 = (LPCWSTR ***)local_a0[-1];
            if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppWVar8)))
            goto LAB_1400cf0b9;
            uVar10 = local_88 * 2 + 0x29;
          }
          thunk_FUN_14028af80(ppppWVar8,uVar10);
        }
        if (bVar14) goto LAB_1400cf0c0;
        CoTaskMemFree(local_a8);
        local_a8 = (LPVOID)0x0;
        if (local_b8 != (longlong *)0x0) {
          (**(code **)(*local_b8 + 0x10))();
          local_b8 = (longlong *)0x0;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < local_res20[0]);
    }
    if (local_b0 != (longlong *)0x0) {
      (**(code **)(*local_b0 + 0x10))(local_b0);
      local_b0 = (longlong *)0x0;
    }
    uVar12 = uVar12 + 1;
    if (1 < uVar12) break;
  }
LAB_1400cf0d2:
  puVar11 = auStackY_f8;
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
    local_b8 = (longlong *)0x0;
    puVar11 = auStackY_f8;
  }
LAB_1400cf0e1:
  *(undefined8 *)(puVar11 + -8) = 0x1400cf0eb;
  CoTaskMemFree(local_a8);
  if (local_b0 != (longlong *)0x0) {
    pcVar2 = *(code **)(*local_b0 + 0x10);
    *(undefined8 *)(puVar11 + -8) = 0x1400cf0fa;
    (*pcVar2)();
  }
  return local_b8;
}

