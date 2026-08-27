// Function: FUN_140417f00
// Addr: 140417f00
// Size: 1688 bytes


void FUN_140417f00(uint param_1,char *param_2,uint *param_3,undefined4 *param_4,int *param_5,
                  uint *param_6)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  byte bVar10;
  char local_res10;
  char local_38 [16];
  
  if (param_2 == (char *)0x0) {
    if (((param_5 != (int *)0x0) && (param_6 != (uint *)0x0)) && (*param_5 != 0)) {
      *param_5 = 0;
    }
  }
  else {
    pcVar3 = param_2 + 1;
    pcVar8 = (char *)0x0;
    if ((*param_2 == 'x') && (*pcVar3 == '-')) {
      local_res10 = FUN_1403f0980(param_2,param_3,param_4,"-hbsc",&LAB_14039a2c0);
      pcVar7 = param_2;
LAB_14041800f:
      if (((param_5 != (int *)0x0) && (param_6 != (uint *)0x0)) && (*param_5 != 0)) {
        lVar4 = FUN_1402bbb40(pcVar7);
        if (lVar4 != 0) {
          local_38[0] = *(char *)(lVar4 + 5);
          if (local_38[0] == '-') {
            cVar2 = *(char *)(lVar4 + 6);
            if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
               ((byte)(cVar2 + 0xbfU) < 6)) {
              bVar10 = cVar2 - 0x30;
              if (9 < bVar10) {
                bVar10 = cVar2 + 0xa9;
              }
              cVar2 = *(char *)(lVar4 + 7);
              if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                 ((byte)(cVar2 + 0xbfU) < 6)) {
                bVar1 = cVar2 - 0x30;
                if (9 < bVar1) {
                  if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                    cVar2 = cVar2 + ' ';
                  }
                  bVar1 = cVar2 + 0xa9;
                }
                cVar2 = *(char *)(lVar4 + 8);
                local_38[0] = bVar10 * '\x10' + bVar1;
                if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                   ((byte)(cVar2 + 0xbfU) < 6)) {
                  bVar10 = cVar2 - 0x30;
                  if (9 < bVar10) {
                    bVar10 = cVar2 + 0xa9;
                  }
                  cVar2 = *(char *)(lVar4 + 9);
                  if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                     ((byte)(cVar2 + 0xbfU) < 6)) {
                    bVar1 = cVar2 - 0x30;
                    if (9 < bVar1) {
                      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                        cVar2 = cVar2 + ' ';
                      }
                      bVar1 = cVar2 + 0xa9;
                    }
                    cVar2 = *(char *)(lVar4 + 10);
                    local_38[1] = bVar10 * '\x10' + bVar1;
                    if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                       ((byte)(cVar2 + 0xbfU) < 6)) {
                      bVar10 = cVar2 - 0x30;
                      if (9 < bVar10) {
                        bVar10 = cVar2 + 0xa9;
                      }
                      cVar2 = *(char *)(lVar4 + 0xb);
                      if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                         ((byte)(cVar2 + 0xbfU) < 6)) {
                        bVar1 = cVar2 - 0x30;
                        if (9 < bVar1) {
                          if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                            cVar2 = cVar2 + ' ';
                          }
                          bVar1 = cVar2 + 0xa9;
                        }
                        cVar2 = *(char *)(lVar4 + 0xc);
                        local_38[2] = bVar10 * '\x10' + bVar1;
                        if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                           ((byte)(cVar2 + 0xbfU) < 6)) {
                          bVar10 = cVar2 - 0x30;
                          if (9 < bVar10) {
                            bVar10 = cVar2 + 0xa9;
                          }
                          cVar2 = *(char *)(lVar4 + 0xd);
                          if ((((byte)(cVar2 - 0x30U) < 10) || ((byte)(cVar2 + 0x9fU) < 6)) ||
                             ((byte)(cVar2 + 0xbfU) < 6)) {
                            bVar1 = cVar2 - 0x30;
                            if (9 < bVar1) {
                              if ((byte)(cVar2 + 0xbfU) < 0x1a) {
                                cVar2 = bVar10 * '\x10' + cVar2 + -0x37;
                                goto LAB_140418313;
                              }
                              bVar1 = cVar2 + 0xa9;
                            }
                            cVar2 = bVar10 * '\x10' + bVar1;
                            goto LAB_140418313;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else if ((((byte)(local_38[0] + 0x9fU) < 0x1a) || ((byte)(local_38[0] + 0xbfU) < 0x1a)) ||
                  ((byte)(local_38[0] - 0x30U) < 10)) {
            if ((byte)(local_38[0] + 0x9fU) < 0x1a) {
              local_38[0] = local_38[0] + -0x20;
            }
            cVar2 = *(char *)(lVar4 + 6);
            if ((((byte)(cVar2 + 0x9fU) < 0x1a) || ((byte)(cVar2 + 0xbfU) < 0x1a)) ||
               ((byte)(cVar2 - 0x30U) < 10)) {
              local_38[1] = cVar2;
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                local_38[1] = cVar2 + -0x20;
              }
              cVar2 = *(char *)(lVar4 + 7);
              if (((0x19 < (byte)(cVar2 + 0x9fU)) && (0x19 < (byte)(cVar2 + 0xbfU))) &&
                 (9 < (byte)(cVar2 - 0x30U))) {
                uVar9 = 2;
                goto LAB_1404182c7;
              }
              local_38[2] = cVar2;
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                local_38[2] = cVar2 + -0x20;
              }
              cVar2 = *(char *)(lVar4 + 8);
              if (((0x19 < (byte)(cVar2 + 0x9fU)) && (0x19 < (byte)(cVar2 + 0xbfU))) &&
                 (9 < (byte)(cVar2 - 0x30U))) {
                uVar9 = 3;
                goto LAB_1404182c7;
              }
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                cVar2 = cVar2 + -0x20;
              }
            }
            else {
              uVar9 = 1;
LAB_1404182c7:
              uVar6 = (ulonglong)uVar9;
              do {
                uVar9 = uVar9 + 1;
              } while ((int)uVar9 < 4);
              FUN_1404217a0(local_38 + uVar6,0x20,4 - uVar6);
              cVar2 = local_38[3];
            }
LAB_140418313:
            uVar9 = CONCAT31(CONCAT21(CONCAT11(local_38[0],local_38[1]),local_38[2]),cVar2);
            *param_6 = uVar9;
            if ((uVar9 & 0xdfdfdfdf) == 0x44464c54) {
              *param_6 = uVar9 ^ 0x20202020;
            }
            *param_5 = 1;
            goto LAB_140418395;
          }
        }
LAB_14041837e:
        if (*param_5 != 0) {
          FUN_1403dc910(param_2,pcVar8,param_5,param_6);
        }
      }
    }
    else {
      pcVar7 = (char *)0x0;
      if (*pcVar3 == '\0') {
LAB_140417fde:
        pcVar8 = pcVar3;
      }
      else {
LAB_140417fa4:
        do {
          if ((pcVar3[-1] == '-') && (pcVar3[1] == '-')) {
            if (*pcVar3 == 'x') {
              pcVar7 = pcVar3;
              if (pcVar8 != (char *)0x0) goto LAB_140417fe1;
              pcVar8 = pcVar3 + -1;
              break;
            }
            if (pcVar8 == (char *)0x0) {
              pcVar8 = pcVar3 + -1;
              pcVar3 = pcVar3 + 1;
              goto LAB_140417fa4;
            }
          }
          pcVar3 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        if (pcVar8 == (char *)0x0) goto LAB_140417fde;
      }
LAB_140417fe1:
      local_res10 = FUN_1403f0980(pcVar7,param_3,param_4,"-hbsc",&LAB_14039a2c0);
      if (pcVar7 != (char *)0x0) goto LAB_14041800f;
      if ((param_5 != (int *)0x0) && (param_6 != (uint *)0x0)) goto LAB_14041837e;
    }
LAB_140418395:
    if (local_res10 != '\0') {
      return;
    }
  }
  if (param_3 == (uint *)0x0) {
    return;
  }
  if (param_4 == (undefined4 *)0x0) {
    return;
  }
  if (*param_3 == 0) {
    return;
  }
  uVar6 = 0;
  if (param_1 < 0x4d6c796e) {
    if (param_1 == 0x4d6c796d) {
      uVar5 = 0x6d6c6d32;
      uVar6 = 1;
      *param_4 = 0x6d6c6d33;
    }
    else if (param_1 == 0x42656e67) {
      uVar5 = 0x626e6732;
      uVar6 = 1;
      *param_4 = 0x626e6733;
    }
    else if (param_1 == 0x44657661) {
      uVar5 = 0x64657632;
      uVar6 = 1;
      *param_4 = 0x64657633;
    }
    else if (param_1 == 0x47756a72) {
      uVar5 = 0x676a7232;
      uVar6 = 1;
      *param_4 = 0x676a7233;
    }
    else if (param_1 == 0x47757275) {
      uVar5 = 0x67757232;
      uVar6 = 1;
      *param_4 = 0x67757233;
    }
    else {
      if (param_1 != 0x4b6e6461) goto LAB_140418518;
      uVar5 = 0x6b6e6432;
      uVar6 = 1;
      *param_4 = 0x6b6e6433;
    }
LAB_140418509:
    if (*param_3 <= (uint)uVar6) goto LAB_140418589;
    param_4[uVar6] = uVar5;
    uVar6 = (ulonglong)((uint)uVar6 + 1);
  }
  else {
    if (param_1 == 0x4d796d72) {
      uVar5 = 0x6d796d32;
      goto LAB_140418509;
    }
    if (param_1 == 0x4f727961) {
      uVar5 = 0x6f727932;
      uVar6 = 1;
      *param_4 = 0x6f727933;
      goto LAB_140418509;
    }
    if (param_1 == 0x54616d6c) {
      uVar5 = 0x746d6c32;
      uVar6 = 1;
      *param_4 = 0x746d6c33;
      goto LAB_140418509;
    }
    if (param_1 == 0x54656c75) {
      uVar5 = 0x74656c32;
      uVar6 = 1;
      *param_4 = 0x74656c33;
      goto LAB_140418509;
    }
  }
LAB_140418518:
  if (*param_3 <= (uint)uVar6) goto LAB_140418589;
  if (param_1 < 0x4e6b6f70) {
    if (param_1 == 0x4e6b6f6f) {
      param_1 = 0x6e6b6f20;
    }
    else {
      if (param_1 == 0) goto LAB_140418589;
      if (param_1 == 0x48697261) {
        param_1 = 0x6b616e61;
      }
      else {
        if (param_1 != 0x4c616f6f) goto LAB_140418569;
        param_1 = 0x6c616f20;
      }
    }
  }
  else if (param_1 == 0x56616969) {
    param_1 = 0x76616920;
  }
  else if (param_1 == 0x59696969) {
    param_1 = 0x79692020;
  }
  else if (param_1 == 0x5a6d7468) {
    param_1 = 0x6d617468;
  }
  else {
LAB_140418569:
    param_1 = param_1 | 0x20000000;
  }
  param_4[uVar6] = param_1;
  uVar6 = (ulonglong)((uint)uVar6 + 1);
LAB_140418589:
  *param_3 = (uint)uVar6;
  return;
}

