// Function: FUN_1402f82a0
// Addr: 1402f82a0
// Size: 2716 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1402f82a0(longlong *param_1,uint *param_2,uint param_3,uint *param_4,char param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  short *psVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStack_158 [32];
  uint *local_138;
  uint *local_130;
  longlong *local_128;
  char local_118 [8];
  undefined8 *local_110;
  longlong *local_108;
  uint *local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  byte local_d7;
  char acStack_d6 [61];
  char local_99;
  char local_8e;
  char local_86;
  byte local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_158;
  local_110 = (undefined8 *)0x0;
  local_e0 = 0;
  if ((int)param_3 < 1) {
    param_3 = -(-param_3 & 0x7fffffff);
  }
  else {
    param_3 = param_3 & 0x7fffffff;
  }
  if (param_2 == (uint *)0x0) {
    return (longlong *)0x6;
  }
  local_f8 = (undefined8 *)0x0;
  local_e8 = 0;
  if (((*param_2 & 2) == 0) || (*(longlong *)(param_2 + 8) == 0)) {
    cVar18 = '\0';
  }
  else {
    cVar18 = '\x01';
  }
  local_118[0] = cVar18;
  local_108 = param_1;
  local_100 = param_4;
  uVar7 = FUN_1402f5300(param_1,param_2,&local_110);
  plVar15 = (longlong *)(ulonglong)uVar7;
  puVar10 = local_110;
  if (uVar7 != 0) {
LAB_1402f8aea:
    uVar20 = (uint)plVar15;
    uVar7 = uVar20 & 0xff;
    if (((uVar7 != 0x51) && (uVar7 != 2)) && (lVar12 = local_e8, uVar7 != 0x55)) goto LAB_1402f8ccb;
    if (param_5 != '\0') {
      if (puVar10 == (undefined8 *)0x0) {
        uVar20 = 0x55;
        plVar15 = local_108;
        puVar19 = local_100;
      }
      else {
        if ((code *)puVar10[4] == (code *)0x0) {
LAB_1402f8b49:
          uVar7 = *(uint *)(puVar10 + 1);
          *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
          if (uVar7 == 0) {
            uVar20 = 0x55;
            goto LAB_1402f8c31;
          }
          if ((code *)puVar10[4] == (code *)0x0) {
            if (0x80 < uVar7) {
              uVar7 = 0x80;
            }
            FUN_1404210f0(&local_d8,*puVar10,uVar7);
          }
          else {
            uVar7 = (*(code *)puVar10[4])(puVar10,0,&local_d8,0x80);
          }
          *(uint *)((longlong)puVar10 + 0xc) = uVar7;
          uVar20 = -(uint)(uVar7 < 0x80) & 0x55;
          if (uVar7 < 0x80) goto LAB_1402f8c31;
          if (((local_d8 == '\0') && (local_8e == '\0')) &&
             (((local_86 == '\0' &&
               ((((byte)(local_d7 - 1) < 0x21 && (local_99 == '\0')) &&
                (acStack_d6[local_d7] == '\0')))) && (local_85 < 0x80)))) {
            local_138 = local_100;
            uVar20 = FUN_1402f6180(local_108,puVar10,
                                   (CONCAT31(CONCAT21(CONCAT11(local_85,local_84),local_83),local_82
                                            ) + 0x7fU & 0xffffff80) + 0x80,param_3);
            goto LAB_1402f8c31;
          }
        }
        else {
          iVar17 = (*(code *)puVar10[4])(puVar10,0,0,0);
          uVar20 = -(uint)(iVar17 != 0) & 0x55;
          if (iVar17 == 0) goto LAB_1402f8b49;
LAB_1402f8c31:
          plVar15 = local_108;
          puVar19 = local_100;
          if ((char)uVar20 != '\x02') goto LAB_1402f8c64;
        }
        puVar19 = local_100;
        plVar15 = local_108;
        local_138 = local_100;
        uVar20 = FUN_1402f6180(local_108,puVar10,0,param_3);
      }
LAB_1402f8c64:
      if ((((uVar20 & 0xff) == 2) || ((uVar20 & 0xff) == 0x55)) && ((*param_2 & 4) != 0)) {
        local_138 = param_2;
        uVar20 = FUN_1402f9420(plVar15,puVar10,param_3,puVar19);
      }
      if (uVar20 == 0) {
        if (puVar10 != (undefined8 *)0x0) {
          lVar12 = puVar10[6];
          if ((code *)puVar10[5] != (code *)0x0) {
            (*(code *)puVar10[5])(puVar10);
          }
LAB_1402f8cad:
          if (cVar18 == '\0') {
            (**(code **)(lVar12 + 0x10))(lVar12,puVar10);
          }
        }
        return (longlong *)0x0;
      }
    }
    plVar15 = (longlong *)(ulonglong)uVar20;
    lVar12 = local_e8;
    if ((char)uVar20 == '\x02') {
      plVar15 = (longlong *)0x2;
    }
    goto LAB_1402f8ccb;
  }
  if ((param_4 == (uint *)0x0) && (-1 < (int)param_3)) {
    plVar15 = (longlong *)0x6;
    lVar12 = 0;
    goto LAB_1402f8ccb;
  }
  lVar12 = *param_1;
  local_e8 = lVar12;
  if (((*param_2 & 8) == 0) ||
     (puVar2 = *(undefined8 **)(param_2 + 10), puVar2 == (undefined8 *)0x0)) {
    plVar8 = param_1 + 3;
    plVar15 = (longlong *)0xb;
    local_f0 = plVar8 + *(uint *)((longlong)param_1 + 0x14);
    if (plVar8 < local_f0) {
      do {
        puVar2 = (undefined8 *)*plVar8;
        if ((*(byte *)*puVar2 & 1) != 0) {
          if ((*param_2 & 0x10) == 0) {
            uVar7 = 0;
            puVar19 = (uint *)0x0;
          }
          else {
            uVar7 = param_2[0xc];
            puVar19 = *(uint **)(param_2 + 0xe);
          }
          local_128 = &local_e0;
          local_138 = (uint *)CONCAT44(local_138._4_4_,uVar7);
          local_130 = puVar19;
          local_f8 = puVar2;
          uVar20 = FUN_1402f97b0(puVar2,&local_110,local_118,param_3);
          puVar10 = local_110;
          plVar15 = (longlong *)(ulonglong)uVar20;
          lVar12 = local_e8;
          if (uVar20 == 0) goto LAB_1402f856a;
          if (((param_5 != '\0') &&
              (iVar17 = strcmp(*(char **)(*(longlong *)*plVar8 + 8),"truetype"), iVar17 == 0)) &&
             ((char)uVar20 == -0x72)) {
            if ((code *)puVar10[4] != (code *)0x0) {
              iVar17 = (*(code *)puVar10[4])(puVar10,0,0,0);
              plVar15 = (longlong *)(ulonglong)(-(uint)(iVar17 != 0) & 0x55);
              cVar18 = local_118[0];
              if (iVar17 != 0) break;
            }
            local_130 = local_100;
            *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            local_138 = puVar19;
            uVar7 = FUN_1402f99c0(local_108,puVar10,param_3,uVar7);
            cVar18 = local_118[0];
            plVar15 = (longlong *)(ulonglong)uVar7;
            if (uVar7 == 0) {
              lVar12 = puVar10[6];
              if ((code *)puVar10[5] != (code *)0x0) {
                (*(code *)puVar10[5])(puVar10);
              }
              goto LAB_1402f8cad;
            }
          }
          cVar18 = local_118[0];
          if ((char)plVar15 != '\x02') break;
        }
        plVar8 = plVar8 + 1;
        cVar18 = local_118[0];
      } while (plVar8 < local_f0);
    }
    goto LAB_1402f8aea;
  }
  local_f8 = puVar2;
  if ((*(byte *)*puVar2 & 1) == 0) {
    plVar15 = (longlong *)&DAT_00000020;
LAB_1402f8ccb:
    if (puVar10 != (undefined8 *)0x0) {
      lVar14 = puVar10[6];
      if ((code *)puVar10[5] != (code *)0x0) {
        (*(code *)puVar10[5])(puVar10);
      }
      if (cVar18 == '\0') {
        (**(code **)(lVar14 + 0x10))(lVar14,puVar10);
      }
    }
  }
  else {
    if ((*param_2 & 0x10) == 0) {
      uVar7 = 0;
      local_130 = (uint *)0x0;
    }
    else {
      uVar7 = param_2[0xc];
      local_130 = *(uint **)(param_2 + 0xe);
    }
    local_128 = &local_e0;
    local_138 = (uint *)CONCAT44(local_138._4_4_,uVar7);
    uVar7 = FUN_1402f97b0(puVar2,&local_110,local_118,param_3);
    plVar15 = (longlong *)(ulonglong)uVar7;
    puVar10 = local_110;
    cVar18 = local_118[0];
    if (uVar7 != 0) goto LAB_1402f8ccb;
LAB_1402f856a:
    plVar8 = (longlong *)(**(code **)(lVar12 + 8))(lVar12,0x18);
    lVar14 = local_e0;
    if (plVar8 != (longlong *)0x0) {
      plVar15 = (longlong *)0x0;
      plVar8[2] = local_e0;
      lVar12 = *(longlong *)(local_e0 + 0x90);
      if ((undefined8 *)(lVar12 + 0x20) != (undefined8 *)0x0) {
        lVar3 = *(longlong *)(lVar12 + 0x28);
        plVar8[1] = 0;
        *plVar8 = lVar3;
        if (lVar3 == 0) {
          *(undefined8 *)(lVar12 + 0x20) = plVar8;
        }
        else {
          *(longlong **)(lVar3 + 8) = plVar8;
        }
        *(longlong **)(lVar12 + 0x28) = plVar8;
      }
      if ((int)param_3 < 0) {
LAB_1402f88b7:
        iVar17 = 0;
        if ((*(byte *)(lVar14 + 8) & 1) != 0) {
          sVar6 = *(short *)(lVar14 + 0x6e);
          if (sVar6 < 0) {
            sVar6 = -sVar6;
            *(short *)(lVar14 + 0x6e) = sVar6;
          }
          if ((*(byte *)(lVar14 + 8) & 0x20) == 0) {
            *(short *)(lVar14 + 0x72) = sVar6;
          }
        }
        if (((*(byte *)(lVar14 + 8) & 2) != 0) && (0 < *(int *)(lVar14 + 0x28))) {
          do {
            psVar13 = (short *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar14 + 0x30));
            sVar6 = *psVar13;
            if (sVar6 < 0) {
              sVar6 = -sVar6;
              *psVar13 = sVar6;
            }
            iVar11 = *(int *)(psVar13 + 4);
            if (iVar11 < 0) {
              iVar11 = -iVar11;
              *(int *)(psVar13 + 4) = iVar11;
            }
            iVar16 = *(int *)(psVar13 + 6);
            if (iVar16 < 0) {
              iVar16 = -iVar16;
              *(int *)(psVar13 + 6) = iVar16;
            }
            if (((sVar6 < 0) || (iVar11 < 0)) || (iVar16 < 0)) {
              psVar13[0] = 0;
              psVar13[1] = 0;
              psVar13[2] = 0;
              psVar13[3] = 0;
              psVar13[4] = 0;
              psVar13[5] = 0;
              psVar13[6] = 0;
              psVar13[7] = 0;
            }
            iVar17 = iVar17 + 1;
          } while (iVar17 < *(int *)(lVar14 + 0x28));
        }
        puVar10 = *(undefined8 **)(lVar14 + 0xd0);
        *puVar10 = 0x10000;
        *(undefined4 *)(puVar10 + 1) = 0;
        *(undefined8 *)((longlong)puVar10 + 0xc) = 0x10000;
        *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
        *(undefined4 *)(puVar10 + 0xc) = 1;
        *(undefined1 *)(puVar10 + 0xb) = 0xff;
        if (local_100 != (uint *)0x0) {
          *(longlong *)local_100 = lVar14;
          return plVar15;
        }
        if (lVar14 == 0) {
          return plVar15;
        }
        if (*(longlong *)(lVar14 + 0x90) == 0) {
          return plVar15;
        }
        piVar1 = (int *)(*(longlong *)(lVar14 + 0xd0) + 0x60);
        *piVar1 = *piVar1 + -1;
        if (0 < *(int *)(*(longlong *)(lVar14 + 0xd0) + 0x60)) {
          return plVar15;
        }
        puVar10 = *(undefined8 **)(lVar14 + 0x90);
        puVar2 = puVar10 + 4;
        if (puVar2 == (undefined8 *)0x0) {
          return plVar15;
        }
        plVar8 = (longlong *)*puVar2;
        while( true ) {
          if (plVar8 == (longlong *)0x0) {
            return plVar15;
          }
          if (plVar8[2] == lVar14) break;
          plVar8 = (longlong *)plVar8[1];
        }
        lVar3 = *plVar8;
        lVar12 = puVar10[2];
        plVar8 = (longlong *)plVar8[1];
        if (lVar3 == 0) {
          *puVar2 = plVar8;
        }
        else {
          *(longlong **)(lVar3 + 8) = plVar8;
        }
        if (plVar8 == (longlong *)0x0) {
          puVar10[5] = lVar3;
          (**(code **)(lVar12 + 0x10))(lVar12);
        }
        else {
          *plVar8 = lVar3;
          (**(code **)(lVar12 + 0x10))(lVar12);
        }
        goto LAB_1402f8d02;
      }
      if (local_e0 == 0) {
LAB_1402f898a:
        plVar15 = (longlong *)0x23;
      }
      else {
        lVar12 = *(longlong *)(local_e0 + 0x90);
        if (lVar12 == 0) {
          plVar15 = (longlong *)0x6;
        }
        else {
          lVar3 = *(longlong *)(lVar12 + 0x10);
          iVar17 = *(int *)(*(longlong *)(lVar12 + 0x18) + 0x40);
          uVar7 = 0x40;
          if (iVar17 < 1) {
            plVar8 = plVar15;
            if (-1 < iVar17) goto LAB_1402f862c;
            uVar20 = 6;
          }
          else {
            plVar8 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,iVar17);
            uVar20 = 0x40;
            if (plVar8 != (longlong *)0x0) {
              FUN_1404217a0(plVar8,0,(longlong)iVar17);
LAB_1402f862c:
              plVar8[1] = lVar14;
              local_f0 = *(longlong **)(lVar14 + 0x90);
              local_f8 = (undefined8 *)local_f0[3];
              lVar12 = local_f0[2];
              *plVar8 = local_f0[1];
              puVar9 = (ulonglong *)(**(code **)(lVar12 + 8))(lVar12,0x38);
              plVar15 = (longlong *)0x40;
              if (puVar9 == (ulonglong *)0x0) {
LAB_1402f8778:
                FUN_1402f7080(plVar8);
                (**(code **)(lVar3 + 0x10))(lVar3,plVar8);
                goto LAB_1402f898f;
              }
              *puVar9 = 0;
              puVar9[1] = 0;
              uVar20 = 0;
              puVar9[2] = 0;
              puVar9[3] = 0;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              plVar8[0x1e] = (longlong)puVar9;
              if ((*(uint *)*local_f0 & 0x200) == 0) {
                local_f0 = (longlong *)(**(code **)(lVar12 + 8))(lVar12,0xb0);
                uVar5 = uVar7;
                if (local_f0 != (longlong *)0x0) {
                  FUN_1404217a0(local_f0 + 1,0,0xa8);
                  *local_f0 = lVar12;
                  *puVar9 = (ulonglong)local_f0;
                  uVar5 = uVar20;
                }
                uVar20 = uVar5;
                if (uVar20 == 0) goto LAB_1402f86f2;
              }
              else {
LAB_1402f86f2:
                if ((code *)local_f8[0xd] != (code *)0x0) {
                  uVar20 = (*(code *)local_f8[0xd])(plVar8);
                }
              }
              if ((*(uint *)(plVar8[1] + 8) & 0x10000) == 0) {
                if (uVar20 != 0) {
                  plVar15 = (longlong *)(ulonglong)uVar20;
                  goto LAB_1402f8778;
                }
              }
              else {
                puVar10 = (undefined8 *)(**(code **)(lVar12 + 8))(lVar12,0x48);
                if (puVar10 == (undefined8 *)0x0) goto LAB_1402f8778;
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                puVar10[4] = 0;
                puVar10[5] = 0;
                puVar10[6] = 0;
                puVar10[7] = 0;
                puVar10[8] = 0;
                plVar8[0x1d] = (longlong)puVar10;
              }
              plVar8[2] = *(longlong *)(lVar14 + 0x78);
              *(longlong **)(lVar14 + 0x78) = plVar8;
              if (lVar14 == 0) goto LAB_1402f898a;
              if (*(longlong *)(lVar14 + 0x90) == 0) {
                plVar15 = (longlong *)0x22;
                goto LAB_1402f898f;
              }
              lVar12 = *(longlong *)(*(longlong *)(lVar14 + 0x90) + 0x18);
              lVar3 = *(longlong *)(lVar14 + 0x98);
              local_108 = (longlong *)0x0;
              plVar15 = (longlong *)FUN_1402f7e90(lVar3,*(undefined4 *)(lVar12 + 0x3c),&local_110);
              uVar20 = (uint)local_110;
              if (((uint)local_110 == 0) &&
                 (plVar8 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,0x18), uVar20 = uVar7,
                 plVar8 != (longlong *)0x0)) {
                local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
                *plVar15 = lVar14;
                puVar10 = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x28);
                if (puVar10 == (undefined8 *)0x0) {
LAB_1402f886e:
                  (**(code **)(lVar3 + 0x10))(lVar3,plVar8);
                  uVar20 = uVar7;
                  goto LAB_1402f8877;
                }
                uVar20 = 0;
                *puVar10 = 0;
                puVar10[1] = 0;
                puVar10[2] = 0;
                puVar10[3] = 0;
                puVar10[4] = 0;
                plVar15[7] = (longlong)puVar10;
                pcVar4 = *(code **)(lVar12 + 0x58);
                if ((pcVar4 == (code *)0x0) || (uVar20 = (*pcVar4)(plVar15), uVar20 == 0)) {
                  plVar8[2] = (longlong)plVar15;
                  local_108 = plVar15;
                  if ((undefined8 *)(lVar14 + 0xa8) != (undefined8 *)0x0) {
                    lVar12 = *(longlong *)(lVar14 + 0xb0);
                    plVar8[1] = 0;
                    *plVar8 = lVar12;
                    if (lVar12 == 0) {
                      *(undefined8 *)(lVar14 + 0xa8) = plVar8;
                    }
                    else {
                      *(longlong **)(lVar12 + 8) = plVar8;
                    }
                    *(longlong **)(lVar14 + 0xb0) = plVar8;
                    goto LAB_1402f886a;
                  }
                }
                else {
LAB_1402f886a:
                  uVar7 = uVar20;
                  if (uVar20 != 0) goto LAB_1402f886e;
                }
              }
              else {
LAB_1402f8877:
                if (plVar15 != (longlong *)0x0) {
                  if (plVar15[7] != 0) {
                    (**(code **)(lVar3 + 0x10))(lVar3);
                  }
                  plVar15[7] = 0;
                  (**(code **)(lVar3 + 0x10))(lVar3,plVar15);
                }
              }
              plVar15 = (longlong *)(ulonglong)uVar20;
              if (uVar20 == 0) {
                *(longlong **)(lVar14 + 0x80) = local_108;
                goto LAB_1402f88b7;
              }
              goto LAB_1402f898f;
            }
          }
          plVar15 = (longlong *)(ulonglong)uVar20;
        }
      }
LAB_1402f898f:
      if (lVar14 == 0) {
        return plVar15;
      }
      if (*(longlong *)(lVar14 + 0x90) == 0) {
        return plVar15;
      }
      piVar1 = (int *)(*(longlong *)(lVar14 + 0xd0) + 0x60);
      *piVar1 = *piVar1 + -1;
      if (0 < *(int *)(*(longlong *)(lVar14 + 0xd0) + 0x60)) {
        return plVar15;
      }
      puVar10 = *(undefined8 **)(lVar14 + 0x90);
      if (puVar10 + 4 == (undefined8 *)0x0) {
        return plVar15;
      }
      plVar8 = (longlong *)puVar10[4];
      while( true ) {
        if (plVar8 == (longlong *)0x0) {
          return plVar15;
        }
        if (plVar8[2] == lVar14) break;
        plVar8 = (longlong *)plVar8[1];
      }
      lVar3 = *plVar8;
      lVar12 = puVar10[2];
      plVar8 = (longlong *)plVar8[1];
      if (lVar3 == 0) {
        puVar10[4] = plVar8;
      }
      else {
        *(longlong **)(lVar3 + 8) = plVar8;
      }
      if (plVar8 == (longlong *)0x0) {
        puVar10[5] = lVar3;
      }
      else {
        *plVar8 = lVar3;
      }
      (**(code **)(lVar12 + 0x10))(lVar12);
      goto LAB_1402f8d02;
    }
    plVar15 = (longlong *)0x40;
  }
  lVar14 = local_e0;
  puVar10 = local_f8;
  if (local_e0 == 0) {
    return plVar15;
  }
LAB_1402f8d02:
  FUN_1402f6a90(lVar12,lVar14,puVar10);
  return plVar15;
}

