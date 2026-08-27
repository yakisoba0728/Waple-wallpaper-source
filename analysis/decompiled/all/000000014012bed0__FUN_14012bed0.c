// Function: FUN_14012bed0
// Addr: 14012bed0
// Size: 2153 bytes


void FUN_14012bed0(longlong *****param_1)

{
  byte *pbVar1;
  code *pcVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  LPCWSTR ****pppppWVar7;
  ulonglong uVar8;
  longlong *****ppppplVar9;
  longlong *****ppppplVar10;
  longlong *****ppppplVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong *****ppppplVar14;
  longlong *****ppppplVar15;
  longlong ****pppplVar16;
  longlong *****unaff_R12;
  longlong *****unaff_R13;
  longlong *****ppppplVar17;
  longlong *****unaff_R15;
  uint local_res10;
  undefined1 auStackY_828 [8];
  undefined1 auStackY_820 [24];
  LPCWSTR ***local_7e8;
  undefined8 uStack_7e0;
  longlong local_7d8;
  ulonglong local_7d0;
  longlong ****local_7c8;
  undefined8 uStack_7c0;
  longlong ****local_7b8;
  longlong ****pppplStack_7b0;
  longlong ****local_7a8;
  undefined8 uStack_7a0;
  longlong ****local_798;
  longlong ****local_790;
  longlong ****local_788;
  undefined8 uStack_780;
  longlong ****local_778;
  longlong ****local_770;
  longlong ****local_768;
  undefined8 uStack_760;
  longlong ****local_748;
  undefined8 uStack_740;
  longlong ****local_738;
  longlong ****pppplStack_730;
  undefined4 local_728 [2];
  longlong ****local_720;
  undefined8 local_718;
  longlong local_710 [5];
  undefined1 local_6e8 [16];
  _DISPLAY_DEVICEW local_6d8;
  _DISPLAY_DEVICEW local_388;
  
  puVar12 = auStackY_828;
  FUN_1404217a0(local_388.DeviceName,0,0x344);
  local_388.cb = 0x348;
  FUN_1404217a0(local_6d8.DeviceName,0,0x344);
  ppppplVar15 = (longlong *****)0x0;
  local_6d8.cb = 0x348;
  local_720 = (longlong ****)0x0;
  local_718 = 0;
  local_728[0] = 0;
  local_720 = (longlong ****)FUN_14028af20(0x70);
  *local_720 = (longlong ***)local_720;
  local_720[1] = (longlong ***)local_720;
  local_710[0] = 0;
  local_710[1] = 0;
  local_710[2] = 0;
  local_710[3] = 7;
  local_710[4] = 8;
  local_728[0] = 0x3f800000;
  FUN_1400374c0(local_710,0x10,local_720);
  BVar3 = EnumDisplayDevicesW((LPCWSTR)0x0,0,&local_388,0);
  if (BVar3 != 0) {
    local_res10 = 0;
    ppppplVar11 = param_1;
    do {
      ppppplVar17 = &local_788;
      ppppplVar10 = (longlong *****)0x0;
      local_7d8 = 0;
      local_7d0 = 0;
      local_7e8 = (LPCWSTR ***)0x0;
      uStack_7e0 = 0;
      uVar5 = FUN_1402d6aa0(local_388.DeviceName);
      FUN_140016170(&local_7e8,local_388.DeviceName,uVar5);
      if (local_7d8 == 0) {
LAB_14012c093:
        local_738 = (longlong ****)0x0;
        uStack_740 = 0;
        local_748 = (longlong ****)0x0;
        pppplStack_730 = (longlong ****)0xf;
      }
      else {
        pppppWVar7 = &local_7e8;
        if (7 < local_7d0) {
          pppppWVar7 = (LPCWSTR ****)local_7e8;
        }
        iVar4 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar7,(int)local_7d8,(LPSTR)0x0,0,
                                    (LPCSTR)0x0,(LPBOOL)0x0);
        ppppplVar11 = (longlong *****)(longlong)iVar4;
        if (iVar4 < 1) goto LAB_14012c093;
        FUN_140016940(&local_7c8,ppppplVar11,0);
        ppppplVar9 = &local_7c8;
        if ((longlong *****)0xf < pppplStack_7b0) {
          ppppplVar9 = (longlong *****)local_7c8;
        }
        pppppWVar7 = &local_7e8;
        if (7 < local_7d0) {
          pppppWVar7 = (LPCWSTR ****)local_7e8;
        }
        WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar7,(int)local_7d8,(LPSTR)ppppplVar9,iVar4,
                            (LPCSTR)0x0,(LPBOOL)0x0);
        local_748 = local_7c8;
        uStack_740 = uStack_7c0;
        local_738 = local_7b8;
        pppplStack_730 = pppplStack_7b0;
      }
      if (7 < local_7d0) {
        ppppplVar9 = (longlong *****)(local_7d0 * 2 + 2);
        pppppWVar7 = (LPCWSTR ****)local_7e8;
        if ((longlong *****)0xfff < ppppplVar9) {
          pppppWVar7 = (LPCWSTR ****)local_7e8[-1];
          if (0x1f < (ulonglong)((longlong)local_7e8 + (-8 - (longlong)pppppWVar7)))
          goto LAB_14012c63a;
          ppppplVar9 = (longlong *****)(local_7d0 * 2 + 0x29);
        }
        thunk_FUN_14028af80(pppppWVar7,ppppplVar9);
      }
      BVar3 = EnumDisplayDevicesW(local_388.DeviceName,0,&local_6d8,0);
      if (BVar3 != 0) {
        local_798 = (longlong ****)0x0;
        uStack_7a0 = 0;
        local_7a8 = (longlong ****)0x0;
        local_790 = (longlong ****)0xf;
        local_788 = (longlong ****)0x0;
        uStack_780 = 0;
        local_7d8 = 0;
        local_7e8 = (LPCWSTR ***)0x0;
        uStack_7e0 = 0;
        local_7d0 = 0;
        uVar5 = FUN_1402d6aa0(local_6d8.DeviceID);
        FUN_140016170(&local_7e8,local_6d8.DeviceID,uVar5);
        if (local_7d8 == 0) {
LAB_14012c218:
          uStack_760 = 0;
          local_768 = (longlong ****)0x0;
          ppppplVar17 = (longlong *****)0xf;
          unaff_R12 = ppppplVar10;
        }
        else {
          pppppWVar7 = &local_7e8;
          if (7 < local_7d0) {
            pppppWVar7 = (LPCWSTR ****)local_7e8;
          }
          iVar4 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar7,(int)local_7d8,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          ppppplVar11 = (longlong *****)(longlong)iVar4;
          if (iVar4 < 1) goto LAB_14012c218;
          FUN_140016940(&local_7c8,ppppplVar11,0);
          ppppplVar17 = &local_7c8;
          if ((longlong *****)0xf < pppplStack_7b0) {
            ppppplVar17 = (longlong *****)local_7c8;
          }
          pppppWVar7 = &local_7e8;
          if (7 < local_7d0) {
            pppppWVar7 = (LPCWSTR ****)local_7e8;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar7,(int)local_7d8,(LPSTR)ppppplVar17,iVar4,
                              (LPCSTR)0x0,(LPBOOL)0x0);
          local_768 = local_7c8;
          uStack_760 = uStack_7c0;
          unaff_R12 = (longlong *****)local_7b8;
          ppppplVar17 = (longlong *****)pppplStack_7b0;
        }
        if ((longlong *****)0xf < local_790) {
          ppppplVar9 = (longlong *****)((longlong)local_790 + 1);
          ppppplVar14 = (longlong *****)local_7a8;
          if ((longlong *****)0xfff < ppppplVar9) {
            ppppplVar14 = (longlong *****)local_7a8[-1];
            if ((LPSTR)0x1f < (LPSTR)((longlong)local_7a8 + (-8 - (longlong)ppppplVar14)))
            goto LAB_14012c63a;
            ppppplVar9 = (longlong *****)(local_790 + 5);
          }
          thunk_FUN_14028af80(ppppplVar14,ppppplVar9);
        }
        ppppplVar15 = (longlong *****)local_768;
        uStack_7a0 = uStack_760;
        local_7a8 = local_768;
        local_798 = (longlong ****)unaff_R12;
        local_790 = (longlong ****)ppppplVar17;
        if (7 < local_7d0) {
          ppppplVar9 = (longlong *****)(local_7d0 * 2 + 2);
          pppppWVar7 = (LPCWSTR ****)local_7e8;
          if ((longlong *****)0xfff < ppppplVar9) {
            pppppWVar7 = (LPCWSTR ****)local_7e8[-1];
            if (0x1f < (ulonglong)((longlong)local_7e8 + (-8 - (longlong)pppppWVar7)))
            goto LAB_14012c63a;
            ppppplVar9 = (longlong *****)(local_7d0 * 2 + 0x29);
          }
          thunk_FUN_14028af80(pppppWVar7,ppppplVar9);
        }
        local_7d8 = 0;
        local_7d0 = 0;
        local_7e8 = (LPCWSTR ***)0x0;
        uStack_7e0 = 0;
        uVar5 = FUN_1402d6aa0(local_6d8.DeviceString);
        FUN_140016170(&local_7e8,local_6d8.DeviceString,uVar5);
        if (local_7d8 == 0) {
LAB_14012c3b7:
          uStack_760 = 0;
          local_768 = (longlong ****)0x0;
          ppppplVar14 = (longlong *****)0xf;
        }
        else {
          pppppWVar7 = &local_7e8;
          if (7 < local_7d0) {
            pppppWVar7 = (LPCWSTR ****)local_7e8;
          }
          iVar4 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar7,(int)local_7d8,(LPSTR)0x0,0,
                                      (LPCSTR)0x0,(LPBOOL)0x0);
          if (iVar4 < 1) goto LAB_14012c3b7;
          FUN_140016940(&local_7c8,(longlong)iVar4,0);
          ppppplVar11 = &local_7c8;
          if ((longlong *****)0xf < pppplStack_7b0) {
            ppppplVar11 = (longlong *****)local_7c8;
          }
          pppppWVar7 = &local_7e8;
          if (7 < local_7d0) {
            pppppWVar7 = (LPCWSTR ****)local_7e8;
          }
          WideCharToMultiByte(0xfde9,0,(LPCWSTR)pppppWVar7,(int)local_7d8,(LPSTR)ppppplVar11,iVar4,
                              (LPCSTR)0x0,(LPBOOL)0x0);
          local_768 = local_7c8;
          uStack_760 = uStack_7c0;
          ppppplVar14 = (longlong *****)pppplStack_7b0;
          ppppplVar10 = (longlong *****)local_7b8;
        }
        ppppplVar11 = (longlong *****)local_768;
        uStack_780 = uStack_760;
        local_788 = local_768;
        local_778 = (longlong ****)ppppplVar10;
        local_770 = (longlong ****)ppppplVar14;
        unaff_R15 = ppppplVar10;
        if (7 < local_7d0) {
          ppppplVar9 = (longlong *****)(local_7d0 * 2 + 2);
          pppppWVar7 = (LPCWSTR ****)local_7e8;
          if ((longlong *****)0xfff < ppppplVar9) {
            pppppWVar7 = (LPCWSTR ****)local_7e8[-1];
            if (0x1f < (ulonglong)((longlong)local_7e8 + (-8 - (longlong)pppppWVar7)))
            goto LAB_14012c63a;
            ppppplVar9 = (longlong *****)(local_7d0 * 2 + 0x29);
          }
          thunk_FUN_14028af80(pppppWVar7,ppppplVar9);
        }
        puVar6 = (undefined8 *)FUN_140132870(local_728,local_6e8,&local_748);
        unaff_R13 = (longlong *****)*puVar6;
        if (unaff_R13 + 6 != &local_7a8) {
          ppppplVar11 = &local_7a8;
          if ((longlong *****)0xf < ppppplVar17) {
            ppppplVar11 = ppppplVar15;
          }
          FUN_14000f880(unaff_R13 + 6,ppppplVar11,unaff_R12);
          ppppplVar11 = (longlong *****)local_788;
          ppppplVar14 = (longlong *****)local_770;
          ppppplVar15 = (longlong *****)local_7a8;
          ppppplVar17 = (longlong *****)local_790;
          unaff_R15 = (longlong *****)local_778;
        }
        if (unaff_R13 + 10 != &local_788) {
          ppppplVar15 = &local_788;
          if ((longlong *****)0xf < ppppplVar14) {
            ppppplVar15 = ppppplVar11;
          }
          FUN_14000f880(unaff_R13 + 10,ppppplVar15,unaff_R15);
          ppppplVar11 = (longlong *****)local_788;
          ppppplVar14 = (longlong *****)local_770;
          ppppplVar15 = (longlong *****)local_7a8;
          ppppplVar17 = (longlong *****)local_790;
        }
        ppppplVar10 = ppppplVar11;
        if ((longlong *****)0xf < ppppplVar14) {
          ppppplVar9 = (longlong *****)((longlong)ppppplVar14 + 1);
          if ((longlong *****)0xfff < ppppplVar9) {
            ppppplVar10 = (longlong *****)ppppplVar11[-1];
            ppppplVar11 = (longlong *****)((longlong)ppppplVar11 + (-8 - (longlong)ppppplVar10));
            if ((longlong *****)0x1f < ppppplVar11) goto LAB_14012c63a;
            ppppplVar9 = ppppplVar14 + 5;
          }
          thunk_FUN_14028af80(ppppplVar10,ppppplVar9);
        }
        ppppplVar11 = ppppplVar10;
        if ((longlong *****)0xf < ppppplVar17) {
          ppppplVar9 = (longlong *****)((longlong)ppppplVar17 + 1);
          ppppplVar10 = ppppplVar15;
          if ((longlong *****)0xfff < ppppplVar9) {
            ppppplVar10 = (longlong *****)ppppplVar15[-1];
            ppppplVar15 = (longlong *****)((longlong)ppppplVar15 + (-8 - (longlong)ppppplVar10));
            if ((longlong *****)0x1f < ppppplVar15) goto LAB_14012c63a;
            ppppplVar9 = ppppplVar17 + 5;
          }
          thunk_FUN_14028af80(ppppplVar10,ppppplVar9);
        }
        ppppplVar15 = (longlong *****)(ulonglong)local_res10;
      }
      ppppplVar17 = &local_788;
      if ((longlong *****)0xf < pppplStack_730) {
        ppppplVar9 = (longlong *****)((longlong)pppplStack_730 + 1);
        ppppplVar10 = (longlong *****)local_748;
        if ((longlong *****)0xfff < ppppplVar9) {
          ppppplVar10 = (longlong *****)local_748[-1];
          if ((LPSTR)0x1f < (LPSTR)((longlong)local_748 + (-8 - (longlong)ppppplVar10))) {
LAB_14012c63a:
            pcVar2 = (code *)swi(0x29);
            (*pcVar2)(5);
            puVar12 = auStackY_820;
            goto LAB_14012c641;
          }
          ppppplVar9 = (longlong *****)(pppplStack_730 + 5);
        }
        thunk_FUN_14028af80(ppppplVar10,ppppplVar9);
      }
      local_res10 = (int)ppppplVar15 + 1;
      ppppplVar15 = (longlong *****)(ulonglong)local_res10;
      BVar3 = EnumDisplayDevicesW((LPCWSTR)0x0,local_res10,&local_388,0);
    } while (BVar3 != 0);
  }
  EnumDisplayMonitors((HDC)0x0,(LPCRECT)0x0,FUN_14012bc00,(LPARAM)param_1);
  unaff_R13 = (longlong *****)(*param_1)[1];
  ppppplVar17 = (longlong *****)**param_1;
  puVar13 = auStackY_828;
  if (ppppplVar17 != unaff_R13) {
    do {
      unaff_R15 = (longlong *****)ppppplVar17[6];
      ppppplVar11 = ppppplVar17 + 3;
      if ((longlong *****)0xf < unaff_R15) {
        ppppplVar11 = (longlong *****)ppppplVar17[3];
      }
      ppppplVar15 = (longlong *****)ppppplVar17[5];
      ppppplVar10 = (longlong *****)0x0;
      uVar8 = 0xcbf29ce484222325;
      if (ppppplVar15 != (longlong *****)0x0) {
        do {
          pbVar1 = (byte *)((longlong)ppppplVar10 + (longlong)ppppplVar11);
          ppppplVar10 = (longlong *****)((longlong)ppppplVar10 + 1);
          uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
        } while (ppppplVar10 < ppppplVar15);
      }
      ppppplVar11 = *(longlong ******)(local_710[0] + 8 + (local_710[3] & uVar8) * 0x10);
      if (ppppplVar11 != (longlong *****)local_720) {
        unaff_R12 = *(longlong ******)(local_710[0] + (local_710[3] & uVar8) * 0x10);
        while( true ) {
          ppppplVar9 = ppppplVar11 + 2;
          if ((longlong ****)0xf < ppppplVar11[5]) {
            ppppplVar9 = (longlong *****)*ppppplVar9;
          }
          if (unaff_R15 < &DAT_00000010) {
LAB_14012c641:
            ppppplVar10 = ppppplVar17 + 3;
          }
          else {
            ppppplVar10 = (longlong *****)ppppplVar17[3];
          }
          if (ppppplVar15 == (longlong *****)ppppplVar11[4]) {
            if (ppppplVar15 == (longlong *****)0x0) goto LAB_14012c669;
            *(undefined8 *)(puVar12 + -8) = 0x14012c658;
            iVar4 = memcmp(ppppplVar10,ppppplVar9,(size_t)ppppplVar15);
            if (iVar4 == 0) goto LAB_14012c669;
          }
          if (ppppplVar11 == unaff_R12) break;
          ppppplVar11 = (longlong *****)ppppplVar11[1];
        }
      }
      ppppplVar11 = (longlong *****)0x0;
LAB_14012c669:
      ppppplVar15 = (longlong *****)local_720;
      if (ppppplVar11 != (longlong *****)0x0) {
        ppppplVar15 = ppppplVar11;
      }
      if (ppppplVar15 != (longlong *****)local_720) {
        ppppplVar11 = ppppplVar15 + 6;
        if (ppppplVar17 != ppppplVar15 + 3) {
          ppppplVar10 = ppppplVar11;
          if ((longlong ****)0xf < ppppplVar15[9]) {
            ppppplVar10 = (longlong *****)*ppppplVar11;
          }
          pppplVar16 = ppppplVar15[8];
          *(undefined8 *)(puVar12 + -8) = 0x14012c6a3;
          FUN_14000f880(ppppplVar17 + 3,ppppplVar10,pppplVar16);
        }
        pppplVar16 = ppppplVar15[0xc];
        if (pppplVar16 == (longlong ****)0x0) {
          if (ppppplVar17 != ppppplVar15 + -5) {
            if ((longlong ****)0xf < ppppplVar15[9]) {
              ppppplVar11 = (longlong *****)*ppppplVar11;
            }
            pppplVar16 = ppppplVar15[8];
            goto LAB_14012c6e3;
          }
        }
        else if (ppppplVar17 != ppppplVar15 + -1) {
          ppppplVar11 = ppppplVar15 + 10;
          if ((longlong ****)0xf < ppppplVar15[0xd]) {
            ppppplVar11 = (longlong *****)*ppppplVar11;
          }
LAB_14012c6e3:
          *(undefined8 *)(puVar12 + -8) = 0x14012c6e8;
          FUN_14000f880(ppppplVar17 + 0xb,ppppplVar11,pppplVar16);
        }
      }
      ppppplVar17 = ppppplVar17 + 0x11;
      puVar13 = puVar12;
    } while (ppppplVar17 != unaff_R13);
  }
  *(undefined8 *)(puVar13 + -8) = 0x14012c715;
  FUN_140030ce0(local_710);
  *(undefined8 *)(puVar13 + -8) = 0x14012c71e;
  FUN_140130f40(&local_720);
  return;
}

