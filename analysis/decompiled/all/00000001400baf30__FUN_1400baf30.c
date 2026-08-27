// Function: FUN_1400baf30
// Addr: 1400baf30
// Size: 1691 bytes


uint * FUN_1400baf30(longlong param_1,uint *param_2,longlong *param_3,undefined1 param_4,
                    longlong *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong uStack_50;
  
  pcVar9 = (char *)0x0;
  puVar12 = (uint *)pcVar9;
  puVar17 = (uint *)pcVar9;
  if ((param_3 != (longlong *)0x0) &&
     (lVar5 = *param_3, puVar12 = (uint *)0x0, puVar17 = (uint *)0x0, lVar5 != 0)) {
    puVar17 = (uint *)(param_3[3] + lVar5);
    puVar12 = (uint *)(param_3[2] + lVar5);
  }
  uVar13 = *(undefined4 *)(param_1 + 0x188);
  puVar11 = (uint *)pcVar9;
  switch(uVar13) {
  case 0:
    bVar4 = *(byte *)(param_1 + 0x58);
    if ((bVar4 & 0x10) != 0) {
      pcVar9 = "#base: bad call sequence";
      goto LAB_1400bb5ad;
    }
    if (0x5f < bVar4) {
      pcVar9 = "@base: end of data";
      *(undefined4 *)(param_1 + 0x188) = 0;
      goto LAB_1400bb5ad;
    }
    pcVar9 = (char *)(uint *)0x0;
    if (bVar4 != 0x40) {
      if (param_3 != (longlong *)0x0) {
        param_3[3] = (longlong)puVar17 - *param_3;
      }
      uVar13 = 1;
      goto switchD_1400bafa4_caseD_1;
    }
  case 2:
switchD_1400bafa4_caseD_2:
    for (; 7 < (ulonglong)((longlong)puVar12 - (longlong)puVar17);
        puVar17 = (uint *)((longlong)puVar17 + uVar10)) {
      uVar15 = *puVar17;
      uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
      *(uint *)(param_1 + 0x7c) = uVar15;
      iVar7 = (int)((ulonglong)*(undefined8 *)puVar17 >> 0x20);
      *(int *)(param_1 + 0x74) = iVar7;
      if (iVar7 == 0x54414449) {
        puVar17 = puVar17 + 2;
        *(undefined1 *)(param_1 + 0x78) = 0x49;
        *(undefined2 *)(param_1 + 0x79) = 0x4144;
        *(undefined1 *)(param_1 + 0x7b) = 0x54;
        puVar11 = (uint *)pcVar9;
        if (*(char *)(param_1 + 0x5f) == '\0') {
          puVar1 = (undefined4 *)(param_1 + 0x1a0);
          if (puVar1 != (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 0x1a4) = 0;
            *(undefined8 *)(param_1 + 0x1b8) = 0;
            *(undefined8 *)(param_1 + 0x1c0) = 0;
            *(undefined8 *)(param_1 + 0x1c8) = 0;
            *(code **)(param_1 + 0x1d0) = FUN_1400aa900;
            *(char **)(param_1 + 0x1a8) = "{vtable}wuffs_base__hasher_u32";
            *(undefined ***)(param_1 + 0x1b0) = &PTR_FUN_14047aab0;
            *puVar1 = 0x3ccb6c71;
          }
          lStack_60 = 4;
          local_68 = param_1 + 0x78;
          FUN_1400aa820(puVar1,&local_68);
        }
        goto LAB_1400bb24f;
      }
      if (iVar7 == 0x54416466) {
        *(undefined4 *)(param_1 + 0x78) = 0x54416466;
        if (3 < uVar15) {
          puVar17 = puVar17 + 2;
          *(uint *)(param_1 + 0x7c) = uVar15 - 4;
          goto switchD_1400bafa4_caseD_3;
        }
LAB_1400bb084:
        pcVar9 = "#png: bad chunk";
        goto LAB_1400bb5ad;
      }
      if (iVar7 == 0x4c546366) goto LAB_1400bb084;
      uVar13 = 5;
      *(ulonglong *)(param_1 + 0xae38) = (ulonglong)uVar15 + 0xc;
switchD_1400bafa4_caseD_5:
      uVar10 = *(ulonglong *)(param_1 + 0xae38);
      if ((ulonglong)((longlong)puVar12 - (longlong)puVar17) < uVar10) {
        *(byte **)(param_1 + 0xae38) = (byte *)((uVar10 - (longlong)puVar12) + (longlong)puVar17);
        puVar17 = puVar12;
        goto LAB_1400bb181;
      }
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    pcVar9 = "$base: short read";
    uVar13 = 2;
    bVar6 = true;
    break;
  case 1:
switchD_1400bafa4_caseD_1:
    pcVar9 = (char *)FUN_1400ba490(param_1,0);
    if (param_3 != (longlong *)0x0) {
      puVar17 = (uint *)(param_3[3] + *param_3);
    }
    if ((uint *)pcVar9 == (uint *)0x0) goto switchD_1400bafa4_caseD_2;
LAB_1400bb58a:
    if ((byte)*(uint *)pcVar9 != 0x24) goto switchD_1400bafa4_default;
    bVar6 = true;
    break;
  case 3:
switchD_1400bafa4_caseD_3:
    if (3 < (longlong)puVar12 - (longlong)puVar17) {
      uVar15 = *puVar17;
      puVar17 = puVar17 + 1;
      uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18;
LAB_1400bb21c:
      uVar16 = *(uint *)(param_1 + 0xe4);
      if (uVar15 == uVar16) {
        if (uVar16 == 0xffffffff) {
          pcVar9 = "#png: unsupported PNG file";
        }
        else {
          *(uint *)(param_1 + 0xe4) = uVar16 + 1;
          puVar11 = (uint *)pcVar9;
LAB_1400bb24f:
          if (*(char *)(param_1 + 0x70) != '\0') {
            piVar2 = (int *)(param_1 + 0x1d8);
            FUN_1400b5890(piVar2);
            if (((*(char *)(param_1 + 0x5f) != '\0') && (piVar2 != (int *)0x0)) &&
               (*piVar2 == 0x3ccb6c71)) {
              if (*(char *)(param_1 + 0x201) == '\0') {
                *(undefined1 *)(param_1 + 0x205) = 1;
              }
              else {
                *(undefined1 *)(param_1 + 0x200) = 1;
              }
            }
          }
          *(undefined1 *)(param_1 + 0x70) = 1;
          local_68 = param_1 + 0xa9b8;
          if (((param_2 == (uint *)0x0) || ((*param_2 & 0x40000) == 0)) ||
             ((*(longlong *)(param_2 + 0x1e) != 0x400 || (*(longlong *)(param_2 + 0x20) != 1)))) {
            local_58 = param_1 + 0xa5b8;
            if (param_2 == (uint *)0x0) {
              uVar15 = 0;
            }
            else {
              uVar15 = *param_2;
            }
          }
          else {
            local_58 = *(longlong *)(param_2 + 0x1c);
            uVar15 = *param_2;
          }
          lStack_60 = 0x400;
          uStack_50 = 0x400;
          pcVar9 = (char *)FUN_1400a24c0(param_1 + 0x118,uVar15,&local_58,
                                         *(undefined4 *)(param_1 + 0x8c),&local_68,param_4);
          if ((uint *)pcVar9 == (uint *)0x0) {
            *(undefined8 *)(param_1 + 0x40) = 0;
            while( true ) {
              if (*(char *)(param_1 + 0x78) == 'I') {
                uVar10 = (ulonglong)*(byte *)(param_1 + 99);
                uVar15 = (uint)(byte)(&DAT_1404798c1)[uVar10 * 6] + *(int *)(param_1 + 0x28) >>
                         ((&DAT_1404798c0)[uVar10 * 6] & 0x1f);
                uVar16 = (uint)(byte)(&DAT_1404798c4)[uVar10 * 6] + *(int *)(param_1 + 0x2c) >>
                         ((&DAT_1404798c3)[uVar10 * 6] & 0x1f);
              }
              else {
                uVar15 = *(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xa0);
                uVar16 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa4);
              }
              uVar15 = uVar15 & 0xffffff;
              pcVar9 = (char *)puVar11;
              if ((uVar15 != 0) && ((uVar16 & 0xffffff) != 0)) {
                bVar4 = *(byte *)(param_1 + 0x60);
                if (bVar4 == 1) {
                  uVar10 = (ulonglong)(uVar15 + 7 >> 3);
                }
                else if (bVar4 == 2) {
                  uVar10 = (ulonglong)(uVar15 + 3 >> 2);
                }
                else if (bVar4 == 4) {
                  uVar10 = (ulonglong)(uVar15 + 1 >> 1);
                }
                else {
                  uVar10 = (ulonglong)(byte)(&DAT_1404795f0)[*(byte *)(param_1 + 0x61)] *
                           (ulonglong)(bVar4 >> 3) * (ulonglong)uVar15;
                }
                *(ulonglong *)(param_1 + 0x30) = uVar10;
                *(ulonglong *)(param_1 + 0x50) = (uVar10 + 1) * (ulonglong)(uVar16 & 0xffffff);
switchD_1400bafa4_caseD_6:
                local_68 = *param_5;
                lStack_60 = param_5[1];
                if (param_3 == (longlong *)0x0) {
                  pcVar9 = (char *)FUN_1400bb600(param_1,0);
                }
                else {
                  param_3[3] = (longlong)puVar17 - *param_3;
                  pcVar9 = (char *)FUN_1400bb600(param_1,param_3);
                  puVar17 = (uint *)(param_3[3] + *param_3);
                }
                if ((uint *)pcVar9 != (uint *)0x0) {
                  if (((byte)*(uint *)pcVar9 == 0x23) ||
                     (((pcVar9 == "$base: short read" && (param_3 != (longlong *)0x0)) &&
                      ((char)param_3[5] != '\0')))) {
                    uStack_50 = *(ulonglong *)(param_1 + 0x38);
                    if (uStack_50 <= (ulonglong)param_5[1]) {
                      local_58 = *param_5;
                      (**(code **)(param_1 + 0x198))(param_1,param_2);
                    }
                    if (pcVar9 == "$base: short read") {
                      pcVar9 = "#png: truncated input";
                      goto LAB_1400bb5ad;
                    }
                  }
                  if ((byte)*(uint *)pcVar9 != 0x24) goto LAB_1400bb5ad;
                  uVar13 = 6;
                  goto LAB_1400bb58a;
                }
                local_58 = *param_5;
                uStack_50 = param_5[1];
                pcVar9 = (char *)(**(code **)(param_1 + 0x198))(param_1,param_2);
                if ((uint *)pcVar9 != (uint *)0x0) goto LAB_1400bb341;
                *(longlong *)(param_1 + 0x40) =
                     *(longlong *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x50);
                pcVar9 = (char *)puVar11;
              }
              cVar3 = *(char *)(param_1 + 99);
              if (5 < (byte)(cVar3 - 1U)) break;
              *(char *)(param_1 + 99) = cVar3 + '\x01';
              puVar11 = (uint *)pcVar9;
            }
            *(undefined1 *)(param_1 + 0x58) = 0x20;
            uVar15 = *(uint *)(param_1 + 0x9c) + 1;
            if (uVar15 < *(uint *)(param_1 + 0x9c)) {
              uVar15 = 0xffffffff;
            }
            *(uint *)(param_1 + 0x9c) = uVar15;
          }
          else {
LAB_1400bb341:
            if ((byte)*(uint *)pcVar9 == 0x23) goto LAB_1400bb5ad;
            if ((byte)*(uint *)pcVar9 == 0x24) {
              pcVar9 = "#base: cannot return a suspension";
              goto LAB_1400bb5ad;
            }
          }
          *(undefined4 *)(param_1 + 0x188) = 0;
        }
      }
      else {
        pcVar9 = "#png: bad animation sequence number";
      }
      goto LAB_1400bb5ad;
    }
    *(undefined8 *)(param_1 + 0xae38) = 0;
    uVar13 = 4;
  case 4:
    if (puVar17 == puVar12) {
LAB_1400bb181:
      pcVar9 = "$base: short read";
      bVar6 = true;
    }
    else {
      do {
        uVar15 = *(uint *)(param_1 + 0xae38);
        uVar10 = *(ulonglong *)(param_1 + 0xae38) & 0xffffffffffffff00;
        uVar14 = uVar15 & 0xff;
        *(ulonglong *)(param_1 + 0xae38) = uVar10;
        uVar16 = *puVar17;
        puVar17 = (uint *)((longlong)puVar17 + 1);
        uVar10 = (ulonglong)(byte)uVar16 << (0x38U - (char)uVar15 & 0x3f) | uVar10;
        *(ulonglong *)(param_1 + 0xae38) = uVar10;
        if (uVar14 == 0x18) {
          uVar15 = (uint)(uVar10 >> 0x20);
          goto LAB_1400bb21c;
        }
        *(ulonglong *)(param_1 + 0xae38) = uVar14 + 8 | uVar10;
      } while (puVar17 != puVar12);
      pcVar9 = "$base: short read";
      bVar6 = true;
    }
    break;
  case 5:
    goto switchD_1400bafa4_caseD_5;
  case 6:
    goto switchD_1400bafa4_caseD_6;
  default:
switchD_1400bafa4_default:
    bVar6 = false;
  }
  uVar8 = 0;
  if (bVar6) {
    uVar8 = uVar13;
  }
  *(undefined4 *)(param_1 + 0x188) = uVar8;
LAB_1400bb5ad:
  if ((param_3 != (longlong *)0x0) && (*param_3 != 0)) {
    param_3[3] = (longlong)puVar17 - *param_3;
  }
  return (uint *)pcVar9;
}

