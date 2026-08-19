// Function: FUN_1402f2870
// Addr: 1402f2870
// Size: 787 bytes


undefined8 FUN_1402f2870(ushort *param_1,undefined8 *param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int local_res20;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  int iStack_78;
  int iStack_74;
  undefined4 local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  
  if (param_1 == (ushort *)0x0) {
    return 0x14;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  local_70 = *(undefined4 *)(param_2 + 4);
  iVar2 = *(int *)((longlong)param_2 + 0x24);
  local_88 = 0xffffffff;
  local_res20 = 0;
  if (*param_1 == 0) {
    return 0;
  }
  do {
    lVar12 = (longlong)(int)local_88;
    iVar5 = local_88 + 1;
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc) + (longlong)local_res20 * 2);
    local_88 = (uint)uVar1;
    if ((int)local_88 < iVar5) {
      return 0x14;
    }
    lVar3 = *(longlong *)(param_1 + 4);
    piVar16 = (int *)(lVar3 + (ulonglong)uVar1 * 8);
    lVar12 = lVar12 + 1;
    uVar4 = *(undefined8 *)(lVar3 + lVar12 * 8);
    piVar7 = (int *)(lVar3 + lVar12 * 8);
    pbVar10 = (byte *)(*(longlong *)(param_1 + 8) + lVar12);
    iVar9 = 1 << ((byte)local_70 & 0x1f);
    local_98._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
    iVar13 = (int)uVar4 * iVar9 - iVar2;
    iVar14 = iVar9 * local_98._4_4_ - iVar2;
    local_98 = CONCAT44(iVar14,iVar13);
    local_80._4_4_ = (int)((ulonglong)*(undefined8 *)piVar16 >> 0x20);
    local_90 = local_98;
    iVar15 = iVar9 * local_80._4_4_ - iVar2;
    iVar5 = (int)*(undefined8 *)piVar16 * iVar9 - iVar2;
    local_80 = CONCAT44(iVar15,iVar5);
    if ((*pbVar10 & 3) == 2) {
      return 0x14;
    }
    if ((*pbVar10 & 3) == 0) {
      if ((*(byte *)(*(longlong *)(param_1 + 8) + (longlong)(int)local_88) & 3) == 1) {
        piVar16 = piVar16 + -2;
        local_98 = local_80;
      }
      else {
        local_98 = CONCAT44((iVar15 + iVar14) / 2,(iVar13 + iVar5) / 2);
      }
      piVar7 = piVar7 + -2;
      pbVar10 = pbVar10 + -1;
    }
    uVar4 = (*(code *)*param_2)(&local_98,param_3);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    while (piVar7 < piVar16) {
      pbVar11 = pbVar10 + 1;
      piVar8 = piVar7 + 2;
      if ((pbVar10[1] & 3) == 0) {
        iVar5 = iVar9 * *piVar8 - iVar2;
        iVar13 = iVar9 * piVar7[3] - iVar2;
        local_90 = CONCAT44(iVar13,iVar5);
        piVar7 = piVar8;
        while( true ) {
          if (piVar16 <= piVar7) {
            uVar4 = (*(code *)param_2[2])(&local_90,&local_98,param_3);
            goto LAB_1402f2b94;
          }
          pbVar10 = pbVar11 + 1;
          piVar8 = piVar7 + 2;
          pbVar11 = pbVar11 + 1;
          iStack_78 = iVar9 * *piVar8 - iVar2;
          iStack_74 = iVar9 * piVar7[3] - iVar2;
          if ((*pbVar10 & 3) == 1) break;
          if ((*pbVar10 & 3) != 0) {
            return 0x14;
          }
          iStack_48 = (iStack_78 + iVar5) / 2;
          iStack_44 = (iStack_74 + iVar13) / 2;
          uVar4 = (*(code *)param_2[2])(&local_90,&iStack_48,param_3);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          local_90 = CONCAT44(iStack_74,iStack_78);
          piVar7 = piVar8;
          iVar5 = iStack_78;
          iVar13 = iStack_74;
        }
        uVar4 = (*(code *)param_2[2])(&local_90,&iStack_78,param_3);
LAB_1402f2b7c:
        piVar7 = piVar8;
        pbVar10 = pbVar11;
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      else {
        if ((pbVar10[1] & 3) == 1) {
          local_50 = iVar9 * *piVar8 - iVar2;
          local_4c = iVar9 * piVar7[3] - iVar2;
          uVar4 = (*(code *)param_2[1])(&local_50,param_3);
          goto LAB_1402f2b7c;
        }
        if (piVar16 < piVar7 + 4) {
          return 0x14;
        }
        if ((pbVar10[2] & 3) != 2) {
          return 0x14;
        }
        piVar6 = piVar7 + 6;
        local_60 = iVar9 * *piVar8 - iVar2;
        local_5c = iVar9 * piVar7[3] - iVar2;
        local_68 = iVar9 * piVar7[4] - iVar2;
        local_64 = iVar9 * piVar7[5] - iVar2;
        if (piVar16 < piVar6) {
          uVar4 = (*(code *)param_2[3])(&local_60,&local_68,&local_98,param_3);
          goto LAB_1402f2b94;
        }
        local_58 = iVar9 * *piVar6 - iVar2;
        local_54 = iVar9 * piVar7[7] - iVar2;
        uVar4 = (*(code *)param_2[3])(&local_60,&local_68,&local_58);
        if ((int)uVar4 != 0) {
          return uVar4;
        }
        piVar7 = piVar6;
        pbVar10 = pbVar10 + 3;
      }
    }
    uVar4 = (*(code *)param_2[1])(&local_98,param_3);
LAB_1402f2b94:
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    local_res20 = local_res20 + 1;
    if ((int)(uint)*param_1 <= local_res20) {
      return 0;
    }
  } while( true );
}

