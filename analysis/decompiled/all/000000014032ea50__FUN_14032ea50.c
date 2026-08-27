// Function: FUN_14032ea50
// Addr: 14032ea50
// Size: 1444 bytes


ulonglong FUN_14032ea50(char *param_1,undefined4 param_2,undefined8 param_3,uint *param_4,
                       undefined8 *param_5)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  short sVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined **ppuVar16;
  ulonglong uVar17;
  uint local_res18 [2];
  
  uVar8 = *param_4;
  uVar15 = 0;
  uVar13 = *(undefined8 *)(param_4 + 0xe);
  local_res18[0] = 0;
  if ((uVar8 & 1) == 0) {
    iVar7 = strncmp(param_1,"STARTFONT",9);
    if (iVar7 == 0) {
      *param_4 = uVar8 | 1;
      lVar11 = FUN_1402f7e90(uVar13,0xc0,local_res18);
      *(longlong *)(param_4 + 0xc) = lVar11;
      uVar17 = (ulonglong)local_res18[0];
      if (local_res18[0] == 0) {
        *(undefined8 *)(lVar11 + 0x80) = uVar13;
        uVar17 = 0;
      }
    }
    else {
      uVar17 = 0xb0;
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_4 + 0xc);
    iVar7 = strncmp(param_1,"COMMENT",7);
    if (iVar7 == 0) {
      uVar17 = uVar15;
      if ((uVar8 >> 0xd & 1) != 0) {
        uVar8 = FUN_14032d4c0(puVar3,param_1,param_2);
        uVar17 = (ulonglong)uVar8;
      }
    }
    else if (((uVar8 & 0x10) == 0) && (iVar7 = strncmp(param_1,"STARTPROPERTIES ",0x10), iVar7 == 0)
            ) {
      uVar12 = FUN_14032f230(param_1,0x20);
      uVar8 = FUN_14032da10(uVar12);
      *(uint *)(puVar3 + 10) = uVar8;
      if (uVar8 < 2) {
        uVar8 = 2;
        *(undefined4 *)(puVar3 + 10) = 2;
      }
      if (param_4[0x10] >> 2 < uVar8) {
        *(undefined4 *)(puVar3 + 10) = 0;
        uVar17 = 6;
      }
      else {
        uVar12 = FUN_1402f80b0(uVar13,0x18,0,uVar8,0,local_res18);
        puVar3[0xb] = uVar12;
        if (local_res18[0] == 0) {
          uVar12 = FUN_1402f7fa0(uVar13,0x28,local_res18);
          puVar3[0xe] = uVar12;
          uVar17 = (ulonglong)local_res18[0];
          if (local_res18[0] == 0) {
            local_res18[0] = FUN_1402f7860(uVar12,uVar13);
            uVar17 = (ulonglong)local_res18[0];
            if (local_res18[0] == 0) {
              uVar8 = FUN_1402f7860(puVar3 + 0x13,uVar13);
              uVar17 = (ulonglong)uVar8;
              if (uVar8 == 0) {
                ppuVar16 = &PTR_s_ADD_STYLE_NAME_14043fff0;
                do {
                  local_res18[0] = 0;
                  uVar8 = FUN_1402f78f0(*ppuVar16,uVar15,puVar3 + 0x13,uVar13);
                  if (uVar8 != 0) {
                    return (ulonglong)uVar8;
                  }
                  uVar15 = uVar15 + 1;
                  ppuVar16 = ppuVar16 + 3;
                } while (uVar15 < 0x52);
                *param_4 = *param_4 | 0x10;
                *param_5 = FUN_14032e8c0;
                uVar17 = 0;
              }
            }
          }
        }
        else {
          *(undefined4 *)(puVar3 + 10) = 0;
          uVar17 = (ulonglong)local_res18[0];
        }
      }
    }
    else {
      iVar7 = strncmp(param_1,"FONTBOUNDINGBOX ",0x10);
      if (iVar7 == 0) {
        uVar13 = FUN_14032f230(param_1,0x20);
        uVar4 = FUN_14032da90(uVar13);
        *(undefined2 *)(puVar3 + 1) = uVar4;
        uVar13 = FUN_14032f230(uVar13,0x20);
        uVar4 = FUN_14032da90(uVar13);
        *(undefined2 *)((longlong)puVar3 + 10) = uVar4;
        uVar13 = FUN_14032f230(uVar13,0x20);
        uVar4 = FUN_14032d950(uVar13);
        *(undefined2 *)((longlong)puVar3 + 0xc) = uVar4;
        uVar13 = FUN_14032f230(uVar13,0x20);
        sVar5 = FUN_14032d950(uVar13);
        *(short *)((longlong)puVar3 + 0xe) = sVar5;
        *(short *)(puVar3 + 2) = sVar5 + *(short *)((longlong)puVar3 + 10);
        *(short *)((longlong)puVar3 + 0x12) = -sVar5;
        *param_4 = *param_4 | 8;
        uVar17 = (ulonglong)local_res18[0];
      }
      else {
        iVar7 = strncmp(param_1,"FONT ",5);
        if (iVar7 == 0) {
          pcVar14 = (char *)FUN_14032f230(param_1,0x20);
          FUN_1402f7f90(uVar13,*puVar3);
          *puVar3 = 0;
          uVar13 = FUN_1402f8160(uVar13,pcVar14,local_res18);
          *puVar3 = uVar13;
          uVar17 = (ulonglong)local_res18[0];
          if (local_res18[0] == 0) {
            iVar7 = 0xb;
            do {
              cVar2 = *pcVar14;
              while (cVar2 != '\0') {
                if (cVar2 == '-') {
                  if (*pcVar14 != '\0') {
                    pcVar14 = pcVar14 + 1;
                  }
                  break;
                }
                pcVar1 = pcVar14 + 1;
                pcVar14 = pcVar14 + 1;
                cVar2 = *pcVar1;
              }
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            switch(*pcVar14) {
            case 'C':
            case 'c':
              *(undefined4 *)(puVar3 + 4) = 0x20;
              *param_4 = *param_4 | 2;
              uVar17 = 0;
              break;
            default:
              *(undefined4 *)(puVar3 + 4) = 8;
              *param_4 = *param_4 | 2;
              uVar17 = 0;
              break;
            case 'M':
            case 'm':
              *(undefined4 *)(puVar3 + 4) = 0x10;
              *param_4 = *param_4 | 2;
              uVar17 = 0;
            }
          }
        }
        else {
          iVar7 = strncmp(param_1,"SIZE ",5);
          if (iVar7 == 0) {
            uVar13 = FUN_14032f230(param_1,0x20);
            uVar9 = FUN_14032da10(uVar13);
            *(undefined4 *)((longlong)puVar3 + 0x14) = uVar9;
            uVar13 = FUN_14032f230(uVar13,0x20);
            uVar9 = FUN_14032da10(uVar13);
            *(undefined4 *)(puVar3 + 3) = uVar9;
            uVar13 = FUN_14032f230(uVar13,0x20);
            uVar9 = FUN_14032da10(uVar13);
            *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar9;
            pcVar14 = (char *)FUN_14032f230(uVar13,0x20);
            if (*pcVar14 != '\0') {
              uVar6 = FUN_14032da90(pcVar14);
              if (4 < uVar6) {
                *(undefined2 *)(puVar3 + 0xf) = 8;
                *param_4 = *param_4 | 4;
                return (ulonglong)local_res18[0];
              }
              if (2 < uVar6) {
                *(undefined2 *)(puVar3 + 0xf) = 4;
                *param_4 = *param_4 | 4;
                return (ulonglong)local_res18[0];
              }
              if (1 < uVar6) {
                *(undefined2 *)(puVar3 + 0xf) = 2;
                *param_4 = *param_4 | 4;
                return (ulonglong)local_res18[0];
              }
            }
            *(undefined2 *)(puVar3 + 0xf) = 1;
            *param_4 = *param_4 | 4;
            uVar17 = (ulonglong)local_res18[0];
          }
          else {
            uVar17 = 6;
            iVar7 = strncmp(param_1,"CHARS ",6);
            if (iVar7 == 0) {
              if ((uVar8 & 2) == 0) {
                uVar17 = 0xb1;
              }
              else if ((uVar8 & 4) == 0) {
                uVar17 = 0xb2;
              }
              else if ((uVar8 & 8) == 0) {
                uVar17 = 0xb3;
              }
              else {
                uVar12 = FUN_14032f230(param_1,0x20);
                uVar10 = FUN_14032da10(uVar12);
                *(uint *)(puVar3 + 6) = uVar10;
                param_4[1] = uVar10;
                uVar8 = param_4[0x10] / 0x14;
                if (uVar8 < uVar10) {
                  *(uint *)(puVar3 + 6) = uVar8;
                  param_4[1] = uVar8;
                  uVar10 = uVar8;
                }
                if (uVar10 == 0) {
                  *(undefined4 *)(puVar3 + 6) = 0x40;
                }
                if (param_4[1] < 0x110000) {
                  uVar13 = FUN_1402f80b0(uVar13,0x30,0,*(undefined4 *)(puVar3 + 6),0,local_res18);
                  puVar3[7] = uVar13;
                  uVar17 = (ulonglong)local_res18[0];
                  if (local_res18[0] == 0) {
                    *param_4 = *param_4 | 0x20;
                    *param_5 = FUN_14032e270;
                  }
                }
              }
            }
            else {
              uVar17 = 3;
            }
          }
        }
      }
    }
  }
  return uVar17;
}

