// Function: FUN_1400bed90
// Addr: 1400bed90
// Size: 2741 bytes


/* WARNING: Removing unreachable block (ram,0x0001400bf637) */
/* WARNING: Removing unreachable block (ram,0x0001400bef73) */
/* WARNING: Removing unreachable block (ram,0x0001400bf5ae) */
/* WARNING: Removing unreachable block (ram,0x0001400bf642) */
/* WARNING: Removing unreachable block (ram,0x0001400bf5b9) */

ushort * FUN_1400bed90(longlong param_1,uint *param_2,longlong *param_3,undefined1 param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  ushort *puVar15;
  longlong lVar16;
  ushort *puVar17;
  ushort *puVar18;
  int iVar19;
  ushort *puVar20;
  uint uVar21;
  ushort *puVar22;
  ushort *puVar23;
  int local_res8;
  uint uStack0000000000000028;
  int iStack0000000000000030;
  ushort *local_c8;
  longlong local_b8;
  ulonglong uStack_b0;
  int local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  ushort *local_90;
  ushort *local_88;
  longlong local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  longlong lStack_60;
  longlong local_58 [3];
  
  pcVar7 = (char *)0x0;
  uStack0000000000000028 = 0;
  local_98 = 0;
  local_90 = (ushort *)((ulonglong)local_90 & 0xffffffff00000000);
  local_res8 = 0;
  local_88 = (ushort *)0x0;
  local_80 = 0;
  local_c8 = (ushort *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  lStack_60 = 0;
  uStack_b0 = 0;
  puVar17 = (ushort *)pcVar7;
  if ((param_3 != (longlong *)0x0) && (lVar13 = *param_3, lVar13 != 0)) {
    puVar17 = (ushort *)(param_3[3] + lVar13);
    local_c8 = (ushort *)(param_3[2] + lVar13);
    local_80 = lVar13;
  }
  puVar12 = (ushort *)0x0;
  iStack0000000000000030 = *(int *)(param_1 + 0x7c);
  iVar19 = 1;
  local_a8 = 1;
  local_a0 = 0x400;
  if (iStack0000000000000030 == 0) {
    puVar20 = (ushort *)pcVar7;
    puVar15 = (ushort *)pcVar7;
    if (*(byte *)(param_1 + 0x30) == 0x40) {
LAB_1400bf072:
      uStack_b0 = -(ulonglong)(*(char *)(param_1 + 0x32) != '\0') & 0x400;
      local_b8 = param_1 + 0x480;
      if (*(char *)(param_1 + 0x32) == '\0') {
        local_b8 = 0;
      }
      if ((((param_2 == (uint *)0x0) || ((*param_2 & 0x40000) == 0)) ||
          (*(longlong *)(param_2 + 0x1e) != 0x400)) || (*(longlong *)(param_2 + 0x20) != 1)) {
        local_58[0] = param_1 + 0x80;
        if (param_2 == (uint *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = *param_2;
        }
      }
      else {
        local_58[0] = *(longlong *)(param_2 + 0x1c);
        uVar5 = *param_2;
      }
      local_58[1] = 0x400;
      pcVar9 = (char *)FUN_1400a24c0(param_1 + 0x50,uVar5,local_58,*(undefined4 *)(param_1 + 0x44),
                                     &local_b8,param_4);
      if ((ushort *)pcVar9 == (ushort *)0x0) {
        if (param_2 == (uint *)0x0) {
          uVar10 = 0;
LAB_1400bf1c1:
          uVar5 = (&DAT_140482a50)[(uint)uVar10 & 0xf] +
                  (&DAT_140482a50)[(uint)(uVar10 >> 0xc) & 0xf] +
                  (&DAT_140482a50)[(uint)(uVar10 >> 8) & 0xf] +
                  (&DAT_140482a50)[(uint)(uVar10 >> 4) & 0xf];
          if ((uVar5 & 7) != 0) {
            pcVar9 = "#base: unsupported option";
            goto LAB_1400bf807;
          }
        }
        else {
          uVar10 = (ulonglong)*param_2;
          if ((*param_2 & 0x30000) == 0) goto LAB_1400bf1c1;
          uVar5 = 0;
        }
        puVar23 = (ushort *)(ulonglong)(uVar5 >> 3);
        if ((*(byte *)(param_1 + 0x3a) & 0x20) == 0) {
          uStack0000000000000028 = *(int *)(param_1 + 0x2c) - 1;
        }
        if ((*(byte *)(param_1 + 0x33) & 8) == 0) {
          puVar15 = (ushort *)(ulonglong)*(uint *)(param_1 + 0x28);
        }
        goto LAB_1400bf229;
      }
      if ((byte)*(ushort *)pcVar9 == 0x23) goto LAB_1400bf807;
      if ((byte)*(ushort *)pcVar9 == 0x24) {
        pcVar9 = "#base: cannot return a suspension";
        goto LAB_1400bf807;
      }
    }
    else {
      if (*(byte *)(param_1 + 0x30) < 0x40) {
        puVar23 = (ushort *)pcVar7;
        if (param_3 != (longlong *)0x0) {
          param_3[3] = (longlong)puVar17 - *param_3;
        }
        goto LAB_1400bef34;
      }
      pcVar9 = "@base: end of data";
    }
LAB_1400bf800:
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    uStack0000000000000028 = *(uint *)(param_1 + 0x8a4);
    local_res8 = *(int *)(param_1 + 0x8b8);
    puVar23 = *(ushort **)(param_1 + 0x898);
    uVar5 = *(uint *)(param_1 + 0x8a0);
    puVar20 = (ushort *)(ulonglong)uVar5;
    uVar21 = *(uint *)(param_1 + 0x8b4);
    puVar15 = (ushort *)(ulonglong)uVar21;
    local_98 = *(ulonglong *)(param_1 + 0x8a8);
    local_90 = (ushort *)(ulonglong)*(uint *)(param_1 + 0x8b0);
    local_88 = *(ushort **)(param_1 + 0x8c0);
    pcVar9 = pcVar7;
    iVar19 = iStack0000000000000030;
    switch(iStack0000000000000030) {
    case 1:
LAB_1400bef34:
      uVar21 = (uint)puVar15;
      uVar5 = (uint)puVar20;
      local_b8 = 0;
      lVar13 = 0;
      if ((param_3 != (longlong *)0x0) && (lVar16 = *param_3, lVar16 != 0)) {
        local_b8 = param_3[3] + lVar16;
        lVar13 = lVar16;
      }
      iStack0000000000000030 = *(int *)(param_1 + 0x74);
      if (iStack0000000000000030 == 0) {
        bVar1 = *(byte *)(param_1 + 0x30);
        if (bVar1 == 0x20) {
LAB_1400bf039:
          *(undefined1 *)(param_1 + 0x30) = 0x40;
        }
        else {
          if (bVar1 < 0x20) {
            if (param_3 != (longlong *)0x0) {
              param_3[3] = local_b8 - *param_3;
            }
            iStack0000000000000030 = 1;
            goto LAB_1400befa8;
          }
          if (bVar1 == 0x28) {
            if (param_3 == (longlong *)0x0) {
              uVar10 = 0;
            }
            else {
              uVar10 = param_3[4];
            }
            uVar8 = (local_b8 - lVar13) + uVar10;
            if (uVar8 < uVar10) {
              uVar8 = 0xffffffffffffffff;
            }
            pcVar7 = (char *)(ushort *)0x0;
            if (*(ulonglong *)(param_1 + 0x48) == uVar8) goto LAB_1400bf039;
            pcVar7 = "#base: bad restart";
            goto LAB_1400bf049;
          }
          pcVar7 = "@base: end of data";
          if (bVar1 == 0x40) {
            *(undefined1 *)(param_1 + 0x30) = 0x60;
          }
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
      else {
        if (iStack0000000000000030 == 1) {
LAB_1400befa8:
          pcVar7 = (char *)FUN_1400be000(param_1,0);
          if (param_3 != (longlong *)0x0) {
            local_b8 = param_3[3] + *param_3;
          }
          if ((ushort *)pcVar7 == (ushort *)0x0) goto LAB_1400bf039;
          if ((byte)*(ushort *)pcVar7 == 0x24) {
            *(int *)(param_1 + 0x74) = iStack0000000000000030;
            goto LAB_1400bf049;
          }
        }
        *(undefined4 *)(param_1 + 0x74) = 0;
      }
LAB_1400bf049:
      if (param_3 != (longlong *)0x0) {
        lVar13 = *param_3;
        if (lVar13 != 0) {
          param_3[3] = local_b8 - lVar13;
        }
        puVar17 = (ushort *)(param_3[3] + lVar13);
      }
      if ((ushort *)pcVar7 == (ushort *)0x0) goto LAB_1400bf072;
      pcVar9 = pcVar7;
      if ((byte)*(ushort *)pcVar7 != 0x24) {
        local_a8 = 0;
      }
      break;
    case 2:
      local_a0 = 0;
      local_b8 = 0;
      puVar22 = puVar12;
      goto LAB_1400bf372;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
LAB_1400bf229:
      pcVar9 = pcVar7;
      iVar19 = local_res8;
      if (param_2 != (uint *)0x0) {
        local_78 = *(longlong *)(param_2 + 4);
        uStack_70 = *(ulonglong *)(param_2 + 6);
        local_68 = *(ulonglong *)(param_2 + 8);
        lStack_60 = *(longlong *)(param_2 + 10);
        if ((((*param_2 & 0x40000) != 0) && (*(longlong *)(param_2 + 0x1e) == 0x400)) &&
           (*(longlong *)(param_2 + 0x20) == 1)) {
          local_b8 = *(longlong *)(param_2 + 0x1c);
          goto LAB_1400bf292;
        }
      }
      local_b8 = param_1 + 0x80;
LAB_1400bf292:
      if (uStack0000000000000028 < *(uint *)(param_1 + 0x2c)) {
        uVar10 = (ulonglong)uStack0000000000000028;
        if (uVar10 < local_68) {
          lVar13 = lStack_60 * uVar10 + local_78;
        }
        else {
          lVar13 = 0;
        }
        uVar8 = uStack_70;
        if (local_68 <= uVar10) {
          uVar8 = 0;
        }
        uVar10 = (longlong)puVar20 * (longlong)puVar23;
        if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
          puVar22 = (ushort *)(lVar13 + uVar10);
          puVar18 = (ushort *)(uVar8 - uVar10);
        }
        else {
          puVar22 = (ushort *)0x0;
          puVar18 = (ushort *)0x0;
        }
LAB_1400bf2f3:
        uVar11 = *(uint *)(param_1 + 0x28);
        uVar5 = (uint)puVar20;
        uVar21 = (uint)puVar15;
        if (uVar11 <= uVar5) goto LAB_1400bf70a;
        uVar14 = *(uint *)(param_1 + 0x40);
        if (uVar14 == 0) {
          if (uVar21 == 0) {
            if (iVar19 != 0) {
LAB_1400bf5da:
              iVar19 = iVar19 + -1;
              if (((undefined8 *)(param_1 + 0x50) != (undefined8 *)0x0) &&
                 (pcVar3 = *(code **)(param_1 + 0x50), pcVar3 != (code *)0x0)) {
                (*pcVar3)(puVar22,puVar18,local_b8,local_a0,param_1 + 0x880,
                          *(undefined4 *)(param_1 + 0x3c));
              }
              if (puVar23 <= puVar18) {
                puVar22 = (ushort *)((longlong)puVar22 + (longlong)puVar23);
                puVar18 = (ushort *)((longlong)puVar18 - (longlong)puVar23);
              }
              puVar20 = (ushort *)(ulonglong)(uVar5 + 1);
              local_res8 = iVar19;
              goto LAB_1400bf2f3;
            }
            if (local_c8 != puVar17) {
              bVar1 = (byte)*puVar17;
              if (bVar1 < 0x80) {
LAB_1400bf66d:
                puVar17 = (ushort *)((longlong)puVar17 + 1);
                if (bVar1 + 1 + uVar5 <= uVar11) {
                  puVar15 = (ushort *)(ulonglong)(bVar1 + 1);
                  goto LAB_1400bf2f3;
                }
              }
              else {
                if ((ulonglong)((longlong)local_c8 - (longlong)puVar17) < 3) {
                  iVar19 = 10;
                  goto LAB_1400bf792;
                }
                uVar2 = *(ushort *)((longlong)puVar17 + 1);
                *(undefined1 *)(param_1 + 0x883) = 0xff;
                puVar17 = (ushort *)((longlong)puVar17 + 3);
                *(byte *)(param_1 + 0x880) = (byte)((uVar2 & 0x1f) >> 2) | (char)(uVar2 & 0x1f) << 3
                ;
                uVar21 = uVar2 >> 5 & 0x1f;
                uVar14 = uVar2 >> 10 & 0x1f;
                *(byte *)(param_1 + 0x881) = (byte)(uVar21 >> 2) | (char)uVar21 << 3;
                *(byte *)(param_1 + 0x882) = (byte)(uVar14 >> 2) | (char)uVar14 << 3;
                if ((bVar1 & 0x7f) + 1 + uVar5 <= uVar11) {
                  iVar19 = (bVar1 & 0x7f) + 1;
                  local_res8 = iVar19;
                  goto LAB_1400bf2f3;
                }
              }
LAB_1400bf757:
              pcVar9 = "#tga: bad run length encoding";
              goto LAB_1400bf807;
            }
            iVar19 = 9;
          }
          else {
            if (1 < (ulonglong)((longlong)local_c8 - (longlong)puVar17)) {
              uVar2 = *puVar17;
              *(undefined1 *)(param_1 + 0x883) = 0xff;
              puVar17 = puVar17 + 1;
              *(byte *)(param_1 + 0x880) = (byte)((uVar2 & 0x1f) >> 2) | (char)(uVar2 & 0x1f) << 3;
              uVar11 = uVar2 >> 5 & 0x1f;
              uVar14 = uVar2 >> 10 & 0x1f;
              *(byte *)(param_1 + 0x881) = (byte)(uVar11 >> 2) | (char)uVar11 << 3;
              *(byte *)(param_1 + 0x882) = (byte)(uVar14 >> 2) | (char)uVar14 << 3;
              if (((undefined8 *)(param_1 + 0x50) != (undefined8 *)0x0) &&
                 (pcVar3 = *(code **)(param_1 + 0x50), pcVar3 != (code *)0x0)) {
                (*pcVar3)(puVar22,puVar18,local_b8,local_a0,(byte *)(param_1 + 0x880),4);
              }
              if (puVar23 <= puVar18) {
                puVar22 = (ushort *)((longlong)puVar22 + (longlong)puVar23);
                puVar18 = (ushort *)((longlong)puVar18 - (longlong)puVar23);
              }
              puVar20 = (ushort *)(ulonglong)(uVar5 + 1);
              puVar15 = (ushort *)(ulonglong)(uVar21 - 1);
              iVar19 = local_res8;
              goto LAB_1400bf2f3;
            }
            iVar19 = 8;
          }
        }
        else {
          if (uVar21 == 0) {
            if (iVar19 != 0) goto LAB_1400bf5da;
            uVar10 = (longlong)local_c8 - (longlong)puVar17;
            if (local_c8 == puVar17) {
              iVar19 = 4;
              goto LAB_1400bf792;
            }
            bVar1 = (byte)*puVar17;
            if (bVar1 < 0x80) goto LAB_1400bf66d;
            if (uVar14 == 1) {
              if (1 < uVar10) {
                *(byte *)(param_1 + 0x880) = *(byte *)((longlong)puVar17 + 1);
                lVar13 = 2;
                goto LAB_1400bf4d7;
              }
              iVar19 = 5;
              goto LAB_1400bf792;
            }
            if (uVar14 != 3) {
              if (4 < uVar10) {
                *(byte *)(param_1 + 0x880) = *(byte *)((longlong)puVar17 + 1);
                *(byte *)(param_1 + 0x881) = (byte)puVar17[1];
                *(byte *)(param_1 + 0x882) = *(byte *)((longlong)puVar17 + 3);
                *(byte *)(param_1 + 0x883) = (byte)puVar17[2];
                lVar13 = 5;
                goto LAB_1400bf4d7;
              }
              iVar19 = 7;
              goto LAB_1400bf792;
            }
            if (uVar10 < 4) {
              iVar19 = 6;
              goto LAB_1400bf792;
            }
            *(byte *)(param_1 + 0x880) = *(byte *)((longlong)puVar17 + 1);
            *(byte *)(param_1 + 0x881) = (byte)puVar17[1];
            *(byte *)(param_1 + 0x882) = *(byte *)((longlong)puVar17 + 3);
            lVar13 = 4;
LAB_1400bf4d7:
            puVar17 = (ushort *)((longlong)puVar17 + lVar13);
            if (uVar11 < (bVar1 & 0x7f) + 1 + uVar5) goto LAB_1400bf757;
            iVar19 = (bVar1 & 0x7f) + 1;
            local_res8 = iVar19;
            goto LAB_1400bf2f3;
          }
          iStack0000000000000030 = 2;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (longlong)local_c8 - (longlong)puVar17;
          local_98 = (longlong)puVar17 - local_80;
          if (SUB168(auVar4 / ZEXT416(uVar14),0) < puVar15) {
            puVar15 = (ushort *)(ulonglong)SUB164(auVar4 / ZEXT416(uVar14),0);
          }
          local_88 = (ushort *)((longlong)puVar15 * (longlong)puVar23);
          *(ulonglong *)(param_1 + 0x8c8) = (ulonglong)((int)puVar15 * uVar14);
          puVar12 = puVar18;
          local_90 = puVar15;
LAB_1400bf372:
          uVar10 = *(ulonglong *)(param_1 + 0x8c8);
          if (uVar10 <= (ulonglong)((longlong)local_c8 - (longlong)puVar17)) {
            puVar17 = (ushort *)((longlong)puVar17 + uVar10);
            uVar10 = (longlong)puVar17 - local_80;
            lVar13 = local_80 + local_98;
            if (uVar10 < local_98) {
              lVar13 = 0;
            }
            lVar16 = uVar10 - local_98;
            if (uVar10 < local_98) {
              lVar16 = 0;
            }
            if (((undefined8 *)(param_1 + 0x50) != (undefined8 *)0x0) &&
               (pcVar3 = *(code **)(param_1 + 0x50), pcVar3 != (code *)0x0)) {
              (*pcVar3)(puVar22,puVar12,local_b8,local_a0,lVar13,lVar16);
            }
            puVar18 = (ushort *)((longlong)puVar12 - (longlong)local_88);
            if (puVar12 < local_88) {
              puVar18 = (ushort *)0x0;
            }
            puVar22 = (ushort *)((longlong)puVar22 + (longlong)local_88);
            if (puVar12 < local_88) {
              puVar22 = (ushort *)0x0;
            }
            uVar5 = uVar5 + (int)local_90;
            puVar20 = (ushort *)(ulonglong)uVar5;
            uVar21 = uVar21 - (int)local_90 & 0xffff;
            if (uVar21 != 0) {
              iVar19 = 3;
              goto LAB_1400bf792;
            }
            puVar15 = (ushort *)0x0;
            iVar19 = local_res8;
            goto LAB_1400bf2f3;
          }
          *(byte **)(param_1 + 0x8c8) = (byte *)((uVar10 - (longlong)local_c8) + (longlong)puVar17);
          puVar17 = local_c8;
          iVar19 = iStack0000000000000030;
        }
LAB_1400bf792:
        pcVar9 = "$base: short read";
        break;
      }
      *(undefined1 *)(param_1 + 0x30) = 0x60;
      goto LAB_1400bf800;
    default:
      local_a8 = 0;
    }
    *(ushort **)(param_1 + 0x898) = puVar23;
    *(uint *)(param_1 + 0x8a0) = uVar5;
    iVar6 = 0;
    if (local_a8 != 0) {
      iVar6 = iVar19;
    }
    *(uint *)(param_1 + 0x8b4) = uVar21;
    *(int *)(param_1 + 0x7c) = iVar6;
    *(uint *)(param_1 + 0x8a4) = uStack0000000000000028;
    *(ulonglong *)(param_1 + 0x8a8) = local_98;
    *(int *)(param_1 + 0x8b0) = (int)local_90;
    *(ushort **)(param_1 + 0x8c0) = local_88;
    *(int *)(param_1 + 0x8b8) = local_res8;
  }
LAB_1400bf807:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar17 - *param_3;
  }
  return (ushort *)pcVar9;
LAB_1400bf70a:
  puVar20 = (ushort *)0x0;
  uVar5 = uStack0000000000000028 + 1;
  uStack0000000000000028 = uStack0000000000000028 - 1;
  if ((*(byte *)(param_1 + 0x3a) & 0x20) != 0) {
    uStack0000000000000028 = uVar5;
  }
  if ((*(byte *)(param_1 + 0x33) & 8) == 0) {
    puVar15 = (ushort *)(ulonglong)uVar11;
  }
  goto LAB_1400bf292;
}

