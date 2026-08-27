// Function: FUN_1403ea0a0
// Addr: 1403ea0a0
// Size: 1448 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403ea0a0(longlong *param_1,longlong param_2,longlong param_3,uint param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  char cVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 local_210;
  longlong local_208;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  undefined1 local_1c8 [8];
  uint local_1c0;
  longlong local_1b8;
  uint local_1b0;
  uint local_1ac;
  char local_1a8;
  char local_1a7;
  char local_1a6;
  char local_1a5;
  char local_1a4;
  code *local_1a0;
  undefined8 local_198;
  byte *local_190;
  int local_188;
  longlong local_128;
  undefined1 local_120 [48];
  longlong local_f0;
  uint local_ac;
  undefined4 local_a4;
  undefined4 local_90;
  undefined4 local_8c;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_238;
  local_1f8 = param_4;
  local_1f0 = param_2;
  local_1d8 = param_1;
  cVar10 = FUN_1403ec530(param_3,param_2,"start kern");
  if (cVar10 != '\0') {
    if ((*(byte *)(param_3 + 0x18) & 0x40) != 0) {
      uVar18 = *(uint *)(param_3 + 0x60);
      if (*(uint *)(param_3 + 0x60) == 0xffffffff) {
        uVar18 = 0xffffffff;
      }
      uVar16 = 0;
      if (uVar18 != 0) {
        do {
          puVar3 = (uint *)(*(longlong *)(param_3 + 0x70) + 4 + uVar16 * 0x14);
          *puVar3 = *puVar3 | 2;
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
        } while (uVar14 < uVar18);
      }
    }
    local_210 = 0;
    local_218 = &DAT_14045dd10;
    FUN_140394db0(local_1c8,1,param_2,param_3);
    local_90 = 0xffffffff;
    local_8c = 0;
    local_ac = param_4;
    FUN_1403e3b80(local_1c8);
    local_a4 = 8;
    FUN_1403e3b80(local_1c8);
    local_200 = *(uint *)(param_3 + 0x38) & 0xfffffffe;
    local_1fc = *(uint *)(param_3 + 0x60);
    local_1e8 = *(longlong *)(param_3 + 0x70);
    local_208 = *(longlong *)(param_3 + 0x80);
    uVar16 = 0;
    if (local_1fc != 0) {
      local_1d0 = local_1e8 + 4;
      do {
        uVar18 = (uint)uVar16;
        local_1e0 = uVar16 * 0x14;
        if ((*(uint *)(local_1d0 + uVar16 * 0x14) & param_4) != 0) {
          lVar5 = *(longlong *)(*(longlong *)(local_1b8 + 0xa0) + 0x70);
          iVar19 = local_188 + -1;
          local_1c0 = uVar18;
          uVar17 = uVar16;
          uVar14 = uVar18;
          while ((int)uVar14 < iVar19) {
            local_1c0 = (int)uVar17 + 1;
            uVar17 = (ulonglong)local_1c0;
            uVar4 = *(ushort *)(uVar17 * 0x14 + 0xc + lVar5);
            if ((uVar4 & local_1b0 & 0xe) == 0) {
              puVar3 = (uint *)(uVar17 * 0x14 + lVar5);
              if ((uVar4 & 8) != 0) {
                if ((local_1b0 & 0x10) == 0) {
                  if ((local_1b0 & 0xff00) == 0) {
                    bVar20 = true;
                  }
                  else {
                    bVar20 = (local_1b0 & 0xff00) == (uVar4 & 0xff00);
                  }
                }
                else {
                  uVar11 = 0;
                  do {
                    if ((*(ulonglong *)
                          ((*(undefined8 **)(local_1b8 + 0xf8))[2] +
                           (ulonglong)(local_1b0 >> 0x10) * 0x18 + uVar11 * 8) >>
                         (*puVar3 >> ((byte)(&DAT_14045c3c8)[uVar11] & 0x1f) & 0x3f) & 1) == 0)
                    goto LAB_1403ea30b;
                    uVar14 = (int)uVar11 + 1;
                    uVar11 = (ulonglong)uVar14;
                  } while (uVar14 < 3);
                  puVar13 = (undefined8 *)**(undefined8 **)(local_1b8 + 0xf8);
                  puVar12 = &DAT_14045dd10;
                  if (puVar13 != (undefined8 *)0x0) {
                    puVar12 = puVar13;
                  }
                  if (*(uint *)(puVar12 + 3) < 4) {
                    puVar13 = &DAT_14045dd10;
                  }
                  else {
                    puVar13 = (undefined8 *)puVar12[2];
                  }
                  cVar10 = FUN_1403ebf20(puVar13,local_1b0 >> 0x10,*puVar3);
                  uVar17 = (ulonglong)local_1c0;
                  if (cVar10 == '\0') {
LAB_1403ea30b:
                    bVar20 = false;
                  }
                  else {
                    bVar20 = true;
                  }
                }
                if (!bVar20) goto LAB_1403ea3dd;
              }
              uVar4 = (ushort)puVar3[4];
              if ((((((uVar4 & 0x20) == 0) || ((puVar3[3] & 0x10) != 0)) ||
                   ((local_1a8 == '\0' && ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 & 0x200) != 0))))))
                  || ((local_1a7 == '\0' && ((((byte)uVar4 & 0x1f) == 1 && ((uVar4 & 0x100) != 0))))
                     )) || ((local_1a6 == '\0' && ((uVar4 & 0x40) != 0)))) {
                bVar20 = false;
              }
              else {
                bVar20 = true;
              }
              if (local_190 == (byte *)0x0) {
                iVar15 = 0;
              }
              else {
                iVar15 = (uint)local_190[1] + (uint)*local_190 * 0x100;
              }
              if (((local_1ac & puVar3[1]) != 0) &&
                 (((local_1a5 == '\0' || (local_1a4 == '\0')) ||
                  (local_1a4 == *(char *)((longlong)puVar3 + 0xf))))) {
                if (local_1a0 == (code *)0x0) {
                  if (bVar20) goto LAB_1403ea3dd;
                }
                else {
                  cVar10 = (*local_1a0)(puVar3,iVar15,local_198);
                  if (cVar10 == '\0') {
                    uVar17 = (ulonglong)local_1c0;
                    goto LAB_1403ea3d5;
                  }
                  uVar17 = (ulonglong)local_1c0;
                }
                plVar9 = local_1d8;
                lVar5 = local_1e0;
                if (local_190 != (byte *)0x0) {
                  local_190 = local_190 + 2;
                }
                lVar2 = uVar17 * 0x14;
                lVar6 = *(longlong *)*local_1d8;
                lVar7 = *(longlong *)(lVar6 + 0x90);
                lVar8 = *(longlong *)(lVar7 + 0x10);
                if ((*(uint *)((longlong *)*local_1d8 + 1) & 0xfffffffe) == 4) {
                  if (lVar8 == 0) {
                    local_218 = (undefined8 *)0x0;
                  }
                  else {
                    local_218 = *(undefined8 **)(lVar8 + 0x68);
                  }
                  iVar19 = (**(code **)(lVar7 + 0x88))(lVar6,*(undefined8 *)(lVar6 + 0x98));
                }
                else {
                  if (lVar8 == 0) {
                    local_218 = (undefined8 *)0x0;
                  }
                  else {
                    local_218 = *(undefined8 **)(lVar8 + 0x70);
                  }
                  iVar19 = (**(code **)(lVar7 + 0x90))
                                     (lVar6,*(undefined8 *)(lVar6 + 0x98),
                                      *(undefined4 *)(local_1e0 + local_1e8),
                                      *(undefined4 *)(lVar2 + local_1e8));
                }
                uVar18 = local_1c0;
                if (iVar19 != 0) {
                  if (local_200 == 4) {
                    if (param_5 != '\0') {
                      iVar19 = (int)((ulonglong)
                                     ((longlong)(short)iVar19 * *(longlong *)(local_1f0 + 0x58) +
                                     0x8000) >> 0x10);
                    }
                    if ((char)plVar9[1] == '\0') {
                      iVar15 = iVar19 - (iVar19 >> 1);
                      piVar1 = (int *)(lVar5 + local_208);
                      *piVar1 = *piVar1 + (iVar19 >> 1);
                      *(int *)(lVar2 + local_208) = *(int *)(lVar2 + local_208) + iVar15;
                      piVar1 = (int *)(lVar2 + 8 + local_208);
                      *piVar1 = *piVar1 + iVar15;
                    }
                    else {
                      *(int *)(lVar2 + 0xc + local_208) = iVar19;
                      *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) | 8;
                    }
                  }
                  else {
                    if (param_5 != '\0') {
                      iVar19 = (int)((ulonglong)
                                     ((longlong)(short)iVar19 * *(longlong *)(local_1f0 + 0x60) +
                                     0x8000) >> 0x10);
                    }
                    if ((char)plVar9[1] == '\0') {
                      iVar15 = iVar19 - (iVar19 >> 1);
                      piVar1 = (int *)(lVar5 + 4 + local_208);
                      *piVar1 = *piVar1 + (iVar19 >> 1);
                      piVar1 = (int *)(lVar2 + 4 + local_208);
                      *piVar1 = *piVar1 + iVar15;
                      piVar1 = (int *)(lVar2 + 0xc + local_208);
                      *piVar1 = *piVar1 + iVar15;
                    }
                    else {
                      *(int *)(lVar2 + 8 + local_208) = iVar19;
                      *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) | 8;
                    }
                  }
                  FUN_14040eef0(param_3,uVar16,(int)uVar17 + 1);
                  uVar18 = local_1c0;
                }
                goto LAB_1403ea56e;
              }
LAB_1403ea3d5:
              if (!bVar20) break;
            }
LAB_1403ea3dd:
            uVar14 = (uint)uVar17;
          }
        }
        uVar18 = uVar18 + 1;
LAB_1403ea56e:
        uVar16 = (ulonglong)uVar18;
        param_2 = local_1f0;
        param_4 = local_1f8;
      } while (uVar18 < local_1fc);
    }
    FUN_1403ec530(param_3,param_2,"end kern");
    if (*(longlong *)(local_128 + 0xe8) != 0) {
      *(undefined8 *)(local_128 + 0x100) = local_58;
      *(undefined8 *)(local_128 + 0x108) = local_50;
    }
    if (1 < (uint)local_88 + 1) {
      local_88 = (ulonglong)(uint)local_88;
      thunk_FUN_1402d9040(local_80);
    }
    local_88 = 0;
    local_80 = 0;
    if (local_f0 != 0) {
      FUN_1403beff0(local_120);
    }
  }
  return;
}

