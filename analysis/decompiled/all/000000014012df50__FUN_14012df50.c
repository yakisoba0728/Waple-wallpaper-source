// Function: FUN_14012df50
// Addr: 14012df50
// Size: 1054 bytes


undefined8 FUN_14012df50(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  POINT pt;
  undefined2 uVar3;
  LPVOID pvVar4;
  HRESULT HVar5;
  int iVar6;
  int cbMultiByte;
  undefined8 uVar7;
  undefined8 uVar8;
  LPCWSTR ***ppppWVar9;
  char *pcVar10;
  longlong lVar11;
  LPSTR ***ppppCVar12;
  ulonglong uVar13;
  uint uVar14;
  uint local_res10 [2];
  LPVOID local_res18;
  longlong *local_res20;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  LPCWSTR **local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong local_120;
  int local_118;
  int iStack_114;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  LPSTR **local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong local_98;
  HMONITOR local_90;
  undefined4 local_88;
  LPSTR **local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  LPSTR **local_58;
  undefined8 uStack_50;
  
  HVar5 = CoCreateInstance((IID *)&DAT_14048acd0,(LPUNKNOWN)0x0,4,(IID *)&DAT_14048acc0,&local_res20
                          );
  if (-1 < HVar5) {
    (**(code **)(*local_res20 + 0x30))(local_res20,local_res10);
    uVar14 = 0;
    if (local_res10[0] != 0) {
      do {
        uVar8 = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = (LPSTR **)0x0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b8 = 0xf;
        local_d0 = 0;
        local_a0 = 0;
        local_98 = 0xf;
        local_b0 = (char *)0x0;
        local_88 = 0;
        iVar6 = (**(code **)(*local_res20 + 0x28))(local_res20,uVar14,&local_res18);
        if (-1 < iVar6) {
          iVar6 = (**(code **)(*local_res20 + 0x38))(local_res20,local_res18,&local_148);
          if (iVar6 < 0) {
            CoTaskMemFree(local_res18);
          }
          else {
            local_118 = (local_140 + local_148) / 2;
            iStack_114 = (local_13c + local_144) / 2;
            pt.y = iStack_114;
            pt.x = local_118;
            local_90 = MonitorFromPoint(pt,2);
            iVar2 = local_144;
            iVar6 = local_148;
            pvVar4 = local_res18;
            local_100 = local_140 - local_148;
            local_108 = local_148;
            local_fc = local_13c - local_144;
            local_104 = local_144;
            local_138 = (LPCWSTR **)0x0;
            uStack_130 = 0;
            local_128 = 0;
            local_120 = 0;
            uVar7 = FUN_1402d6aa0(local_res18);
            FUN_140016170(&local_138,pvVar4,uVar7);
            if (local_128 == 0) {
LAB_14012e197:
              local_d8 = 0xf;
              uStack_50 = 0;
              local_58 = (LPSTR **)0x0;
            }
            else {
              ppppWVar9 = &local_138;
              if (7 < local_120) {
                ppppWVar9 = (LPCWSTR ***)local_138;
              }
              cbMultiByte = WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar9,(int)local_128,
                                                (LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
              if (cbMultiByte < 1) goto LAB_14012e197;
              FUN_140016940(&local_78,(longlong)cbMultiByte,0);
              ppppCVar12 = &local_78;
              if (0xf < uStack_60) {
                ppppCVar12 = (LPSTR ***)local_78;
              }
              ppppWVar9 = &local_138;
              if (7 < local_120) {
                ppppWVar9 = (LPCWSTR ***)local_138;
              }
              WideCharToMultiByte(0xfde9,0,(LPCWSTR)ppppWVar9,(int)local_128,(LPSTR)ppppCVar12,
                                  cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
              local_58 = local_78;
              uStack_50 = uStack_70;
              local_d8 = uStack_60;
              uVar8 = local_68;
            }
            local_f0 = local_58;
            uStack_e8 = uStack_50;
            local_e0 = uVar8;
            if (7 < local_120) {
              uVar13 = local_120 * 2 + 2;
              ppppWVar9 = (LPCWSTR ***)local_138;
              if (0xfff < uVar13) {
                ppppWVar9 = (LPCWSTR ***)local_138[-1];
                if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppWVar9)))
                goto LAB_14012e366;
                uVar13 = local_120 * 2 + 0x29;
              }
              thunk_FUN_14028af80(ppppWVar9,uVar13);
            }
            local_b0 = (char *)FUN_14028af20(0x20);
            uVar3 = s_ui_monitor_generic_14048ab60._16_2_;
            uVar8 = s_ui_monitor_generic_14048ab60._8_8_;
            *(undefined8 *)local_b0 = s_ui_monitor_generic_14048ab60._0_8_;
            *(undefined8 *)(local_b0 + 8) = uVar8;
            *(undefined2 *)(local_b0 + 0x10) = uVar3;
            local_b0[0x12] = '\0';
            if ((int)param_1[1] <= iVar6) {
              iVar6 = (int)param_1[1];
            }
            local_a0 = 0x12;
            local_98 = 0x1f;
            if (*(int *)((longlong)param_1 + 0xc) <= iVar2) {
              iVar2 = *(int *)((longlong)param_1 + 0xc);
            }
            *(int *)(param_1 + 1) = iVar6;
            *(int *)((longlong)param_1 + 0xc) = iVar2;
            FUN_140130840(*param_1,&local_108);
            CoTaskMemFree(local_res18);
            if (0xf < local_98) {
              uVar13 = local_98 + 1;
              pcVar10 = local_b0;
              if (0xfff < uVar13) {
                pcVar10 = *(char **)(local_b0 + -8);
                if ((char *)0x1f < local_b0 + (-8 - (longlong)pcVar10)) goto LAB_14012e366;
                uVar13 = local_98 + 0x28;
              }
              thunk_FUN_14028af80(pcVar10,uVar13);
            }
            if (0xf < local_b8) {
              uVar13 = local_b8 + 1;
              lVar11 = local_d0;
              if (0xfff < uVar13) {
                lVar11 = *(longlong *)(local_d0 + -8);
                if (0x1f < (local_d0 - lVar11) - 8U) goto LAB_14012e366;
                uVar13 = local_b8 + 0x28;
              }
              thunk_FUN_14028af80(lVar11,uVar13);
            }
            if (0xf < local_d8) {
              uVar13 = local_d8 + 1;
              ppppCVar12 = (LPSTR ***)local_f0;
              if (0xfff < uVar13) {
                ppppCVar12 = (LPSTR ***)local_f0[-1];
                if ((LPSTR)0x1f < (LPSTR)((longlong)local_f0 + (-8 - (longlong)ppppCVar12))) {
LAB_14012e366:
                  pcVar1 = (code *)swi(0x29);
                  (*pcVar1)(5);
                  pcVar1 = (code *)swi(3);
                  uVar8 = (*pcVar1)();
                  return uVar8;
                }
                uVar13 = local_d8 + 0x28;
              }
              thunk_FUN_14028af80(ppppCVar12,uVar13);
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_res10[0]);
    }
    (**(code **)(*local_res20 + 0x10))();
  }
  lVar11 = ((longlong *)*param_1)[1];
  return CONCAT71((int7)((ulonglong)lVar11 >> 8),*(longlong *)*param_1 != lVar11);
}

