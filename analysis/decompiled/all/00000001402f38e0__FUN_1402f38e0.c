// Function: FUN_1402f38e0
// Addr: 1402f38e0
// Size: 1389 bytes


ulonglong FUN_1402f38e0(longlong *param_1,longlong *param_2,uint param_3,int param_4,int param_5,
                       char param_6,longlong *param_7,uint *param_8)

{
  undefined2 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  short sVar9;
  undefined2 uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  short sVar17;
  code *pcVar18;
  bool bVar19;
  undefined1 local_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 local_44 [12];
  
  lVar2 = *param_1;
  if ((code *)param_2[4] == (code *)0x0) {
    bVar19 = *(uint *)(param_2 + 1) < param_3;
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,(ulonglong)param_3,0);
    bVar19 = iVar3 != 0;
  }
  if ((-(uint)bVar19 & 0x55) != 0) {
    return (ulonglong)(-(uint)bVar19 & 0x55);
  }
  *(uint *)((longlong)param_2 + 0xc) = param_3;
  if (*(uint *)(param_2 + 1) <= param_3 + 1) {
    return 0x55;
  }
  if ((code *)param_2[4] == (code *)0x0) {
    sVar9 = 0;
    puVar11 = (undefined1 *)(*param_2 + (ulonglong)param_3);
    uVar12 = param_3;
    if (puVar11 == (undefined1 *)0x0) goto LAB_1402f3988;
  }
  else {
    iVar3 = (*(code *)param_2[4])(param_2,param_3,local_58);
    if (iVar3 != 2) {
      return 0x55;
    }
    puVar11 = local_58;
    uVar12 = *(uint *)((longlong)param_2 + 0xc);
  }
  sVar9 = CONCAT11(*puVar11,puVar11[1]);
LAB_1402f3988:
  uVar12 = uVar12 + 2;
  iVar3 = sVar9 + 1;
  *(uint *)((longlong)param_2 + 0xc) = uVar12;
  if (0xfef < iVar3) {
    return 8;
  }
  iVar15 = 0;
  if (0 < iVar3) {
    do {
      uVar16 = *(uint *)(param_2 + 1);
      if (uVar16 <= uVar12 + 3) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar11 = (undefined1 *)((ulonglong)uVar12 + *param_2);
        if (puVar11 != (undefined1 *)0x0) goto LAB_1402f3a17;
        iVar4 = 0;
      }
      else {
        iVar4 = (*(code *)param_2[4])(param_2,(ulonglong)uVar12,local_48);
        if (iVar4 != 4) {
          return 0x55;
        }
        uVar12 = *(uint *)((longlong)param_2 + 0xc);
        puVar11 = local_48;
        uVar16 = *(uint *)(param_2 + 1);
LAB_1402f3a17:
        iVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar11,puVar11[1]),puVar11[2]),puVar11[3]);
      }
      uVar13 = uVar12 + 4;
      *(uint *)((longlong)param_2 + 0xc) = uVar13;
      if (uVar16 <= uVar12 + 5) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        puVar11 = (undefined1 *)(*param_2 + (ulonglong)uVar13);
        if (puVar11 == (undefined1 *)0x0) {
          sVar9 = 0;
        }
        else {
          sVar9 = CONCAT11(*puVar11,puVar11[1]);
        }
      }
      else {
        iVar5 = (*(code *)param_2[4])(param_2,uVar13,&local_54);
        if (iVar5 != 2) {
          return 0x55;
        }
        uVar13 = *(uint *)((longlong)param_2 + 0xc);
        uVar16 = *(uint *)(param_2 + 1);
        sVar9 = CONCAT11(local_54,local_53);
      }
      uVar12 = uVar13 + 2;
      *(uint *)((longlong)param_2 + 0xc) = uVar12;
      if (uVar16 <= uVar13 + 3) {
        return 0x55;
      }
      if ((code *)param_2[4] == (code *)0x0) {
        sVar17 = 0;
        puVar11 = (undefined1 *)(*param_2 + (ulonglong)uVar12);
        if (puVar11 != (undefined1 *)0x0) goto LAB_1402f3af0;
      }
      else {
        iVar5 = (*(code *)param_2[4])(param_2,uVar12,local_50);
        if (iVar5 != 2) {
          return 0x55;
        }
        uVar12 = *(uint *)((longlong)param_2 + 0xc);
        puVar11 = local_50;
LAB_1402f3af0:
        sVar17 = CONCAT11(*puVar11,puVar11[1]);
      }
      uVar12 = uVar12 + 2;
      *(uint *)((longlong)param_2 + 0xc) = uVar12;
      if (iVar4 == param_5) {
        *param_8 = (int)sVar9 + 1;
        if (0xaa6 < (uint)(int)sVar9) {
          return 8;
        }
        uVar6 = FUN_1402f5c50(param_2,(int)sVar17 + param_3);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        uVar12 = *param_8;
        if ((int)uVar12 < 0) {
          return 6;
        }
        if (uVar12 == 0) {
          lVar7 = 0;
        }
        else {
          if (0xfffffff < (int)uVar12) {
            return 10;
          }
          lVar7 = (**(code **)(lVar2 + 8))(lVar2,uVar12 * 8);
          if (lVar7 == 0) {
            return 0x40;
          }
        }
        uVar12 = *param_8;
        iVar3 = 0;
        if (0 < (int)uVar12) goto LAB_1402f3bd0;
        goto LAB_1402f3d32;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar3);
  }
  return 1;
LAB_1402f3bd0:
  do {
    uVar12 = *(uint *)((longlong)param_2 + 0xc);
    if (*(uint *)(param_2 + 1) <= uVar12 + 1) {
LAB_1402f3d78:
      *(undefined2 *)(lVar7 + (longlong)iVar3 * 8) = 0;
LAB_1402f3d82:
      uVar6 = 0x55;
      goto LAB_1402f3dfc;
    }
    if ((code *)param_2[4] == (code *)0x0) {
      uVar10 = 0;
      puVar11 = (undefined1 *)(*param_2 + (ulonglong)uVar12);
      if (puVar11 != (undefined1 *)0x0) goto LAB_1402f3c1a;
    }
    else {
      iVar15 = (*(code *)param_2[4])(param_2,uVar12);
      if (iVar15 != 2) goto LAB_1402f3d78;
      uVar12 = *(uint *)((longlong)param_2 + 0xc);
      puVar11 = local_4c;
LAB_1402f3c1a:
      uVar10 = CONCAT11(*puVar11,puVar11[1]);
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar12 + 2;
    puVar1 = (undefined2 *)(lVar7 + (longlong)iVar3 * 8);
    *puVar1 = uVar10;
    iVar15 = *(int *)((longlong)param_2 + 0xc);
    uVar12 = iVar15 + 2;
    if ((code *)param_2[4] == (code *)0x0) {
      bVar19 = *(uint *)(param_2 + 1) < uVar12;
    }
    else {
      iVar4 = (*(code *)param_2[4])(param_2,uVar12);
      bVar19 = iVar4 != 0;
    }
    uVar6 = (ulonglong)(-(uint)bVar19 & 0x55);
    if ((-(uint)bVar19 & 0x55) != 0) goto LAB_1402f3dfc;
    *(uint *)((longlong)param_2 + 0xc) = uVar12;
    if (*(uint *)(param_2 + 1) <= iVar15 + 5U) goto LAB_1402f3d82;
    if ((code *)param_2[4] == (code *)0x0) {
      puVar11 = (undefined1 *)(*param_2 + (ulonglong)uVar12);
      pcVar18 = (code *)0x0;
      if (puVar11 != (undefined1 *)0x0) goto LAB_1402f3cbc;
      uVar16 = 0;
    }
    else {
      iVar15 = (*(code *)param_2[4])(param_2,uVar12);
      if (iVar15 != 4) goto LAB_1402f3d82;
      uVar12 = *(uint *)((longlong)param_2 + 0xc);
      puVar11 = local_44;
      pcVar18 = (code *)param_2[4];
LAB_1402f3cbc:
      uVar16 = (uint)CONCAT21(CONCAT11(puVar11[1],puVar11[2]),puVar11[3]);
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar12 + 4;
    uVar12 = uVar12 + 8;
    if (pcVar18 == (code *)0x0) {
      bVar19 = *(uint *)(param_2 + 1) < uVar12;
    }
    else {
      iVar15 = (*pcVar18)(param_2,uVar12);
      bVar19 = iVar15 != 0;
    }
    uVar6 = (ulonglong)(-(uint)bVar19 & 0x55);
    if ((-(uint)bVar19 & 0x55) != 0) goto LAB_1402f3dfc;
    *(uint *)((longlong)param_2 + 0xc) = uVar12;
    iVar3 = iVar3 + 1;
    *(uint *)(puVar1 + 2) = uVar16;
    uVar12 = *param_8;
  } while (iVar3 < (int)uVar12);
LAB_1402f3d32:
  if (param_6 == '\0') {
LAB_1402f3d5c:
    if ((int)uVar12 < 0) {
      uVar6 = 6;
      goto LAB_1402f3dfc;
    }
    if (uVar12 != 0) goto LAB_1402f3d66;
    lVar8 = 0;
  }
  else {
    FUN_1402ea670(lVar7,(longlong)(int)uVar12);
    uVar12 = *param_8;
    if ((int)uVar12 < 1) goto LAB_1402f3d5c;
LAB_1402f3d66:
    if (0x1fffffff < uVar12) {
      uVar6 = 10;
      goto LAB_1402f3dfc;
    }
    lVar8 = (**(code **)(lVar2 + 8))(lVar2,uVar12 * 4);
    uVar6 = 0x40;
    if (lVar8 == 0) goto LAB_1402f3dfc;
  }
  iVar3 = 0;
  if (0 < (int)*param_8) {
    do {
      lVar14 = (longlong)iVar3;
      iVar3 = iVar3 + 1;
      *(int *)(lVar8 + lVar14 * 4) = *(int *)(lVar7 + 4 + lVar14 * 8) + param_4;
    } while (iVar3 < (int)*param_8);
  }
  uVar6 = 0;
  *param_7 = lVar8;
LAB_1402f3dfc:
  if (lVar7 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,lVar7);
  }
  return uVar6;
}

