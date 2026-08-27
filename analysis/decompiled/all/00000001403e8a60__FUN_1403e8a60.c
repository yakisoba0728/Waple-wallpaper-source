// Function: FUN_1403e8a60
// Addr: 1403e8a60
// Size: 1413 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403e8a60(longlong *param_1,longlong param_2,longlong param_3,uint param_4,char param_5)

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_238 [32];
  undefined8 *local_218;
  undefined8 local_210;
  longlong local_208;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
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
  ulonglong uVar13;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_238;
  local_1f8 = param_4;
  local_1f0 = param_1;
  local_1e0 = param_2;
  cVar7 = FUN_1403ec530(param_3,param_2,"start kern");
  if (cVar7 != '\0') {
    uVar13 = 0;
    if ((*(byte *)(param_3 + 0x18) & 0x40) != 0) {
      uVar15 = *(uint *)(param_3 + 0x60);
      if (*(uint *)(param_3 + 0x60) == 0xffffffff) {
        uVar15 = 0xffffffff;
      }
      if (uVar15 != 0) {
        do {
          puVar1 = (uint *)(*(longlong *)(param_3 + 0x70) + 4 + uVar13 * 0x14);
          *puVar1 = *puVar1 | 2;
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
        } while (uVar11 < uVar15);
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
    local_1d8 = *(longlong *)(param_3 + 0x70);
    local_208 = *(longlong *)(param_3 + 0x80);
    uVar13 = 0;
    if (local_1fc != 0) {
      local_1d0 = local_1d8 + 4;
      do {
        uVar15 = (uint)uVar13;
        local_1e8 = uVar13 * 0x14;
        if ((*(uint *)(local_1d0 + local_1e8) & param_4) != 0) {
          lVar6 = *(longlong *)(*(longlong *)(local_1b8 + 0xa0) + 0x70);
          iVar16 = local_188 + -1;
          local_1c0 = uVar15;
          uVar14 = uVar13;
          uVar11 = uVar15;
          while ((int)uVar11 < iVar16) {
            local_1c0 = (int)uVar14 + 1;
            uVar14 = (ulonglong)local_1c0;
            uVar3 = *(ushort *)(lVar6 + 0xc + uVar14 * 0x14);
            if ((uVar3 & local_1b0 & 0xe) == 0) {
              puVar1 = (uint *)(uVar14 * 0x14 + lVar6);
              if ((uVar3 & 8) != 0) {
                if ((local_1b0 & 0x10) == 0) {
                  if ((local_1b0 & 0xff00) == 0) {
                    bVar17 = true;
                  }
                  else {
                    bVar17 = (local_1b0 & 0xff00) == (uVar3 & 0xff00);
                  }
                }
                else {
                  uVar8 = 0;
                  do {
                    if ((*(ulonglong *)
                          ((*(undefined8 **)(local_1b8 + 0xf8))[2] +
                           (ulonglong)(local_1b0 >> 0x10) * 0x18 + uVar8 * 8) >>
                         (*puVar1 >> ((byte)(&DAT_14045c3c8)[uVar8] & 0x1f) & 0x3f) & 1) == 0)
                    goto LAB_1403e8cbb;
                    uVar11 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar11;
                  } while (uVar11 < 3);
                  puVar10 = (undefined8 *)**(undefined8 **)(local_1b8 + 0xf8);
                  puVar9 = &DAT_14045dd10;
                  if (puVar10 != (undefined8 *)0x0) {
                    puVar9 = puVar10;
                  }
                  if (*(uint *)(puVar9 + 3) < 4) {
                    puVar10 = &DAT_14045dd10;
                  }
                  else {
                    puVar10 = (undefined8 *)puVar9[2];
                  }
                  cVar7 = FUN_1403ebf20(puVar10,local_1b0 >> 0x10,*puVar1);
                  uVar14 = (ulonglong)local_1c0;
                  if (cVar7 == '\0') {
LAB_1403e8cbb:
                    bVar17 = false;
                  }
                  else {
                    bVar17 = true;
                  }
                }
                if (!bVar17) goto LAB_1403e8d8d;
              }
              uVar11 = (uint)uVar14;
              uVar3 = (ushort)puVar1[4];
              if ((((((uVar3 & 0x20) == 0) || ((puVar1[3] & 0x10) != 0)) ||
                   ((local_1a8 == '\0' && ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x200) != 0))))))
                  || ((local_1a7 == '\0' && ((((byte)uVar3 & 0x1f) == 1 && ((uVar3 & 0x100) != 0))))
                     )) || ((local_1a6 == '\0' && ((uVar3 & 0x40) != 0)))) {
                bVar17 = false;
              }
              else {
                bVar17 = true;
              }
              if (local_190 == (byte *)0x0) {
                iVar12 = 0;
              }
              else {
                iVar12 = (uint)local_190[1] + (uint)*local_190 * 0x100;
              }
              if (((local_1ac & puVar1[1]) != 0) &&
                 (((local_1a5 == '\0' || (local_1a4 == '\0')) ||
                  (local_1a4 == *(char *)((longlong)puVar1 + 0xf))))) {
                if (local_1a0 == (code *)0x0) {
                  if (bVar17) goto LAB_1403e8d8d;
                }
                else {
                  cVar7 = (*local_1a0)(puVar1,iVar12,local_198);
                  uVar14 = (ulonglong)local_1c0;
                  uVar11 = local_1c0;
                  if (cVar7 == '\0') goto LAB_1403e8d85;
                }
                if (local_190 != (byte *)0x0) {
                  local_190 = local_190 + 2;
                }
                lVar6 = (ulonglong)uVar11 * 0x14;
                uVar4 = *(undefined4 *)(lVar6 + local_1d8);
                uVar5 = *(undefined4 *)(local_1e8 + local_1d8);
                puVar10 = (undefined8 *)*local_1f0;
                cVar7 = FUN_1403c58e0(*(undefined8 *)(puVar10[1] + 0x98),uVar5);
                uVar15 = local_1c0;
                if (((cVar7 != '\0') &&
                    (cVar7 = FUN_1403c58e0(*(undefined8 *)(puVar10[1] + 0xa0),uVar4),
                    uVar15 = local_1c0, cVar7 != '\0')) &&
                   (iVar16 = FUN_1403cb540(*puVar10,uVar5,uVar4,puVar10[1]), uVar15 = local_1c0,
                   iVar16 != 0)) {
                  if (local_200 == 4) {
                    if (param_5 != '\0') {
                      iVar16 = (int)((ulonglong)
                                     ((longlong)(short)iVar16 * *(longlong *)(local_1e0 + 0x58) +
                                     0x8000) >> 0x10);
                    }
                    if ((char)local_1f0[1] == '\0') {
                      iVar12 = iVar16 - (iVar16 >> 1);
                      *(int *)(local_1e8 + local_208) =
                           *(int *)(local_1e8 + local_208) + (iVar16 >> 1);
                      *(int *)(lVar6 + local_208) = *(int *)(lVar6 + local_208) + iVar12;
                      piVar2 = (int *)(lVar6 + 8 + local_208);
                      *piVar2 = *piVar2 + iVar12;
                    }
                    else {
                      *(int *)(lVar6 + 0xc + local_208) = iVar16;
                      *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) | 8;
                    }
                  }
                  else {
                    if (param_5 != '\0') {
                      iVar16 = (int)((ulonglong)
                                     ((longlong)(short)iVar16 * *(longlong *)(local_1e0 + 0x60) +
                                     0x8000) >> 0x10);
                    }
                    if ((char)local_1f0[1] == '\0') {
                      iVar12 = iVar16 - (iVar16 >> 1);
                      piVar2 = (int *)(local_1e8 + 4 + local_208);
                      *piVar2 = *piVar2 + (iVar16 >> 1);
                      piVar2 = (int *)(lVar6 + 4 + local_208);
                      *piVar2 = *piVar2 + iVar12;
                      piVar2 = (int *)(lVar6 + 0xc + local_208);
                      *piVar2 = *piVar2 + iVar12;
                    }
                    else {
                      *(int *)(lVar6 + 8 + local_208) = iVar16;
                      *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) | 8;
                    }
                  }
                  FUN_14040eef0(param_3,uVar13,uVar11 + 1);
                  uVar15 = local_1c0;
                }
                goto LAB_1403e8f11;
              }
LAB_1403e8d85:
              if (!bVar17) break;
            }
LAB_1403e8d8d:
            uVar11 = (uint)uVar14;
          }
        }
        uVar15 = uVar15 + 1;
LAB_1403e8f11:
        uVar13 = (ulonglong)uVar15;
        param_2 = local_1e0;
        param_4 = local_1f8;
      } while (uVar15 < local_1fc);
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

