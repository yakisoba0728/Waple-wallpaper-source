// Function: FUN_140089c60
// Addr: 140089c60
// Size: 1153 bytes


undefined8 * FUN_140089c60(undefined8 *param_1,double param_2,char param_3,int param_4,int param_5)

{
  ulonglong uVar1;
  char ******ppppppcVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  char ******ppppppcVar6;
  char ******ppppppcVar7;
  char ******ppppppcVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  char ******ppppppcVar12;
  longlong lVar13;
  undefined *puVar14;
  double dVar15;
  undefined1 local_58;
  char *****local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  ulonglong uStack_38;
  
  if (((uint)((ulonglong)param_2 >> 0x34) & 0x7ff) == 0x7ff) {
    *param_1 = 0;
    param_1[1] = 0;
    if (NAN(param_2) || NAN(param_2)) {
      pcVar4 = "NaN";
      pcVar9 = "null";
    }
    else if (0.0 <= param_2) {
      pcVar4 = "Infinity";
      pcVar9 = "1e+9999";
    }
    else {
      pcVar4 = "-Infinity";
      pcVar9 = "-1e+9999";
    }
    if (param_3 != '\0') {
      pcVar9 = pcVar4;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    sVar5 = strlen(pcVar9);
    FUN_140017480(param_1,pcVar9,sVar5);
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = (char *****)0x0;
    uStack_48 = 0;
    local_50 = (char *****)FUN_14028af20();
    puVar14 = &DAT_14047898c;
    local_40 = 0x24;
    uStack_38 = 0x2f;
    *local_50 = (char ****)0x0;
    local_50[1] = (char ****)0x0;
    local_50[2] = (char ****)0x0;
    local_50[3] = (char ****)0x0;
    *(undefined4 *)(local_50 + 4) = 0;
    *(char *)((longlong)local_50 + 0x24) = '\0';
    if (param_5 == 0) {
      puVar14 = &DAT_140478964;
    }
    while( true ) {
      ppppppcVar6 = &local_50;
      if (0xf < uStack_38) {
        ppppppcVar6 = (char ******)local_50;
      }
      dVar15 = param_2;
      iVar3 = FUN_1400899e0(ppppppcVar6,local_40,puVar14,param_4,param_2);
      uVar11 = (ulonglong)iVar3;
      if (iVar3 < 0) {
        FID_conflict__assert
                  (L"len >= 0",L"D:\\dev\\we\\windows\\src\\json\\src\\json_writer.cpp",0x53);
      }
      if (uVar11 < local_40) break;
      uVar1 = uVar11 + 1;
      if (local_40 < uVar1) {
        uVar11 = uVar1 - local_40;
        if (uStack_38 - local_40 < uVar11) {
          FUN_140016cc0(&local_50,uVar11,local_58,uVar11,(ulonglong)dVar15 & 0xffffffffffffff00);
        }
        else {
          ppppppcVar6 = &local_50;
          if (0xf < uStack_38) {
            ppppppcVar6 = (char ******)local_50;
          }
          pcVar9 = (char *)((longlong)ppppppcVar6 + local_40);
          local_40 = uVar1;
          FUN_1404217a0(pcVar9,0,uVar11);
          pcVar9[uVar11] = '\0';
        }
      }
      else {
        ppppppcVar6 = &local_50;
        if (0xf < uStack_38) {
          ppppppcVar6 = (char ******)local_50;
        }
        local_40 = uVar1;
        *(char *)((longlong)ppppppcVar6 + uVar11 + 1) = '\0';
      }
    }
    FUN_140016ee0(&local_50,uVar11,0);
    uVar11 = local_40;
    ppppppcVar6 = &local_50;
    if (0xf < uStack_38) {
      ppppppcVar6 = (char ******)local_50;
    }
    ppppppcVar8 = (char ******)((longlong)ppppppcVar6 + local_40);
    ppppppcVar7 = &local_50;
    if (0xf < uStack_38) {
      ppppppcVar7 = (char ******)local_50;
    }
    for (; ppppppcVar7 != ppppppcVar8; ppppppcVar7 = (char ******)((longlong)ppppppcVar7 + 1)) {
      if (*(char *)ppppppcVar7 == ',') {
        *(char *)ppppppcVar7 = '.';
      }
    }
    ppppppcVar8 = &local_50;
    if (0xf < uStack_38) {
      ppppppcVar8 = (char ******)local_50;
    }
    pcVar9 = (char *)((longlong)ppppppcVar6 + (uVar11 - (longlong)ppppppcVar7));
    lVar13 = (longlong)ppppppcVar7 - (longlong)ppppppcVar8;
    if ((char *)(local_40 - lVar13) < pcVar9) {
      pcVar9 = (char *)(local_40 - lVar13);
    }
    ppppppcVar6 = &local_50;
    if (0xf < uStack_38) {
      ppppppcVar6 = (char ******)local_50;
    }
    lVar10 = local_40 - (longlong)pcVar9;
    FUN_1404210f0((char *)((longlong)ppppppcVar6 + lVar13),
                  (char *)((longlong)ppppppcVar6 + lVar13) + (longlong)pcVar9,(lVar10 - lVar13) + 1)
    ;
    ppppppcVar6 = &local_50;
    if (0xf < uStack_38) {
      ppppppcVar6 = (char ******)local_50;
    }
    local_40 = lVar10;
    if (((lVar10 == 0) ||
        (pcVar9 = (char *)thunk_FUN_14028cf70(ppppppcVar6,(char *)((longlong)ppppppcVar6 + lVar10),
                                              0x2e),
        pcVar9 == (char *)((longlong)ppppppcVar6 + lVar10))) ||
       ((longlong)pcVar9 - (longlong)ppppppcVar6 == -1)) {
      ppppppcVar6 = &local_50;
      if (0xf < uStack_38) {
        ppppppcVar6 = (char ******)local_50;
      }
      if (((local_40 == 0) ||
          (pcVar4 = (char *)((longlong)ppppppcVar6 + local_40),
          pcVar9 = (char *)thunk_FUN_14028cf70(ppppppcVar6,pcVar4,0x65), pcVar9 == pcVar4)) ||
         ((longlong)pcVar9 - (longlong)ppppppcVar6 == -1)) {
        uVar11 = local_40;
        if (uStack_38 - local_40 < 2) {
          FUN_140053110(&local_50,2,local_58,&DAT_140478994,2);
        }
        else {
          local_40 = local_40 + 2;
          ppppppcVar6 = &local_50;
          if (0xf < uStack_38) {
            ppppppcVar6 = (char ******)local_50;
          }
          pcVar9 = (char *)((longlong)ppppppcVar6 + uVar11);
          pcVar9[0] = '.';
          pcVar9[1] = '0';
          *(char *)((longlong)ppppppcVar6 + uVar11 + 2) = '\0';
        }
      }
    }
    if (param_5 == 1) {
      ppppppcVar6 = &local_50;
      if (0xf < uStack_38) {
        ppppppcVar6 = (char ******)local_50;
      }
      ppppppcVar7 = (char ******)((longlong)ppppppcVar6 + local_40);
      ppppppcVar8 = &local_50;
      if (0xf < uStack_38) {
        ppppppcVar8 = (char ******)local_50;
      }
      ppppppcVar12 = ppppppcVar7;
      if (ppppppcVar8 != ppppppcVar7) {
        while (ppppppcVar2 = (char ******)((longlong)ppppppcVar7 + -1), ppppppcVar12 = ppppppcVar7,
              *(char *)((longlong)ppppppcVar7 + -1) == '0') {
          if (((ppppppcVar8 != ppppppcVar2) &&
              (ppppppcVar12 = (char ******)((longlong)ppppppcVar7 + -2), ppppppcVar8 != ppppppcVar12
              )) && (*(char *)ppppppcVar12 == '.')) {
            if (param_4 != 0) {
              ppppppcVar12 = ppppppcVar7;
            }
            break;
          }
          ppppppcVar7 = ppppppcVar2;
          ppppppcVar12 = ppppppcVar2;
          if (ppppppcVar8 == ppppppcVar2) break;
        }
      }
      ppppppcVar7 = &local_50;
      if (0xf < uStack_38) {
        ppppppcVar7 = (char ******)local_50;
      }
      pcVar9 = (char *)((longlong)ppppppcVar6 + (local_40 - (longlong)ppppppcVar12));
      lVar13 = (longlong)ppppppcVar12 - (longlong)ppppppcVar7;
      if ((char *)(local_40 - lVar13) < pcVar9) {
        pcVar9 = (char *)(local_40 - lVar13);
      }
      ppppppcVar6 = &local_50;
      if (0xf < uStack_38) {
        ppppppcVar6 = (char ******)local_50;
      }
      lVar10 = local_40 - (longlong)pcVar9;
      FUN_1404210f0((char *)((longlong)ppppppcVar6 + lVar13),
                    (char *)((longlong)ppppppcVar6 + lVar13) + (longlong)pcVar9,
                    (lVar10 - lVar13) + 1);
      local_40 = lVar10;
    }
    *param_1 = local_50;
    param_1[1] = uStack_48;
    param_1[2] = local_40;
    param_1[3] = uStack_38;
  }
  return param_1;
}

