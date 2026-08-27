// Function: FUN_14015e580
// Addr: 14015e580
// Size: 1155 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14015e580(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                       longlong param_5,longlong param_6,undefined4 param_7)

{
  longlong *plVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  undefined8 *****pppppuVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  size_t sVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 ******ppppppuVar13;
  ulonglong uVar14;
  char *pcVar15;
  char *_Str;
  undefined8 *****local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  ulonglong local_80;
  char *local_78;
  char *local_70;
  uint local_68;
  undefined8 local_60;
  undefined8 *****local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined4 *)(param_4 + 0xc) = 0;
  FUN_14000d660(param_4 + 0x20);
  local_68 = *(uint *)(param_3 + 0x10);
  bVar6 = 1;
  local_78 = *(char **)(param_3 + 8);
  iVar9 = 2;
  local_60 = 0;
  local_70 = local_78;
  if (local_68 != 0) {
    do {
      if (*local_70 == '\0') break;
      local_70 = local_70 + 1;
    } while ((longlong)local_70 - (longlong)local_78 < (longlong)(ulonglong)local_68);
  }
  local_70 = local_70 + 1;
  local_48 = 0;
  local_40 = 0;
  local_58 = (undefined8 ******)0x0;
  uStack_50 = 0;
  pcVar15 = local_78;
  if ((longlong)(ulonglong)local_68 < (longlong)local_70 - (longlong)local_78) {
    pcVar15 = "";
  }
  sVar10 = strlen(pcVar15);
  FUN_140017480(&local_58,pcVar15,sVar10);
  lVar11 = local_48;
  pppppuVar5 = local_58;
  ppppppuVar13 = &local_58;
  if (0xf < local_40) {
    ppppppuVar13 = (undefined8 ******)local_58;
  }
  if ((local_48 == 8) && (iVar7 = memcmp(ppppppuVar13,"TEXV0005",8), iVar7 == 0)) {
    iVar7 = 2;
    if (((int)local_78 - (int)local_70) + local_68 != 0) {
      while (iVar9 = iVar7, bVar6 != 0) {
        lVar11 = (longlong)local_70 - (longlong)local_78;
        pcVar15 = local_70;
        while ((lVar11 < (longlong)(ulonglong)local_68 && (*pcVar15 != '\0'))) {
          pcVar15 = pcVar15 + 1;
          lVar11 = (longlong)pcVar15 - (longlong)local_78;
        }
        local_98 = (undefined8 ******)0x0;
        uStack_90 = 0;
        _Str = "";
        if ((longlong)(pcVar15 + 1) - (longlong)local_78 <= (longlong)(ulonglong)local_68) {
          _Str = local_70;
        }
        uVar8 = 0;
        local_88 = 0;
        local_80 = 0;
        local_70 = pcVar15 + 1;
        sVar10 = strlen(_Str);
        FUN_140017480(&local_98,_Str,sVar10);
        if (4 < local_88) {
          ppppppuVar13 = &local_98;
          if (0xf < local_80) {
            ppppppuVar13 = (undefined8 ******)local_98;
          }
          uVar8 = FUN_1402c82c0((longlong)ppppppuVar13 + 4);
        }
        ppppppuVar13 = &local_98;
        if (0xf < local_80) {
          ppppppuVar13 = (undefined8 ******)local_98;
        }
        iVar7 = FUN_1402c9e60(ppppppuVar13,"TEXI0001",4);
        if (iVar7 == 0) {
          bVar6 = FUN_14015c760(uVar8,&local_78,param_4);
        }
        else {
          ppppppuVar13 = &local_98;
          if (0xf < local_80) {
            ppppppuVar13 = (undefined8 ******)local_98;
          }
          iVar7 = FUN_1402c9e60(ppppppuVar13,"TEXB0004",4);
          if (iVar7 == 0) {
            iVar9 = FUN_14015c8d0(uVar8,&local_78,param_1,param_2,param_4,param_6,param_7);
            bVar6 = iVar9 != 2;
          }
          else {
            ppppppuVar13 = &local_98;
            if (0xf < local_80) {
              ppppppuVar13 = (undefined8 ******)local_98;
            }
            iVar7 = FUN_1402c9e60(ppppppuVar13,"TEXS0003",4);
            if (iVar7 != 0) {
              if (0xf < local_80) {
                uVar14 = local_80 + 1;
                ppppppuVar13 = (undefined8 ******)local_98;
                if (0xfff < uVar14) {
                  ppppppuVar13 = (undefined8 ******)local_98[-1];
                  if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppppuVar13)))
                  goto LAB_14015e9fb;
                  uVar14 = local_80 + 0x28;
                }
                thunk_FUN_14028af80(ppppppuVar13,uVar14);
              }
              break;
            }
            bVar6 = FUN_14015e1d0(uVar8,&local_78,param_4,param_6 + 0x28,param_5);
          }
        }
        if (0xf < local_80) {
          uVar14 = local_80 + 1;
          ppppppuVar13 = (undefined8 ******)local_98;
          if (0xfff < uVar14) {
            ppppppuVar13 = (undefined8 ******)local_98[-1];
            if (0x1f < (ulonglong)((longlong)local_98 + (-8 - (longlong)ppppppuVar13)))
            goto LAB_14015e9fb;
            uVar14 = local_80 + 0x28;
          }
          thunk_FUN_14028af80(ppppppuVar13,uVar14);
        }
        iVar7 = iVar9;
        if (((int)local_78 - (int)local_70) + local_68 == 0) break;
      }
    }
  }
  else {
    ppppppuVar13 = &local_58;
    if (0xf < local_40) {
      ppppppuVar13 = (undefined8 ******)pppppuVar5;
    }
    if ((lVar11 == 8) && (iVar7 = memcmp(ppppppuVar13,"TEXV0004",8), iVar7 == 0)) {
      FUN_14015c760(0,&local_78,param_4);
      FUN_14015c8d0(0,&local_78,param_1,0,param_4,param_6,param_7);
    }
    else {
      bVar6 = 0;
    }
  }
  plVar1 = *(longlong **)(param_6 + 0x28);
  if ((plVar1 != *(longlong **)(param_6 + 0x30)) &&
     ((ulonglong)((plVar1[1] - *plVar1 >> 3) * -0x3333333333333333) < 2)) {
    *(uint *)(param_4 + 4) = *(uint *)(param_4 + 4) | 8;
  }
  fVar4 = _UNK_140492dd4;
  fVar3 = _DAT_140492dd0;
  if (iVar9 == 1) {
    lVar11 = *(longlong *)(param_5 + 0x18);
    for (lVar12 = *(longlong *)(param_5 + 0x10); lVar12 != lVar11; lVar12 = lVar12 + 0x20) {
      *(ulonglong *)(lVar12 + 8) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar12 + 8) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(lVar12 + 8) * fVar3);
      *(ulonglong *)(lVar12 + 0x10) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar12 + 0x10) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(lVar12 + 0x10) * fVar3);
      *(ulonglong *)(lVar12 + 0x18) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar12 + 0x18) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(lVar12 + 0x18) * fVar3);
    }
  }
  if (0xf < local_40) {
    uVar14 = local_40 + 1;
    ppppppuVar13 = (undefined8 ******)pppppuVar5;
    if (0xfff < uVar14) {
      ppppppuVar13 = (undefined8 ******)pppppuVar5[-1];
      if (0x1f < (ulonglong)((longlong)pppppuVar5 + (-8 - (longlong)ppppppuVar13))) {
LAB_14015e9fb:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        uVar14 = (*pcVar2)();
        return uVar14;
      }
      uVar14 = local_40 + 0x28;
    }
    thunk_FUN_14028af80(ppppppuVar13,uVar14);
  }
  return (ulonglong)bVar6;
}

