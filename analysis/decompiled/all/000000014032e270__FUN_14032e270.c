// Function: FUN_14032e270
// Addr: 14032e270
// Size: 1610 bytes


int FUN_14032e270(char *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                 undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  char *pcVar9;
  short sVar10;
  undefined8 *puVar11;
  int local_res18 [4];
  
  lVar1 = *(longlong *)(param_4 + 0xc);
  uVar2 = *(undefined8 *)(lVar1 + 0x80);
  local_res18[0] = 0;
  iVar6 = strncmp(param_1,"COMMENT",7);
  if (iVar6 == 0) {
    if ((*param_4 & 0x2000) == 0) {
      return 0;
    }
    local_res18[0] = FUN_14032d4c0(lVar1,param_1,param_2);
  }
  else {
    iVar6 = strncmp(param_1,"ENDFONT",7);
    if (iVar6 == 0) {
      if ((*param_4 & 0xfc0) != 0) {
        local_res18[0] = 0xba;
        goto LAB_14032e884;
      }
      FUN_1402ea670(*(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 0x34),0x30,&LAB_14032f280)
      ;
      *param_4 = *param_4 & 0xfffffffe;
      *param_5 = FUN_14032ade0;
    }
    else {
      iVar6 = strncmp(param_1,"ENDCHAR",7);
      if (iVar6 == 0) {
        FUN_1402f7f90(uVar2,*(undefined8 *)(param_4 + 6));
        *param_4 = *param_4 & 0xfffff03f;
        param_4[6] = 0;
        param_4[7] = 0;
        param_4[8] = 0;
      }
      else {
        uVar7 = *param_4;
        if ((((uVar7 & 0x40) != 0) && (param_4[8] == 0xffffffff)) && ((uVar7 >> 0xe & 1) == 0)) {
          return 0;
        }
        iVar6 = strncmp(param_1,"STARTCHAR ",10);
        if (iVar6 == 0) {
          if ((uVar7 & 0xfc0) == 0) {
            uVar8 = FUN_14032f230(param_1,0x20);
            uVar8 = FUN_1402f8160(uVar2,uVar8,local_res18);
            *(undefined8 *)(param_4 + 6) = uVar8;
            if (local_res18[0] == 0) {
              *param_4 = *param_4 | 0x40;
              return 0;
            }
            goto LAB_14032e884;
          }
LAB_14032e429:
          local_res18[0] = 0xb5;
          goto LAB_14032e884;
        }
        iVar6 = strncmp(param_1,"ENCODING ",9);
        if (iVar6 != 0) {
          if (-1 < (char)uVar7) {
            local_res18[0] = 0xb6;
            goto LAB_14032e884;
          }
          lVar3 = *(longlong *)(param_4 + 10);
          iVar6 = strncmp(param_1,"SWIDTH ",7);
          if (iVar6 == 0) {
            uVar8 = FUN_14032f230(param_1,0x20);
            uVar4 = FUN_14032da90(uVar8);
            *(undefined2 *)(lVar3 + 0xc) = uVar4;
            *param_4 = *param_4 | 0x100;
          }
          else {
            iVar6 = strncmp(param_1,"DWIDTH ",7);
            if (iVar6 == 0) {
              uVar8 = FUN_14032f230(param_1,0x20);
              uVar4 = FUN_14032da90(uVar8);
              *(undefined2 *)(lVar3 + 0xe) = uVar4;
              if ((*param_4 & 0x100) == 0) {
                uVar4 = FUN_1402f20b0(uVar4,72000,*(int *)(lVar1 + 0x18) * *(int *)(lVar1 + 0x14));
                *(undefined2 *)(lVar3 + 0xc) = uVar4;
              }
              *param_4 = *param_4 | 0x200;
            }
            else {
              if ((uVar7 >> 0xb & 1) != 0) {
                return 0;
              }
              iVar6 = strncmp(param_1,"BBX ",4);
              if (iVar6 == 0) {
                uVar8 = FUN_14032f230(param_1,0x20);
                uVar4 = FUN_14032da90(uVar8);
                *(undefined2 *)(lVar3 + 0x10) = uVar4;
                uVar8 = FUN_14032f230(uVar8,0x20);
                uVar4 = FUN_14032da90(uVar8);
                *(undefined2 *)(lVar3 + 0x12) = uVar4;
                uVar8 = FUN_14032f230(uVar8,0x20);
                uVar4 = FUN_14032d950(uVar8);
                *(undefined2 *)(lVar3 + 0x14) = uVar4;
                uVar8 = FUN_14032f230(uVar8,0x20);
                sVar5 = FUN_14032d950(uVar8);
                *(short *)(lVar3 + 0x16) = sVar5;
                sVar10 = sVar5 + *(short *)(lVar3 + 0x12);
                *(short *)(lVar3 + 0x1a) = -sVar5;
                *(short *)(lVar3 + 0x18) = sVar10;
                if (sVar10 <= *(short *)((longlong)param_4 + 0x12)) {
                  sVar10 = *(short *)((longlong)param_4 + 0x12);
                }
                *(short *)((longlong)param_4 + 0x12) = sVar10;
                sVar10 = *(short *)(lVar3 + 0x1a);
                if (*(short *)(lVar3 + 0x1a) <= (short)param_4[5]) {
                  sVar10 = (short)param_4[5];
                }
                *(short *)(param_4 + 5) = sVar10;
                sVar10 = *(short *)(lVar3 + 0x14) + *(short *)(lVar3 + 0x10);
                *(short *)((longlong)param_4 + 0x16) = sVar10;
                if (sVar10 <= (short)param_4[4]) {
                  sVar10 = (short)param_4[4];
                }
                *(short *)(param_4 + 4) = sVar10;
                sVar10 = *(short *)(lVar3 + 0x14);
                if ((short)param_4[3] <= *(short *)(lVar3 + 0x14)) {
                  sVar10 = (short)param_4[3];
                }
                *(short *)(param_4 + 3) = sVar10;
                sVar10 = *(short *)(lVar3 + 0x14);
                if (*(short *)(lVar3 + 0x14) <= *(short *)((longlong)param_4 + 0xe)) {
                  sVar10 = *(short *)((longlong)param_4 + 0xe);
                }
                *(short *)((longlong)param_4 + 0xe) = sVar10;
                if ((*param_4 & 0x200) == 0) {
                  *(undefined2 *)(lVar3 + 0xe) = *(undefined2 *)(lVar3 + 0x10);
                }
                if (((*param_4 & 0x1000) != 0) &&
                   (sVar10 = FUN_1402f20b0(*(undefined2 *)(lVar3 + 0xe),72000,
                                           *(int *)(lVar1 + 0x18) * *(int *)(lVar1 + 0x14)),
                   sVar10 != *(short *)(lVar3 + 0xc))) {
                  *(short *)(lVar3 + 0xc) = sVar10;
                }
                *param_4 = *param_4 | 0x400;
              }
              else {
                iVar6 = strncmp(param_1,"BITMAP",6);
                if (iVar6 != 0) {
                  local_res18[0] = 3;
                  goto LAB_14032e884;
                }
                if ((uVar7 >> 10 & 1) == 0) {
                  local_res18[0] = 0xb7;
                  goto LAB_14032e884;
                }
                uVar7 = (int)((uint)*(ushort *)(lVar3 + 0x10) * (uint)*(ushort *)(lVar1 + 0x78) + 7)
                        >> 3;
                *(uint *)(lVar3 + 0x28) = uVar7;
                if ((0xffff < uVar7) || (uVar7 = *(ushort *)(lVar3 + 0x12) * uVar7, 0xffff < uVar7))
                {
                  local_res18[0] = 0xb8;
                  goto LAB_14032e884;
                }
                *(short *)(lVar3 + 0x2c) = (short)uVar7;
                if (uVar7 != 0) {
                  uVar8 = FUN_1402f7e90(uVar2,uVar7 & 0xffff,local_res18);
                  *(undefined8 *)(lVar3 + 0x20) = uVar8;
                  if (local_res18[0] == 0) {
                    *param_4 = *param_4 | 0x800;
                    param_4[2] = 0;
                    *param_5 = FUN_14032e1f0;
                    return 0;
                  }
                  goto LAB_14032e884;
                }
              }
            }
          }
          goto LAB_14032e2da;
        }
        if ((uVar7 & 0x40) == 0) goto LAB_14032e429;
        uVar8 = FUN_14032f230(param_1,0x20);
        uVar7 = FUN_14032d8b0(uVar8);
        param_4[8] = uVar7;
        if ((int)uVar7 < -1) {
          param_4[8] = 0xffffffff;
        }
        pcVar9 = (char *)FUN_14032f230(uVar8,0x20);
        uVar7 = param_4[8];
        if (uVar7 == 0xffffffff) {
          if (*pcVar9 != '\0') {
            uVar7 = FUN_14032d8b0(pcVar9);
            param_4[8] = uVar7;
            goto LAB_14032e487;
          }
        }
        else {
LAB_14032e487:
          if (uVar7 + 1 < 0x110001) {
            if (-1 < (int)uVar7) {
              iVar6 = *(int *)(lVar1 + 0x30);
              if (*(int *)(lVar1 + 0x34) == iVar6) {
                uVar8 = FUN_1402f80b0(uVar2,0x30,iVar6,iVar6 + 0x40,*(undefined8 *)(lVar1 + 0x38),
                                      local_res18);
                *(undefined8 *)(lVar1 + 0x38) = uVar8;
                if (local_res18[0] != 0) goto LAB_14032e884;
                *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + 0x40;
              }
              uVar7 = *(uint *)(lVar1 + 0x34);
              *(uint *)(lVar1 + 0x34) = uVar7 + 1;
              puVar11 = (undefined8 *)((ulonglong)uVar7 * 0x30 + *(longlong *)(lVar1 + 0x38));
              *puVar11 = *(undefined8 *)(param_4 + 6);
              *(uint *)(puVar11 + 1) = param_4[8];
              *param_4 = *param_4 | 0x80;
              param_4[6] = 0;
              param_4[7] = 0;
              *(undefined8 **)(param_4 + 10) = puVar11;
              goto LAB_14032e2da;
            }
          }
          else {
            param_4[8] = 0xffffffff;
          }
        }
        if ((*param_4 & 0x4000) == 0) {
          FUN_1402f7f90(uVar2,*(undefined8 *)(param_4 + 6));
          *param_4 = *param_4 | 0x80;
          param_4[6] = 0;
          param_4[7] = 0;
          param_4[6] = 0;
          param_4[7] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
        }
        else {
          iVar6 = *(int *)(lVar1 + 0x40);
          if (*(int *)(lVar1 + 0x44) == iVar6) {
            uVar8 = FUN_1402f80b0(uVar2,0x30,iVar6,iVar6 + 4,*(undefined8 *)(lVar1 + 0x48),
                                  local_res18);
            *(undefined8 *)(lVar1 + 0x48) = uVar8;
            if (local_res18[0] != 0) goto LAB_14032e884;
            *(int *)(lVar1 + 0x40) = *(int *)(lVar1 + 0x40) + 4;
          }
          puVar11 = (undefined8 *)
                    ((ulonglong)*(uint *)(lVar1 + 0x44) * 0x30 + *(longlong *)(lVar1 + 0x48));
          *puVar11 = *(undefined8 *)(param_4 + 6);
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(lVar1 + 0x44);
          *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x44) + 1;
          *param_4 = *param_4 | 0x80;
          param_4[6] = 0;
          param_4[7] = 0;
          *(undefined8 **)(param_4 + 10) = puVar11;
        }
      }
    }
  }
LAB_14032e2da:
  if (local_res18[0] == 0) {
    return 0;
  }
LAB_14032e884:
  if ((*param_4 & 0x40) != 0) {
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_4 + 6));
    param_4[6] = 0;
    param_4[7] = 0;
  }
  return local_res18[0];
}

