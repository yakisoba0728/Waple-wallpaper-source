// Function: FUN_1400a2590
// Addr: 1400a2590
// Size: 26 bytes


/* WARNING: Removing unreachable block (ram,0x0001400a2a4c) */
/* WARNING: Removing unreachable block (ram,0x0001400a296d) */
/* WARNING: Removing unreachable block (ram,0x0001400a367f) */
/* WARNING: Removing unreachable block (ram,0x0001400a2d91) */
/* WARNING: Removing unreachable block (ram,0x0001400a2d99) */
/* WARNING: Removing unreachable block (ram,0x0001400a2d48) */
/* WARNING: Removing unreachable block (ram,0x0001400a2d4c) */
/* WARNING: Removing unreachable block (ram,0x0001400a2d55) */
/* WARNING: Removing unreachable block (ram,0x0001400a3259) */
/* WARNING: Removing unreachable block (ram,0x0001400a2d61) */
/* WARNING: Removing unreachable block (ram,0x0001400a3261) */
/* WARNING: Removing unreachable block (ram,0x0001400a326a) */
/* WARNING: Removing unreachable block (ram,0x0001400a2eae) */
/* WARNING: Removing unreachable block (ram,0x0001400a2ebe) */
/* WARNING: Removing unreachable block (ram,0x0001400a2ec2) */

char * FUN_1400a2590(undefined8 *param_1,ulonglong param_2,undefined8 *param_3,ulonglong param_4,
                    undefined8 *param_5,char param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined *puVar16;
  uint uVar17;
  bool bVar18;
  undefined8 in_stack_ffffffffffffffc8;
  uint7 uVar19;
  
  if (param_1 == (undefined8 *)0x0) {
    return "#base: bad receiver";
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar9 = (uint)param_2;
  if ((((((param_2 & 0x30000) != 0) ||
        (uVar15 = *(int *)(&UNK_140482b20 +
                          (ulonglong)((uint)((param_2 & 0xffffffff) >> 0xc) & 0xf) * 4) +
                  *(int *)(&UNK_140482b20 + (ulonglong)((uint)(param_2 >> 8) & 0xf) * 4) +
                  *(int *)(&UNK_140482b20 +
                          (ulonglong)((uint)((param_2 & 0xffffffff) >> 4) & 0xf) * 4) +
                  *(int *)(&UNK_140482b20 + (ulonglong)(uVar9 & 0xf) * 4), uVar15 == 0)) ||
       ((uVar15 & 7) != 0)) ||
      ((uVar12 = (uint)param_4, (param_4 & 0x30000) != 0 ||
       (uVar17 = *(int *)(&UNK_140482b20 +
                         (ulonglong)((uint)((param_4 & 0xffffffff) >> 0xc) & 0xf) * 4) +
                 *(int *)(&UNK_140482b20 + (ulonglong)((uint)(param_4 >> 8) & 0xf) * 4) +
                 *(int *)(&UNK_140482b20 +
                         (ulonglong)((uint)((param_4 & 0xffffffff) >> 4) & 0xf) * 4) +
                 *(int *)(&UNK_140482b20 + (ulonglong)(uVar12 & 0xf) * 4), uVar17 == 0)))) ||
     ((uVar17 & 7) != 0)) {
    return "#base: unsupported pixel swizzler option";
  }
  pcVar6 = (code *)0x0;
  pcVar5 = (code *)0x0;
  puVar16 = (undefined *)0x0;
  if (param_6 == '\0') {
    puVar16 = (undefined *)0x1400a2530;
  }
  else if (param_6 == '\x01') {
    puVar16 = &UNK_1400a2570;
  }
  uVar19 = (uint7)((ulonglong)in_stack_ffffffffffffffc8 >> 8);
  if (0x81040008 < uVar12) {
    if (0xa0000888 < uVar12) {
      if (uVar12 == 0xa1008888) {
        if (0x8100bbbb < uVar9) {
          if (uVar9 == 0x82008888) {
code_r0x0001400a2cb3:
            if (param_6 == '\0') {
              pcVar6 = FUN_1400a0b80;
            }
            else {
              pcVar6 = pcVar5;
              if (param_6 == '\x01') {
                pcVar6 = (code *)&UNK_1400a0c70;
              }
            }
            goto code_r0x0001400a374a;
          }
          if (uVar9 != 0xa1008888) {
            pcVar6 = pcVar5;
            if (uVar9 != 0xa2008888) goto code_r0x0001400a374a;
            goto code_r0x0001400a371f;
          }
          goto code_r0x0001400a2c03;
        }
        if (uVar9 == 0x8100bbbb) {
          if (param_6 == '\0') {
            pcVar6 = (code *)0x14009fdd0;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = (code *)0x14009fe50;
            }
          }
          goto code_r0x0001400a374a;
        }
        if (uVar9 == 0x80000565) {
          if (param_6 == '\0') {
            pcVar6 = (code *)&UNK_14009d360;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009d4a0;
            }
          }
          goto code_r0x0001400a374a;
        }
        if (uVar9 == 0x80000888) {
          if (param_6 == '\0') {
            pcVar6 = FUN_14009e1e0;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009e310;
            }
          }
          goto code_r0x0001400a374a;
        }
        pcVar6 = pcVar5;
        if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
code_r0x0001400a365f:
        if (param_6 != '\0') {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = (code *)&UNK_14009ef30;
          }
          goto code_r0x0001400a374a;
        }
      }
      else {
        pcVar6 = pcVar5;
        if (uVar12 != 0xa2008888) goto code_r0x0001400a374a;
        if (uVar9 < 0x8100bbbc) {
          if (uVar9 == 0x8100bbbb) {
            if (param_6 == '\0') {
              pcVar6 = FUN_1400a0070;
            }
            else if (param_6 == '\x01') {
              pcVar6 = (code *)&UNK_1400a01c0;
            }
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000565) {
            if (param_6 == '\0') {
              pcVar6 = (code *)0x14009d5e0;
            }
            else if (param_6 == '\x01') {
              pcVar6 = (code *)&UNK_14009d680;
            }
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000888) {
            if (param_6 == '\0') {
              pcVar6 = (code *)0x14009e420;
            }
            else if (param_6 == '\x01') {
              pcVar6 = (code *)0x14009e490;
            }
            goto code_r0x0001400a374a;
          }
          if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
code_r0x0001400a3564:
          if (param_6 == '\0') {
            pcVar6 = FUN_14009f140;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009f240;
            }
          }
          goto code_r0x0001400a374a;
        }
        if (uVar9 != 0x82008888) {
          if (uVar9 != 0xa1008888) {
            if (uVar9 != 0xa2008888) goto code_r0x0001400a374a;
            goto code_r0x0001400a3614;
          }
          goto code_r0x0001400a3391;
        }
code_r0x0001400a3449:
        if (param_6 != '\0') {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = (code *)&UNK_1400a1080;
          }
          goto code_r0x0001400a374a;
        }
      }
      lVar7 = cpuid_Version_info(1);
      pcVar6 = FUN_14009c970;
      if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
        pcVar6 = FUN_14009c8d0;
      }
      goto code_r0x0001400a374a;
    }
    if (uVar12 == 0xa0000888) {
      if (uVar9 < 0x90008889) {
        if (uVar9 != 0x90008888) {
          if (0x8100bbbb < uVar9) {
            bVar18 = (uVar9 + 0x7dff7778 & 0xfeffffff) == 0;
            goto code_r0x0001400a2a3f;
          }
          if (uVar9 == 0x8100bbbb) {
            pcVar6 = (code *)&UNK_1400a1680;
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000565) {
            pcVar6 = (code *)&UNK_14009d2d0;
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000888) goto code_r0x0001400a2a25;
          pcVar6 = pcVar5;
          if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
        }
        goto code_r0x0001400a2a45;
      }
      if (uVar9 == 0xa0000888) {
code_r0x0001400a3510:
        pcVar6 = (code *)0x14009ca60;
        goto code_r0x0001400a374a;
      }
      if (((uVar9 != 0xa1008888) && (uVar9 != 0xa2008888)) &&
         ((uVar9 != 0xa3008888 && (pcVar6 = pcVar5, uVar9 != 0xb0008888))))
      goto code_r0x0001400a374a;
      goto code_r0x0001400a3504;
    }
    if (uVar12 == 0x82008888) {
      if (uVar9 < 0x8100bbbc) {
        if (uVar9 == 0x8100bbbb) {
          if (param_6 == '\0') {
            pcVar6 = (code *)&UNK_14009f870;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = (code *)&UNK_14009f9a0;
            }
          }
          goto code_r0x0001400a374a;
        }
        if (uVar9 == 0x80000565) {
          if (param_6 == '\0') {
            pcVar6 = (code *)0x14009d100;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = (code *)0x14009d190;
            }
          }
          goto code_r0x0001400a374a;
        }
        if (uVar9 == 0x80000888) {
          if (param_6 == '\0') {
            pcVar6 = (code *)&UNK_14009e080;
          }
          else {
            pcVar6 = pcVar5;
            if (param_6 == '\x01') {
              pcVar6 = FUN_14009e0e0;
            }
          }
          goto code_r0x0001400a374a;
        }
        pcVar6 = pcVar5;
        if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
code_r0x0001400a3391:
        if (param_6 == '\0') {
          pcVar6 = FUN_14009ea60;
        }
        else {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = FUN_14009eb50;
          }
        }
        goto code_r0x0001400a374a;
      }
      if (uVar9 != 0x82008888) {
        if (uVar9 != 0xa1008888) {
          pcVar6 = pcVar5;
          if (uVar9 != 0xa2008888) goto code_r0x0001400a374a;
          goto code_r0x0001400a3449;
        }
        goto code_r0x0001400a3564;
      }
code_r0x0001400a3614:
      if (param_6 != '\0') {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = (code *)&UNK_1400a0880;
        }
        goto code_r0x0001400a374a;
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
code_r0x0001400a32ce:
            if (uVar8 <= uVar11) {
              uVar11 = uVar8;
            }
            goto joined_r0x0001400a32d8;
          }
          if (uVar9 < 0x8100bbbc) {
            if (uVar9 == 0x8100bbbb) {
code_r0x0001400a3232:
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(puVar13,puVar14,uVar11);
              }
            }
            else if (uVar9 == 0x80000565) {
              lVar7 = func_0x00014009c6f0(puVar13,uVar11,puVar14,uVar8,(ulonglong)uVar19 << 8);
              if (lVar7 == 0x100) {
                if (param_6 == '\0') {
                  pcVar6 = (code *)0x14009d8c0;
                  goto code_r0x0001400a374a;
                }
                if (param_6 == '\x01') {
                  pcVar6 = (code *)&UNK_14009db60;
                  goto code_r0x0001400a374a;
                }
              }
            }
            else if (uVar9 == 0x80000888) {
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(puVar13,puVar14,uVar11);
              }
            }
            else if (uVar9 == 0x81008888) goto code_r0x0001400a3137;
          }
          else {
            if (uVar9 == 0x81040008) goto code_r0x0001400a32ce;
            if (uVar9 == 0x82008888) {
code_r0x0001400a3137:
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(puVar13,puVar14,uVar11);
              }
            }
            else if (uVar9 == 0x8200bbbb) goto code_r0x0001400a3232;
          }
        }
        else if (uVar9 < 0xa1008889) {
          if (uVar9 == 0xa1008888) {
code_r0x0001400a32fb:
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
              goto code_r0x0001400a374a;
            }
            if (param_6 == '\0') goto code_r0x0001400a3357;
            if (param_6 == '\x01') {
              pcVar6 = (code *)&UNK_1400a2030;
              goto code_r0x0001400a374a;
            }
          }
          else {
            if (uVar9 == 0x83008888) goto code_r0x0001400a3137;
            if (uVar9 == 0x83040008) goto code_r0x0001400a32ce;
            if (uVar9 == 0xa0000888) {
              lVar7 = FUN_14009c970(puVar13,uVar11,0,0,puVar14,uVar8);
              if (lVar7 != 0x100) {
                pcVar6 = (code *)0x0;
                goto code_r0x0001400a374a;
              }
              if (param_6 == '\0') {
                pcVar6 = (code *)&UNK_1400a1ac0;
                goto code_r0x0001400a374a;
              }
              if (param_6 == '\x01') {
                pcVar6 = FUN_1400a1d50;
                goto code_r0x0001400a374a;
              }
            }
          }
        }
        else if ((uVar9 + 0x5dff7778 & 0xfeffffff) == 0) goto code_r0x0001400a32fb;
        goto code_r0x0001400a2ea7;
      }
      pcVar6 = pcVar5;
      if (uVar12 != 0x90008888) goto code_r0x0001400a374a;
      if (uVar9 < 0x83008889) {
        if (uVar9 != 0x83008888) {
          if (uVar9 == 0x80000565) {
            pcVar6 = (code *)&UNK_14009cbe0;
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000888) {
            pcVar6 = (code *)&UNK_1400a1e70;
            goto code_r0x0001400a374a;
          }
          if (uVar9 != 0x81008888) {
            if (uVar9 == 0x8100bbbb) {
              pcVar6 = (code *)&UNK_1400a1610;
              goto code_r0x0001400a374a;
            }
            if (uVar9 != 0x82008888) goto code_r0x0001400a374a;
          }
        }
        pcVar6 = (code *)&UNK_1400a12f0;
        goto code_r0x0001400a374a;
      }
      if (uVar9 != 0x90008888) {
        if ((((uVar9 == 0xa1008888) || (uVar9 == 0xa2008888)) || (uVar9 == 0xa3008888)) ||
           (uVar9 == 0xb0008888)) {
          pcVar6 = (code *)&UNK_1400a1450;
        }
        goto code_r0x0001400a374a;
      }
    }
code_r0x0001400a373a:
    pcVar6 = FUN_14009cab0;
    goto code_r0x0001400a374a;
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
joined_r0x0001400a32d8:
        if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar13,puVar14,uVar11);
        }
      }
      else if (uVar9 == 0x80000565) {
        if (param_6 == '\0') {
          lVar7 = func_0x00014009c6f0(puVar13,uVar11,puVar14,uVar8,CONCAT71(uVar19,1));
          pcVar6 = (code *)0x14009d8c0;
          if (lVar7 != 0x100) {
            pcVar6 = (code *)0x0;
          }
          goto code_r0x0001400a374a;
        }
        if (param_6 == '\x01') {
          if (uVar8 <= uVar11) {
            uVar11 = uVar8;
          }
          if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(puVar13,puVar14,uVar11);
          }
          pcVar6 = (code *)0x0;
          goto code_r0x0001400a374a;
        }
      }
      else if (uVar9 == 0x80000888) {
        if (param_6 == '\0') {
          lVar7 = FUN_1400a03a0(puVar13,uVar11,0,0,puVar14,uVar8);
          pcVar6 = (code *)&UNK_1400a1ac0;
          if (lVar7 != 0x100) {
            pcVar6 = (code *)0x0;
          }
          goto code_r0x0001400a374a;
        }
        if (param_6 == '\x01') {
          if (uVar8 <= uVar11) {
            uVar11 = uVar8;
          }
          if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(puVar13,puVar14,uVar11);
          }
          pcVar6 = (code *)0x0;
          goto code_r0x0001400a374a;
        }
      }
      else if (uVar9 == 0x81008888) {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar13,puVar14,uVar11);
        }
      }
      else if (uVar9 == 0x8100bbbb) {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar13,puVar14,uVar11);
        }
      }
    }
    else if (uVar9 == 0x82008888) {
      if (param_6 == '\0') {
        lVar7 = FUN_1400a03a0(puVar13,uVar11,0,0,puVar14,uVar8);
        pcVar6 = (code *)0x1400a1f70;
        if (lVar7 != 0x100) {
          pcVar6 = (code *)0x0;
        }
        goto code_r0x0001400a374a;
      }
      if (param_6 == '\x01') {
        if (uVar8 <= uVar11) {
          uVar11 = uVar8;
        }
        if (uVar11 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar13,puVar14,uVar11);
        }
        pcVar6 = (code *)0x0;
        goto code_r0x0001400a374a;
      }
    }
    else if (uVar9 == 0xa1008888) {
      lVar7 = FUN_14009c970(puVar13,uVar11,0,0,puVar14,uVar8);
      if (lVar7 == 0x100) {
        if (param_6 != '\0') {
          if (param_6 == '\x01') {
            pcVar6 = (code *)0x14009ed10;
          }
          else {
            pcVar6 = (code *)0x0;
          }
          goto code_r0x0001400a374a;
        }
code_r0x0001400a3357:
        pcVar6 = (code *)0x1400a1f70;
        goto code_r0x0001400a374a;
      }
    }
    else if (uVar9 == 0xa2008888) {
      if (param_6 == '\0') {
        lVar7 = FUN_1400a0b80(puVar13,uVar11,0,0,puVar14,uVar8);
        pcVar6 = (code *)0x1400a1f70;
        if (lVar7 != 0x100) {
          pcVar6 = (code *)0x0;
        }
        goto code_r0x0001400a374a;
      }
      if (param_6 == '\x01') {
        lVar7 = FUN_14009c970(puVar13,uVar11,0,0,puVar14,uVar8);
        pcVar6 = (code *)0x1400a09d0;
        if (lVar7 != 0x100) {
          pcVar6 = (code *)0x0;
        }
        goto code_r0x0001400a374a;
      }
    }
code_r0x0001400a2ea7:
    pcVar6 = (code *)0x0;
    goto code_r0x0001400a374a;
  }
  if (0x80000888 < uVar12) {
    if (uVar12 != 0x81008888) {
      pcVar6 = pcVar5;
      if (uVar12 == 0x8100bbbb) {
        if (uVar9 < 0x8100bbbc) {
          if (uVar9 == 0x8100bbbb) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009cb00;
            }
            else if (param_6 == '\x01') {
              pcVar6 = (code *)&UNK_14009f6a0;
            }
          }
          else if (uVar9 == 0x80000565) {
            if (param_6 == '\0') {
              pcVar6 = FUN_14009cd90;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009cfe0;
            }
          }
          else if (uVar9 == 0x80000888) {
            if (param_6 == '\0') {
              pcVar6 = (code *)&UNK_14009dd80;
            }
            else if (param_6 == '\x01') {
              pcVar6 = FUN_14009df80;
            }
          }
          else if (uVar9 == 0x81008888) {
            if (param_6 == '\0') {
              pcVar6 = (code *)0x14009e780;
            }
            else if (param_6 == '\x01') {
              pcVar6 = (code *)&UNK_14009e810;
            }
          }
        }
        else if (uVar9 == 0x82008888) {
          if (param_6 == '\0') {
            pcVar6 = (code *)0x1400a0490;
          }
          else if (param_6 == '\x01') {
            pcVar6 = (code *)&UNK_1400a06d0;
          }
        }
        else if (uVar9 == 0xa1008888) {
          if (param_6 == '\0') {
            pcVar6 = FUN_1400a1700;
          }
          else if (param_6 == '\x01') {
            pcVar6 = (code *)&UNK_1400a1790;
          }
        }
        else if (uVar9 == 0xa2008888) {
          if (param_6 == '\0') {
            pcVar6 = (code *)&UNK_1400a0de0;
          }
          else if (param_6 == '\x01') {
            pcVar6 = FUN_1400a0ed0;
          }
        }
      }
      goto code_r0x0001400a374a;
    }
    if (0x8100bbbb < uVar9) {
      if (uVar9 == 0x82008888) {
code_r0x0001400a371f:
        if (param_6 == '\0') {
          pcVar6 = FUN_1400a03a0;
        }
        else {
          pcVar6 = pcVar5;
          if (param_6 == '\x01') {
            pcVar6 = (code *)0x1400a0560;
          }
        }
        goto code_r0x0001400a374a;
      }
      if (uVar9 != 0xa1008888) {
        pcVar6 = pcVar5;
        if (uVar9 != 0xa2008888) goto code_r0x0001400a374a;
        goto code_r0x0001400a2cb3;
      }
      goto code_r0x0001400a365f;
    }
    if (uVar9 == 0x8100bbbb) {
      if (param_6 == '\0') {
        pcVar6 = (code *)0x14009f400;
      }
      else {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = (code *)0x14009f480;
        }
      }
      goto code_r0x0001400a374a;
    }
    if (uVar9 == 0x80000565) {
      if (param_6 == '\0') {
        pcVar6 = FUN_14009cc70;
      }
      else {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = (code *)&UNK_14009cea0;
        }
      }
      goto code_r0x0001400a374a;
    }
    if (uVar9 == 0x80000888) {
      if (param_6 == '\0') {
        pcVar6 = (code *)0x14009dc70;
      }
      else {
        pcVar6 = pcVar5;
        if (param_6 == '\x01') {
          pcVar6 = FUN_14009de70;
        }
      }
      goto code_r0x0001400a374a;
    }
    pcVar6 = pcVar5;
    if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
code_r0x0001400a2c03:
    if (param_6 != '\0') {
      pcVar6 = pcVar5;
      if (param_6 == '\x01') {
        pcVar6 = (code *)&UNK_14009e590;
      }
      goto code_r0x0001400a374a;
    }
    goto code_r0x0001400a373a;
  }
  if (uVar12 != 0x80000888) {
    if (uVar12 != 0x20000008) {
      if (uVar12 == 0x2010000b) {
        if (uVar9 < 0x83008889) {
          if (uVar9 != 0x83008888) {
            if (uVar9 < 0x80000889) {
              if (uVar9 != 0x80000888) {
                if (uVar9 == 0x20000008) {
                  pcVar6 = (code *)&UNK_1400a2490;
                  goto code_r0x0001400a374a;
                }
                if (uVar9 == 0x2000000b) {
                  pcVar6 = (code *)0x1400a24d0;
                  goto code_r0x0001400a374a;
                }
                if (uVar9 != 0x2010000b) {
                  pcVar6 = pcVar5;
                  if (uVar9 == 0x80000565) {
                    pcVar6 = FUN_14009d840;
                  }
                  goto code_r0x0001400a374a;
                }
code_r0x0001400a273e:
                pcVar6 = FUN_14009ca10;
                goto code_r0x0001400a374a;
              }
code_r0x0001400a286d:
              pcVar6 = (code *)0x1400a1f20;
              goto code_r0x0001400a374a;
            }
            if (uVar9 != 0x81008888) {
              if (uVar9 != 0x8100bbbb) {
                if (uVar9 == 0x82008888) goto code_r0x0001400a2895;
                pcVar6 = pcVar5;
                if (uVar9 != 0x8200bbbb) goto code_r0x0001400a374a;
              }
code_r0x0001400a2832:
              pcVar6 = FUN_1400a2410;
              goto code_r0x0001400a374a;
            }
          }
        }
        else if (uVar9 < 0xa2008889) {
          if ((uVar9 != 0xa2008888) && (uVar9 != 0x90008888)) {
            if (uVar9 == 0xa0000888) goto code_r0x0001400a286d;
            if (uVar9 != 0xa1008888) {
              pcVar6 = pcVar5;
              if (uVar9 != 0xa100bbbb) goto code_r0x0001400a374a;
              goto code_r0x0001400a2832;
            }
          }
        }
        else {
          if (uVar9 == 0xa200bbbb) goto code_r0x0001400a2832;
          if ((uVar9 != 0xa3008888) && (pcVar6 = pcVar5, uVar9 != 0xb0008888))
          goto code_r0x0001400a374a;
        }
code_r0x0001400a2895:
        pcVar6 = (code *)0x1400a21d0;
        goto code_r0x0001400a374a;
      }
      if (uVar12 != 0x80000565) goto code_r0x0001400a374a;
      if (uVar9 < 0x83008889) {
        if (uVar9 != 0x83008888) {
          if (uVar9 < 0x8100bbbc) {
            if (uVar9 == 0x8100bbbb) {
code_r0x0001400a275e:
              pcVar6 = FUN_1400a1530;
              goto code_r0x0001400a374a;
            }
            if (uVar9 == 0x80000565) goto code_r0x0001400a273e;
            if (uVar9 == 0x80000888) {
              pcVar6 = FUN_14009dbc0;
              goto code_r0x0001400a374a;
            }
            if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
          }
          else if (uVar9 != 0x82008888) {
            if (uVar9 != 0x8200bbbb) goto code_r0x0001400a374a;
            goto code_r0x0001400a275e;
          }
        }
      }
      else if (uVar9 != 0x90008888) {
        if (((uVar9 == 0xa1008888) || (uVar9 == 0xa2008888)) ||
           ((uVar9 == 0xa3008888 || (pcVar6 = pcVar5, uVar9 == 0xb0008888)))) {
          pcVar6 = (code *)0x1400a1a10;
        }
        goto code_r0x0001400a374a;
      }
      pcVar6 = (code *)0x1400a1250;
      goto code_r0x0001400a374a;
    }
    if (uVar9 < 0x90008889) {
      if (uVar9 != 0x90008888) {
        if (uVar9 < 0x8100bbbc) {
          if (uVar9 == 0x8100bbbb) {
code_r0x0001400a2932:
            pcVar6 = (code *)0x1400a23a0;
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x20000008) {
            pcVar6 = (code *)0x14009c9e0;
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000565) {
            pcVar6 = FUN_14009d7c0;
            goto code_r0x0001400a374a;
          }
          if (uVar9 == 0x80000888) goto code_r0x0001400a293e;
          bVar18 = uVar9 == 0x81008888;
        }
        else {
          if (uVar9 == 0x82008888) goto code_r0x0001400a2966;
          if (uVar9 == 0x8200bbbb) goto code_r0x0001400a2932;
          bVar18 = uVar9 == 0x83008888;
        }
code_r0x0001400a2960:
        pcVar6 = pcVar5;
        if (!bVar18) goto code_r0x0001400a374a;
      }
    }
    else if (uVar9 < 0xa2008889) {
      if (uVar9 != 0xa2008888) {
        if (uVar9 == 0xa0000888) {
code_r0x0001400a293e:
          pcVar6 = (code *)0x1400a1ed0;
          goto code_r0x0001400a374a;
        }
        if (uVar9 != 0xa1008888) {
          pcVar6 = pcVar5;
          if (uVar9 != 0xa100bbbb) goto code_r0x0001400a374a;
          goto code_r0x0001400a2932;
        }
      }
    }
    else {
      if (uVar9 == 0xa200bbbb) goto code_r0x0001400a2932;
      if (uVar9 != 0xa3008888) {
        bVar18 = uVar9 == 0xb0008888;
        goto code_r0x0001400a2960;
      }
    }
code_r0x0001400a2966:
    lVar7 = cpuid_Version_info(1);
    pcVar6 = (code *)&UNK_1400a2180;
    if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
      pcVar6 = (code *)&UNK_1400a20f0;
    }
    goto code_r0x0001400a374a;
  }
  if (uVar9 < 0x83008889) {
    if (uVar9 != 0x83008888) {
      if (uVar9 < 0x8100bbbc) {
        if (uVar9 == 0x8100bbbb) {
code_r0x0001400a29f3:
          pcVar6 = (code *)&UNK_1400a14b0;
          goto code_r0x0001400a374a;
        }
        if (uVar9 == 0x80000565) {
          pcVar6 = (code *)&UNK_14009cb50;
          goto code_r0x0001400a374a;
        }
        if (uVar9 == 0x80000888) goto code_r0x0001400a3510;
        pcVar6 = pcVar5;
        if (uVar9 != 0x81008888) goto code_r0x0001400a374a;
      }
      else if (uVar9 != 0x82008888) {
        pcVar6 = pcVar5;
        if (uVar9 != 0x8200bbbb) goto code_r0x0001400a374a;
        goto code_r0x0001400a29f3;
      }
    }
code_r0x0001400a3504:
    pcVar6 = (code *)&UNK_1400a11d0;
    goto code_r0x0001400a374a;
  }
  if (uVar9 < 0xa2008889) {
    if (uVar9 != 0xa2008888) {
      if (uVar9 == 0x90008888) goto code_r0x0001400a3504;
      if (uVar9 == 0xa0000888) {
code_r0x0001400a2a25:
        pcVar6 = (code *)&UNK_14009c870;
        goto code_r0x0001400a374a;
      }
      bVar18 = uVar9 == 0xa1008888;
code_r0x0001400a2a3f:
      pcVar6 = pcVar5;
      if (!bVar18) goto code_r0x0001400a374a;
    }
  }
  else if (uVar9 != 0xa3008888) {
    bVar18 = uVar9 == 0xb0008888;
    goto code_r0x0001400a2a3f;
  }
code_r0x0001400a2a45:
  lVar7 = cpuid_Version_info(1);
  pcVar6 = (code *)&UNK_1400a13e0;
  if ((*(uint *)(lVar7 + 0xc) & 0x900002) == 0x900002) {
    pcVar6 = (code *)&UNK_1400a1340;
  }
code_r0x0001400a374a:
  *param_1 = pcVar6;
  param_1[1] = puVar16;
  pcVar10 = "#base: unsupported pixel swizzler option";
  if (pcVar6 != (code *)0x0) {
    pcVar10 = (char *)0x0;
  }
  *(uint *)(param_1 + 2) = uVar15 >> 3;
  *(uint *)((longlong)param_1 + 0x14) = uVar17 >> 3;
  return pcVar10;
}

