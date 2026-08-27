// Function: FUN_1400a24c0
// Addr: 1400a24c0
// Size: 4622 bytes


/* WARNING: Removing unreachable block (ram,0x0001400a297c) */
/* WARNING: Removing unreachable block (ram,0x0001400a289d) */
/* WARNING: Removing unreachable block (ram,0x0001400a35af) */

char * FUN_1400a24c0(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4,
                    undefined8 *param_5,char param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  code *pcVar16;
  uint uVar17;
  bool bVar18;
  undefined8 in_stack_ffffffffffffffc8;
  uint7 uVar19;
  code *pcVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    return "#base: bad receiver";
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar9 = (uint)param_2;
  if ((((((param_2 & 0x30000) != 0) ||
        (uVar15 = (&DAT_140482a50)[(uint)((param_2 & 0xffffffff) >> 0xc) & 0xf] +
                  (&DAT_140482a50)[(uint)(param_2 >> 8) & 0xf] +
                  (&DAT_140482a50)[(uint)((param_2 & 0xffffffff) >> 4) & 0xf] +
                  (&DAT_140482a50)[uVar9 & 0xf], uVar15 == 0)) || ((uVar15 & 7) != 0)) ||
      ((uVar12 = (uint)param_4, (param_4 & 0x30000) != 0 ||
       (uVar17 = (&DAT_140482a50)[(uint)((param_4 & 0xffffffff) >> 0xc) & 0xf] +
                 (&DAT_140482a50)[(uint)(param_4 >> 8) & 0xf] +
                 (&DAT_140482a50)[(uint)((param_4 & 0xffffffff) >> 4) & 0xf] +
                 (&DAT_140482a50)[uVar12 & 0xf], uVar17 == 0)))) || ((uVar17 & 7) != 0)) {
    return "#base: unsupported pixel swizzler option";
  }
  pcVar6 = (code *)0x0;
  pcVar5 = (code *)0x0;
  pcVar16 = (code *)0x0;
  if (param_6 == '\0') {
    pcVar16 = FUN_1400a2460;
  }
  else if (param_6 == '\x01') {
    pcVar16 = (code *)&LAB_1400a24a0;
  }
  uVar19 = (uint7)((ulonglong)in_stack_ffffffffffffffc8 >> 8);
  if (0x81040008 < uVar12) {
    if (0xa0000888 < uVar12) {
      if (uVar12 == 0xa1008888) {
        if (0x8100bbbb < uVar9) {
          if (uVar9 == 0x82008888) {
LAB_1400a2be3:
            if (param_6 == '\0') {
              pcVar6 = FUN_1400a0ab0;
            }
            else {
              pcVar6 = pcVar5;
              if (param_6 == '\x01') {
                pcVar6 = FUN_1400a0ba0;
              }
            }
            goto LAB_1400a367a;
          }
          if (uVar9 != 0xa1008888) {
            pcVar6 = pcVar5;
            if (uVar9 != 0xa2008888) goto LAB_1400a367a;
            goto LAB_1400a364f;
          }
          goto LAB_1400a2b33;
        }
        if (uVar9 == 0x8100bbbb) {
          if (param_6 == '\0') {
            pcVar6 = FUN_14009fd00;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009fd80;
            }
          }
          goto LAB_1400a367a;
        }
        if (uVar9 == 0x80000565) {
          if (param_6 == '\0') {
            pcVar6 = FUN_14009d290;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009d3d0;
            }
          }
          goto LAB_1400a367a;
        }
        if (uVar9 == 0x80000888) {
          if (param_6 == '\0') {
            pcVar6 = FUN_14009e110;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009e240;
            }
          }
          goto LAB_1400a367a;
        }
        pcVar6 = pcVar5;
        if (uVar9 != 0x81008888) goto LAB_1400a367a;
LAB_1400a358f:
        if (param_6 != '\0') {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = FUN_14009ee60;
          }
          goto LAB_1400a367a;
        }
      }
      else {
        pcVar6 = pcVar5;
        if (uVar12 != 0xa2008888) goto LAB_1400a367a;
        if (uVar9 < 0x8100bbbc) {
          if (uVar9 == 0x8100bbbb) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009ffa0;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_1400a00f0;
            }
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000565) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009d510;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009d5b0;
            }
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000888) {
            if (param_6 == '\0') {
              pcVar6 = (code *)&LAB_14009e350;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009e3c0;
            }
            goto LAB_1400a367a;
          }
          if (uVar9 != 0x81008888) goto LAB_1400a367a;
LAB_1400a3494:
          if (param_6 == '\0') {
            pcVar6 = FUN_14009f070;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009f170;
            }
          }
          goto LAB_1400a367a;
        }
        if (uVar9 != 0x82008888) {
          if (uVar9 != 0xa1008888) {
            if (uVar9 != 0xa2008888) goto LAB_1400a367a;
            goto LAB_1400a3544;
          }
          goto LAB_1400a32c1;
        }
LAB_1400a3379:
        if (param_6 != '\0') {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = FUN_1400a0fb0;
          }
          goto LAB_1400a367a;
        }
      }
      lVar7 = cpuid_Version_info(1);
      pcVar6 = FUN_14009c8a0;
      if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
        pcVar6 = FUN_14009c800;
      }
      goto LAB_1400a367a;
    }
    if (uVar12 == 0xa0000888) {
      if (uVar9 < 0x90008889) {
        if (uVar9 != 0x90008888) {
          if (0x8100bbbb < uVar9) {
            bVar18 = (uVar9 + 0x7dff7778 & 0xfeffffff) == 0;
            goto LAB_1400a296f;
          }
          if (uVar9 == 0x8100bbbb) {
            pcVar6 = (code *)&LAB_1400a15b0;
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000565) {
            pcVar6 = FUN_14009d200;
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000888) goto LAB_1400a2955;
          pcVar6 = pcVar5;
          if (uVar9 != 0x81008888) goto LAB_1400a367a;
        }
        goto LAB_1400a2975;
      }
      if (uVar9 == 0xa0000888) {
LAB_1400a3440:
        pcVar6 = FUN_14009c990;
        goto LAB_1400a367a;
      }
      if (((uVar9 != 0xa1008888) && (uVar9 != 0xa2008888)) &&
         ((uVar9 != 0xa3008888 && (pcVar6 = pcVar5, uVar9 != 0xb0008888)))) goto LAB_1400a367a;
      goto LAB_1400a3434;
    }
    if (uVar12 == 0x82008888) {
      if (uVar9 < 0x8100bbbc) {
        if (uVar9 == 0x8100bbbb) {
          if (param_6 == '\0') {
            pcVar6 = FUN_14009f7a0;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009f8d0;
            }
          }
          goto LAB_1400a367a;
        }
        if (uVar9 == 0x80000565) {
          if (param_6 == '\0') {
            pcVar6 = FUN_14009d030;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009d0c0;
            }
          }
          goto LAB_1400a367a;
        }
        if (uVar9 == 0x80000888) {
          if (param_6 == '\0') {
            pcVar6 = (code *)&LAB_14009dfb0;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009e010;
            }
          }
          goto LAB_1400a367a;
        }
        pcVar6 = pcVar5;
        if (uVar9 != 0x81008888) goto LAB_1400a367a;
LAB_1400a32c1:
        if (param_6 == '\0') {
          pcVar6 = FUN_14009e990;
        }
        else {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = FUN_14009ea80;
          }
        }
        goto LAB_1400a367a;
      }
      if (uVar9 != 0x82008888) {
        if (uVar9 != 0xa1008888) {
          pcVar6 = pcVar5;
          if (uVar9 != 0xa2008888) goto LAB_1400a367a;
          goto LAB_1400a3379;
        }
        goto LAB_1400a3494;
      }
LAB_1400a3544:
      if (param_6 != '\0') {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = FUN_1400a07b0;
        }
        goto LAB_1400a367a;
      }
    }
    else {
      if (uVar12 == 0x83040008) {
        puVar13 = (undefined1 *)*param_3;
        uVar11 = param_3[1];
        puVar14 = (undefined1 *)*param_5;
        uVar8 = param_5[1];
        if (uVar9 < 0x82040009) {
          if (uVar9 == 0x82040008) {
LAB_1400a31fe:
            if (uVar8 <= uVar11) {
              uVar11 = uVar8;
            }
            goto joined_r0x0001400a3208;
          }
          if (uVar9 < 0x8100bbbc) {
            if (uVar9 == 0x8100bbbb) {
LAB_1400a3162:
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              if (uVar11 != 0) {
                FUN_1404210f0(puVar13,puVar14,uVar11);
              }
              if (uVar11 == 0x400) {
                if (param_6 == '\0') goto LAB_1400a2c91;
                if (param_6 == '\x01') {
                  pcVar6 = FUN_1400a2210;
                  goto LAB_1400a367a;
                }
              }
            }
            else if (uVar9 == 0x80000565) {
              lVar7 = FUN_14009c620(puVar13,uVar11,puVar14,uVar8,(ulonglong)uVar19 << 8);
              if (lVar7 == 0x100) {
                if (param_6 == '\0') {
                  pcVar6 = FUN_14009d7f0;
                  goto LAB_1400a367a;
                }
                if (param_6 == '\x01') {
                  pcVar6 = (code *)&LAB_14009da90;
                  goto LAB_1400a367a;
                }
              }
            }
            else if (uVar9 == 0x80000888) {
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              if (uVar11 != 0) {
                FUN_1404210f0(puVar13,puVar14,uVar11);
              }
              if (uVar11 == 0x400) goto LAB_1400a30d2;
            }
            else if (uVar9 == 0x81008888) goto LAB_1400a3067;
          }
          else {
            if (uVar9 == 0x81040008) goto LAB_1400a31fe;
            if (uVar9 == 0x82008888) {
LAB_1400a3067:
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              if (uVar11 != 0) {
                FUN_1404210f0(puVar13,puVar14,uVar11);
              }
              if (uVar11 == 0x400) goto LAB_1400a308e;
            }
            else if (uVar9 == 0x8200bbbb) goto LAB_1400a3162;
          }
        }
        else if (uVar9 < 0xa1008889) {
          if (uVar9 == 0xa1008888) {
LAB_1400a322b:
            if (uVar11 < uVar8) {
              uVar8 = uVar11;
            }
            uVar11 = uVar8 >> 2;
            if (3 < uVar8) {
              do {
                uVar2 = *puVar14;
                uVar3 = puVar14[1];
                uVar4 = puVar14[3];
                puVar1 = puVar14 + 2;
                puVar14 = puVar14 + 4;
                *puVar13 = *puVar1;
                puVar13[1] = uVar3;
                puVar13[2] = uVar2;
                puVar13[3] = uVar4;
                uVar11 = uVar11 - 1;
                puVar13 = puVar13 + 4;
              } while (uVar11 != 0);
            }
            if (uVar8 >> 2 != 0x100) {
              pcVar6 = (code *)0x0;
              goto LAB_1400a367a;
            }
LAB_1400a308e:
            if (param_6 == '\0') goto LAB_1400a3287;
            if (param_6 == '\x01') {
              pcVar6 = (code *)&LAB_1400a1f60;
              goto LAB_1400a367a;
            }
          }
          else {
            if (uVar9 == 0x83008888) goto LAB_1400a3067;
            if (uVar9 == 0x83040008) goto LAB_1400a31fe;
            if (uVar9 == 0xa0000888) {
              lVar7 = FUN_14009c8a0(puVar13,uVar11,0,0,puVar14,uVar8);
              if (lVar7 != 0x100) {
                pcVar6 = (code *)0x0;
                goto LAB_1400a367a;
              }
LAB_1400a30d2:
              if (param_6 == '\0') {
                pcVar6 = FUN_1400a19f0;
                goto LAB_1400a367a;
              }
              if (param_6 == '\x01') {
                pcVar6 = FUN_1400a1c80;
                goto LAB_1400a367a;
              }
            }
          }
        }
        else if ((uVar9 + 0x5dff7778 & 0xfeffffff) == 0) goto LAB_1400a322b;
        goto LAB_1400a2dd7;
      }
      pcVar6 = pcVar5;
      if (uVar12 != 0x90008888) goto LAB_1400a367a;
      if (uVar9 < 0x83008889) {
        if (uVar9 != 0x83008888) {
          if (uVar9 == 0x80000565) {
            pcVar6 = FUN_14009cb10;
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000888) {
            pcVar6 = (code *)&LAB_1400a1da0;
            goto LAB_1400a367a;
          }
          if (uVar9 != 0x81008888) {
            if (uVar9 == 0x8100bbbb) {
              pcVar6 = (code *)&LAB_1400a1540;
              goto LAB_1400a367a;
            }
            if (uVar9 != 0x82008888) goto LAB_1400a367a;
          }
        }
        pcVar6 = (code *)&LAB_1400a1220;
        goto LAB_1400a367a;
      }
      if (uVar9 != 0x90008888) {
        if ((((uVar9 == 0xa1008888) || (uVar9 == 0xa2008888)) || (uVar9 == 0xa3008888)) ||
           (uVar9 == 0xb0008888)) {
          pcVar6 = (code *)&LAB_1400a1380;
        }
        goto LAB_1400a367a;
      }
    }
LAB_1400a366a:
    pcVar6 = FUN_14009c9e0;
    goto LAB_1400a367a;
  }
  if (uVar12 == 0x81040008) {
    puVar13 = (undefined1 *)*param_3;
    uVar11 = param_3[1];
    puVar14 = (undefined1 *)*param_5;
    uVar8 = param_5[1];
    if (uVar9 < 0x81040009) {
      if (uVar9 == 0x81040008) {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
joined_r0x0001400a3208:
        if (uVar11 != 0) {
          FUN_1404210f0(puVar13,puVar14,uVar11);
        }
        if (uVar11 == 0x400) {
          pcVar6 = FUN_14009c910;
          if (param_6 != '\0') {
            pcVar6 = (code *)0x0;
          }
          goto LAB_1400a367a;
        }
      }
      else if (uVar9 == 0x80000565) {
        if (param_6 == '\0') {
          lVar7 = FUN_14009c620(puVar13,uVar11,puVar14,uVar8,CONCAT71(uVar19,1));
          pcVar6 = FUN_14009d7f0;
          if (lVar7 != 0x100) {
            pcVar6 = (code *)0x0;
          }
          goto LAB_1400a367a;
        }
        if (param_6 == '\x01') {
          if (uVar8 <= uVar11) {
            uVar11 = uVar8;
          }
          if (uVar11 != 0) {
            FUN_1404210f0(puVar13,puVar14,uVar11);
          }
          pcVar6 = FUN_14009d8b0;
          if (uVar11 != 0x400) {
            pcVar6 = (code *)0x0;
          }
          goto LAB_1400a367a;
        }
      }
      else if (uVar9 == 0x80000888) {
        if (param_6 == '\0') {
          lVar7 = FUN_1400a02d0(puVar13,uVar11,0,0,puVar14,uVar8);
          pcVar6 = FUN_1400a19f0;
          if (lVar7 != 0x100) {
            pcVar6 = (code *)0x0;
          }
          goto LAB_1400a367a;
        }
        if (param_6 == '\x01') {
          if (uVar8 <= uVar11) {
            uVar11 = uVar8;
          }
          if (uVar11 != 0) {
            FUN_1404210f0(puVar13,puVar14,uVar11);
          }
          pcVar6 = FUN_1400a1ad0;
          if (uVar11 != 0x400) {
            pcVar6 = (code *)0x0;
          }
          goto LAB_1400a367a;
        }
      }
      else if (uVar9 == 0x81008888) {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
          FUN_1404210f0(puVar13,puVar14,uVar11);
        }
        if (uVar11 == 0x400) {
          if (param_6 == '\0') goto LAB_1400a3287;
          if (param_6 == '\x01') goto LAB_1400a2cd2;
        }
      }
      else if (uVar9 == 0x8100bbbb) {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
          FUN_1404210f0(puVar13,puVar14,uVar11);
        }
        if (uVar11 == 0x400) {
          if (param_6 == '\0') {
LAB_1400a2c91:
            pcVar6 = FUN_1400a2160;
            goto LAB_1400a367a;
          }
          if (param_6 == '\x01') {
            pcVar6 = FUN_14009fab0;
            goto LAB_1400a367a;
          }
        }
      }
    }
    else if (uVar9 == 0x82008888) {
      if (param_6 == '\0') {
        lVar7 = FUN_1400a02d0(puVar13,uVar11,0,0,puVar14,uVar8);
        pcVar6 = FUN_1400a1ea0;
        if (lVar7 != 0x100) {
          pcVar6 = (code *)0x0;
        }
        goto LAB_1400a367a;
      }
      if (param_6 == '\x01') {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
          FUN_1404210f0(puVar13,puVar14,uVar11);
        }
        pcVar6 = FUN_1400a0900;
        if (uVar11 != 0x400) {
          pcVar6 = (code *)0x0;
        }
        goto LAB_1400a367a;
      }
    }
    else if (uVar9 == 0xa1008888) {
      lVar7 = FUN_14009c8a0(puVar13,uVar11,0,0,puVar14,uVar8);
      if (lVar7 == 0x100) {
        if (param_6 != '\0') {
          if (param_6 != '\x01') {
            pcVar6 = (code *)0x0;
            goto LAB_1400a367a;
          }
LAB_1400a2cd2:
          pcVar6 = FUN_14009ec40;
          goto LAB_1400a367a;
        }
LAB_1400a3287:
        pcVar6 = FUN_1400a1ea0;
        goto LAB_1400a367a;
      }
    }
    else if (uVar9 == 0xa2008888) {
      if (param_6 == '\0') {
        lVar7 = FUN_1400a0ab0(puVar13,uVar11,0,0,puVar14,uVar8);
        pcVar6 = FUN_1400a1ea0;
        if (lVar7 != 0x100) {
          pcVar6 = (code *)0x0;
        }
        goto LAB_1400a367a;
      }
      if (param_6 == '\x01') {
        lVar7 = FUN_14009c8a0(puVar13,uVar11,0,0,puVar14,uVar8);
        pcVar6 = FUN_1400a0900;
        if (lVar7 != 0x100) {
          pcVar6 = (code *)0x0;
        }
        goto LAB_1400a367a;
      }
    }
LAB_1400a2dd7:
    pcVar6 = (code *)0x0;
    goto LAB_1400a367a;
  }
  if (0x80000888 < uVar12) {
    if (uVar12 != 0x81008888) {
      pcVar6 = pcVar5;
      if (uVar12 == 0x8100bbbb) {
        if (uVar9 < 0x8100bbbc) {
          if (uVar9 == 0x8100bbbb) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009ca30;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009f5d0;
            }
          }
          else if (uVar9 == 0x80000565) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009ccc0;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009cf10;
            }
          }
          else if (uVar9 == 0x80000888) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009dcb0;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009deb0;
            }
          }
          else if (uVar9 == 0x81008888) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009e6b0;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009e740;
            }
          }
        }
        else if (uVar9 == 0x82008888) {
          if (param_6 == '\0') {
            pcVar6 = FUN_1400a03c0;
          }
          else if (param_6 == '\x01') {
            pcVar6 = FUN_1400a0600;
          }
        }
        else if (uVar9 == 0xa1008888) {
          if (param_6 == '\0') {
            pcVar6 = FUN_1400a1630;
          }
          else if (param_6 == '\x01') {
            pcVar6 = FUN_1400a16c0;
          }
        }
        else if (uVar9 == 0xa2008888) {
          if (param_6 == '\0') {
            pcVar6 = FUN_1400a0d10;
          }
          else if (param_6 == '\x01') {
            pcVar6 = FUN_1400a0e00;
          }
        }
      }
      goto LAB_1400a367a;
    }
    if (0x8100bbbb < uVar9) {
      if (uVar9 == 0x82008888) {
LAB_1400a364f:
        if (param_6 == '\0') {
          pcVar6 = FUN_1400a02d0;
        }
        else {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = FUN_1400a0490;
          }
        }
        goto LAB_1400a367a;
      }
      if (uVar9 != 0xa1008888) {
        pcVar6 = pcVar5;
        if (uVar9 != 0xa2008888) goto LAB_1400a367a;
        goto LAB_1400a2be3;
      }
      goto LAB_1400a358f;
    }
    if (uVar9 == 0x8100bbbb) {
      if (param_6 == '\0') {
        pcVar6 = FUN_14009f330;
      }
      else {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = FUN_14009f3b0;
        }
      }
      goto LAB_1400a367a;
    }
    if (uVar9 == 0x80000565) {
      if (param_6 == '\0') {
        pcVar6 = FUN_14009cba0;
      }
      else {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = FUN_14009cdd0;
        }
      }
      goto LAB_1400a367a;
    }
    if (uVar9 == 0x80000888) {
      if (param_6 == '\0') {
        pcVar6 = FUN_14009dba0;
      }
      else {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = FUN_14009dda0;
        }
      }
      goto LAB_1400a367a;
    }
    pcVar6 = pcVar5;
    if (uVar9 != 0x81008888) goto LAB_1400a367a;
LAB_1400a2b33:
    if (param_6 != '\0') {
      pcVar6 = pcVar5;
      if (param_6 == '\x01') {
        pcVar6 = FUN_14009e4c0;
      }
      goto LAB_1400a367a;
    }
    goto LAB_1400a366a;
  }
  if (uVar12 != 0x80000888) {
    if (uVar12 != 0x20000008) {
      if (uVar12 == 0x2010000b) {
        if (uVar9 < 0x83008889) {
          if (uVar9 != 0x83008888) {
            if (uVar9 < 0x80000889) {
              if (uVar9 != 0x80000888) {
                if (uVar9 == 0x20000008) {
                  pcVar6 = (code *)&LAB_1400a23c0;
                  goto LAB_1400a367a;
                }
                if (uVar9 == 0x2000000b) {
                  pcVar6 = (code *)&LAB_1400a2400;
                  goto LAB_1400a367a;
                }
                if (uVar9 != 0x2010000b) {
                  pcVar6 = pcVar5;
                  if (uVar9 == 0x80000565) {
                    pcVar6 = FUN_14009d770;
                  }
                  goto LAB_1400a367a;
                }
LAB_1400a266e:
                pcVar6 = FUN_14009c940;
                goto LAB_1400a367a;
              }
LAB_1400a279d:
              pcVar6 = (code *)&LAB_1400a1e50;
              goto LAB_1400a367a;
            }
            if (uVar9 != 0x81008888) {
              if (uVar9 != 0x8100bbbb) {
                if (uVar9 == 0x82008888) goto LAB_1400a27c5;
                pcVar6 = pcVar5;
                if (uVar9 != 0x8200bbbb) goto LAB_1400a367a;
              }
LAB_1400a2762:
              pcVar6 = FUN_1400a2340;
              goto LAB_1400a367a;
            }
          }
        }
        else if (uVar9 < 0xa2008889) {
          if ((uVar9 != 0xa2008888) && (uVar9 != 0x90008888)) {
            if (uVar9 == 0xa0000888) goto LAB_1400a279d;
            if (uVar9 != 0xa1008888) {
              pcVar6 = pcVar5;
              if (uVar9 != 0xa100bbbb) goto LAB_1400a367a;
              goto LAB_1400a2762;
            }
          }
        }
        else {
          if (uVar9 == 0xa200bbbb) goto LAB_1400a2762;
          if ((uVar9 != 0xa3008888) && (pcVar6 = pcVar5, uVar9 != 0xb0008888)) goto LAB_1400a367a;
        }
LAB_1400a27c5:
        pcVar6 = (code *)&LAB_1400a2100;
        goto LAB_1400a367a;
      }
      if (uVar12 != 0x80000565) goto LAB_1400a367a;
      if (uVar9 < 0x83008889) {
        if (uVar9 != 0x83008888) {
          if (uVar9 < 0x8100bbbc) {
            if (uVar9 == 0x8100bbbb) {
LAB_1400a268e:
              pcVar6 = FUN_1400a1460;
              goto LAB_1400a367a;
            }
            if (uVar9 == 0x80000565) goto LAB_1400a266e;
            if (uVar9 == 0x80000888) {
              pcVar6 = FUN_14009daf0;
              goto LAB_1400a367a;
            }
            if (uVar9 != 0x81008888) goto LAB_1400a367a;
          }
          else if (uVar9 != 0x82008888) {
            if (uVar9 != 0x8200bbbb) goto LAB_1400a367a;
            goto LAB_1400a268e;
          }
        }
      }
      else if (uVar9 != 0x90008888) {
        if (((uVar9 == 0xa1008888) || (uVar9 == 0xa2008888)) ||
           ((uVar9 == 0xa3008888 || (pcVar6 = pcVar5, uVar9 == 0xb0008888)))) {
          pcVar6 = FUN_1400a1940;
        }
        goto LAB_1400a367a;
      }
      pcVar6 = FUN_1400a1180;
      goto LAB_1400a367a;
    }
    if (uVar9 < 0x90008889) {
      if (uVar9 != 0x90008888) {
        if (uVar9 < 0x8100bbbc) {
          if (uVar9 == 0x8100bbbb) {
LAB_1400a2862:
            pcVar6 = (code *)&LAB_1400a22d0;
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x20000008) {
            pcVar6 = FUN_14009c910;
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000565) {
            pcVar6 = FUN_14009d6f0;
            goto LAB_1400a367a;
          }
          if (uVar9 == 0x80000888) goto LAB_1400a286e;
          bVar18 = uVar9 == 0x81008888;
        }
        else {
          if (uVar9 == 0x82008888) goto LAB_1400a2896;
          if (uVar9 == 0x8200bbbb) goto LAB_1400a2862;
          bVar18 = uVar9 == 0x83008888;
        }
LAB_1400a2890:
        pcVar6 = pcVar5;
        if (!bVar18) goto LAB_1400a367a;
      }
    }
    else if (uVar9 < 0xa2008889) {
      if (uVar9 != 0xa2008888) {
        if (uVar9 == 0xa0000888) {
LAB_1400a286e:
          pcVar6 = (code *)&LAB_1400a1e00;
          goto LAB_1400a367a;
        }
        if (uVar9 != 0xa1008888) {
          pcVar6 = pcVar5;
          if (uVar9 != 0xa100bbbb) goto LAB_1400a367a;
          goto LAB_1400a2862;
        }
      }
    }
    else {
      if (uVar9 == 0xa200bbbb) goto LAB_1400a2862;
      if (uVar9 != 0xa3008888) {
        bVar18 = uVar9 == 0xb0008888;
        goto LAB_1400a2890;
      }
    }
LAB_1400a2896:
    lVar7 = cpuid_Version_info(1);
    pcVar6 = (code *)&LAB_1400a20b0;
    if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
      pcVar6 = (code *)&LAB_1400a2020;
    }
    goto LAB_1400a367a;
  }
  if (uVar9 < 0x83008889) {
    if (uVar9 != 0x83008888) {
      if (uVar9 < 0x8100bbbc) {
        if (uVar9 == 0x8100bbbb) {
LAB_1400a2923:
          pcVar6 = (code *)&LAB_1400a13e0;
          goto LAB_1400a367a;
        }
        if (uVar9 == 0x80000565) {
          pcVar6 = FUN_14009ca80;
          goto LAB_1400a367a;
        }
        if (uVar9 == 0x80000888) goto LAB_1400a3440;
        pcVar6 = pcVar5;
        if (uVar9 != 0x81008888) goto LAB_1400a367a;
      }
      else if (uVar9 != 0x82008888) {
        pcVar6 = pcVar5;
        if (uVar9 != 0x8200bbbb) goto LAB_1400a367a;
        goto LAB_1400a2923;
      }
    }
LAB_1400a3434:
    pcVar6 = (code *)&LAB_1400a1100;
    goto LAB_1400a367a;
  }
  if (uVar9 < 0xa2008889) {
    if (uVar9 != 0xa2008888) {
      if (uVar9 == 0x90008888) goto LAB_1400a3434;
      if (uVar9 == 0xa0000888) {
LAB_1400a2955:
        pcVar6 = (code *)&LAB_14009c7a0;
        goto LAB_1400a367a;
      }
      bVar18 = uVar9 == 0xa1008888;
LAB_1400a296f:
      pcVar6 = pcVar5;
      if (!bVar18) goto LAB_1400a367a;
    }
  }
  else if (uVar9 != 0xa3008888) {
    bVar18 = uVar9 == 0xb0008888;
    goto LAB_1400a296f;
  }
LAB_1400a2975:
  lVar7 = cpuid_Version_info(1);
  pcVar6 = (code *)&LAB_1400a1310;
  if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
    pcVar6 = (code *)&LAB_1400a1270;
  }
LAB_1400a367a:
  *param_1 = pcVar6;
  param_1[1] = pcVar16;
  pcVar10 = "#base: unsupported pixel swizzler option";
  if (pcVar6 != (code *)0x0) {
    pcVar10 = (char *)0x0;
  }
  *(uint *)(param_1 + 2) = uVar15 >> 3;
  *(uint *)((longlong)param_1 + 0x14) = uVar17 >> 3;
  return pcVar10;
}

