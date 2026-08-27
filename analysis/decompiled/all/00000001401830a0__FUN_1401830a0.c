// Function: FUN_1401830a0
// Addr: 1401830a0
// Size: 1195 bytes


ulonglong FUN_1401830a0(longlong *param_1)

{
  ulonglong uVar1;
  HANDLE hHandle;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  char cVar9;
  ushort uVar10;
  DWORD DVar11;
  BOOL BVar12;
  longlong *plVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined8 ****ppppuVar16;
  ulonglong uVar17;
  longlong *plVar18;
  char *_Str;
  longlong lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  int iVar23;
  DWORD local_res8 [2];
  int local_res10;
  undefined1 local_d8;
  undefined7 uStack_d7;
  size_t local_c8;
  ulonglong local_c0;
  int local_b8;
  undefined8 ***local_b0 [3];
  ulonglong local_98;
  undefined8 ***local_90 [2];
  size_t local_80;
  ulonglong local_78;
  HANDLE local_70;
  undefined1 local_68 [48];
  
  uVar14 = param_1[0x60e];
  uVar1 = param_1[0x60f];
  if (uVar14 == uVar1) {
    return uVar1 & 0xffffffffffffff00;
  }
  uVar17 = 0;
  if (((longlong)(uVar1 - uVar14) >> 4) * -0x3333333333333333 != 0) {
    iVar22 = 0;
    do {
      lVar19 = (longlong)iVar22 * 0x50;
      local_b8 = *(int *)(lVar19 + uVar14);
      FUN_140016fc0(local_b0,uVar14 + 8 + lVar19);
      FUN_140016fc0(local_90,uVar14 + 0x28 + lVar19);
      hHandle = *(HANDLE *)(lVar19 + 0x48 + uVar14);
      local_70 = hHandle;
      if (hHandle == (HANDLE)0x0) {
        cVar9 = FUN_14017dfc0(param_1 + 2);
        if (cVar9 != '\0') {
LAB_1401831d1:
          iVar23 = 1;
          goto LAB_1401831d7;
        }
      }
      else {
        DVar11 = WaitForSingleObject(hHandle,0);
        if (DVar11 == 0) {
          BVar12 = GetExitCodeProcess(hHandle,local_res8);
          DVar11 = local_res8[0];
          if (BVar12 != 1) goto LAB_140183187;
          CloseHandle(hHandle);
          if ((DVar11 == 0) || (0x18 < (int)DVar11)) goto LAB_1401831d1;
        }
        else {
          if (DVar11 != 0xffffffff) goto LAB_14018347a;
LAB_140183187:
          CloseHandle(hHandle);
        }
        iVar23 = 2;
LAB_1401831d7:
        puVar20 = (undefined4 *)(lVar19 + param_1[0x60e]);
        puVar2 = (undefined4 *)param_1[0x60f];
        puVar8 = puVar20;
        while (puVar7 = puVar8 + 0x14, puVar7 != puVar2) {
          *puVar20 = *puVar7;
          FUN_14000de40(puVar20 + 2,puVar8 + 0x16);
          FUN_14000de40(puVar20 + 10,puVar8 + 0x1e);
          *(undefined8 *)(puVar20 + 0x12) = *(undefined8 *)(puVar8 + 0x26);
          puVar20 = puVar20 + 0x14;
          puVar8 = puVar7;
        }
        lVar19 = param_1[0x60f];
        FUN_140017240(lVar19 + -0x28);
        FUN_140017240(lVar19 + -0x48);
        param_1[0x60f] = param_1[0x60f] + -0x50;
        iVar22 = iVar22 + -1;
        local_res10 = iVar22;
        if (iVar23 == 1) {
          if (local_b8 == 0) {
            ppppuVar16 = local_b0;
            if (0xf < local_98) {
              ppppuVar16 = (undefined8 ****)local_b0[0];
            }
            plVar13 = (longlong *)FUN_14014cf90(param_1 + 0x2a6,ppppuVar16,0);
            if ((plVar13 != (longlong *)0x0) && ((*(byte *)(plVar13 + 2) & 8) != 0)) {
              plVar18 = plVar13 + 0xf;
              if (0xf < (ulonglong)plVar13[0x12]) {
                plVar18 = (longlong *)*plVar18;
              }
              (**(code **)(*plVar13 + 8))(plVar13,plVar18);
            }
          }
          else if (local_b8 == 1) {
            plVar18 = *(longlong **)(*param_1 + 0x160);
            uVar14 = local_78;
            for (plVar13 = *(longlong **)(*param_1 + 0x158); local_res10 = iVar22,
                plVar13 != plVar18; plVar13 = plVar13 + 1) {
              plVar3 = (longlong *)*plVar13;
              iVar22 = (**(code **)(*plVar3 + 0x60))(plVar3);
              if ((iVar22 == 5) || (iVar22 = (**(code **)(*plVar3 + 0x60))(plVar3), iVar22 == 1)) {
                iVar22 = (**(code **)(*plVar3 + 0x60))(plVar3);
                _Str = "image";
                if (iVar22 == 5) {
                  _Str = "model";
                }
                FUN_140085090(local_68,plVar3 + 0x36);
                strlen(_Str);
                lVar19 = FUN_140086de0(local_68,_Str);
                if (*(char *)(lVar19 + 8) == '\x04') {
                  FUN_140085cc0(lVar19,&local_d8);
                  FUN_1400187b0(&local_d8);
                  uVar1 = local_c0;
                  puVar6 = (undefined1 *)CONCAT71(uStack_d7,local_d8);
                  ppppuVar16 = local_90;
                  if (0xf < uVar14) {
                    ppppuVar16 = (undefined8 ****)local_90[0];
                  }
                  puVar15 = &local_d8;
                  if (0xf < local_c0) {
                    puVar15 = puVar6;
                  }
                  if ((local_c8 == local_80) &&
                     ((local_c8 == 0 || (iVar22 = memcmp(puVar15,ppppuVar16,local_c8), iVar22 == 0))
                     )) {
                    (**(code **)(*plVar3 + 0x40))(plVar3,local_68);
                    lVar19 = *param_1;
                    *(uint *)(lVar19 + 0xe0) = *(uint *)(lVar19 + 0xe0) & 0xfffdf7fe;
                    puVar4 = *(undefined8 **)(lVar19 + 0x160);
                    for (puVar21 = *(undefined8 **)(lVar19 + 0x158); puVar21 != puVar4;
                        puVar21 = puVar21 + 1) {
                      uVar10 = (**(code **)(*(longlong *)*puVar21 + 0x58))();
                      if ((uVar10 & 8) != 0) {
                        *(uint *)(lVar19 + 0xe0) = *(uint *)(lVar19 + 0xe0) | 1;
                      }
                      if ((uVar10 & 0x40) != 0) {
                        *(uint *)(lVar19 + 0xe0) = *(uint *)(lVar19 + 0xe0) | 0x800;
                      }
                      if ((uVar10 >> 0xc & 1) != 0) {
                        *(uint *)(lVar19 + 0xe0) = *(uint *)(lVar19 + 0xe0) | 0x20000;
                      }
                      uVar14 = local_78;
                    }
                    FUN_1401731d0(param_1 + 0x2e3);
                    if (0xf < local_c0) {
                      puVar15 = (undefined1 *)CONCAT71(uStack_d7,local_d8);
                      uVar17 = local_c0 + 1;
                      if (0xfff < uVar17) {
                        if ((undefined1 *)0x1f <
                            puVar15 + (-8 - (longlong)*(undefined1 **)(puVar15 + -8))) {
LAB_140183543:
                          pcVar5 = (code *)swi(0x29);
                          (*pcVar5)(5);
                          pcVar5 = (code *)swi(3);
                          uVar14 = (*pcVar5)();
                          return uVar14;
                        }
                        uVar17 = local_c0 + 0x28;
                        puVar15 = *(undefined1 **)(puVar15 + -8);
                      }
LAB_14018343c:
                      thunk_FUN_14028af80(puVar15,uVar17);
                    }
                  }
                  else if (0xf < uVar1) {
                    uVar17 = uVar1 + 1;
                    puVar15 = puVar6;
                    if (0xfff < uVar17) {
                      puVar15 = *(undefined1 **)(puVar6 + -8);
                      if ((undefined1 *)0x1f < puVar6 + (-8 - (longlong)puVar15))
                      goto LAB_140183543;
                      uVar17 = uVar1 + 0x28;
                    }
                    goto LAB_14018343c;
                  }
                  local_c8 = 0;
                  local_c0 = 0xf;
                  local_d8 = 0;
                }
                FUN_140085440(local_68);
              }
              iVar22 = local_res10;
            }
          }
        }
      }
LAB_14018347a:
      FUN_140017240(local_90);
      FUN_140017240(local_b0);
      uVar14 = param_1[0x60e];
      iVar22 = iVar22 + 1;
      uVar17 = (ulonglong)iVar22;
    } while (uVar17 < (ulonglong)(((longlong)(param_1[0x60f] - uVar14) >> 4) * -0x3333333333333333))
    ;
  }
  return CONCAT71((int7)(uVar17 >> 8),1);
}

