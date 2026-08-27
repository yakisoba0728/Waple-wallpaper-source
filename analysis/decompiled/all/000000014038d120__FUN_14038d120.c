// Function: FUN_14038d120
// Addr: 14038d120
// Size: 742 bytes


undefined8 FUN_14038d120(short *param_1,longlong param_2,undefined8 *param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  short local_res20;
  undefined8 local_88;
  ushort *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  lVar6 = FUN_140386d60(param_2,param_1);
  if (lVar6 != 0) {
    uVar15 = *(uint *)(param_3 + 6);
    puVar13 = (ushort *)param_3[1];
    iVar12 = *(int *)(param_3 + 2);
    lVar6 = param_3[5];
    puVar16 = param_3;
    if (param_3 == (undefined8 *)0xffffffffffffffe7) {
      puVar16 = (undefined8 *)0x0;
    }
    uVar11 = uVar15;
    if (*(uint *)(puVar16 + 2) <= uVar15) {
      uVar11 = *(uint *)(puVar16 + 2);
    }
    iVar14 = 0;
    uVar10 = 0;
    bVar2 = false;
    FUN_1403bee50(param_3,&local_88);
    uVar17 = 0xfffffffe;
    while (((puVar13 != puStack_80 || (iVar12 != (int)local_78)) &&
           ((lVar6 != CONCAT44(uStack_5c,uStack_60) || (uVar15 != local_58))))) {
      if (uVar15 == 0) {
        DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
      }
      if (iVar12 == 0) {
        DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
        uVar1 = (ushort)DAT_14045dd10;
      }
      else {
        uVar1 = *puVar13;
      }
      if ((uVar17 != 0xfffffffe) && ((uVar1 & 0xff) * 0x100 + (uint)(uVar1 >> 8) < uVar17)) {
        bVar2 = true;
      }
      uVar8 = (uVar1 & 0xff) * 0x100 + (uint)(uVar1 >> 8);
      iVar3 = iVar14 + 1;
      if (uVar17 + 1 == uVar8) {
        iVar3 = iVar14;
      }
      iVar14 = iVar3;
      uVar17 = uVar8;
      if (uVar8 <= uVar10) {
        uVar17 = uVar10;
      }
      uVar10 = uVar17;
      if (iVar12 != 0) {
        iVar12 = iVar12 + -1;
        puVar13 = puVar13 + 1;
      }
      uVar17 = uVar8;
      if (uVar15 != 0) {
        uVar15 = uVar15 - 1;
        lVar6 = lVar6 + 2;
      }
    }
    if ((bVar2) || (bVar4 = 1, (uint)(iVar14 * 3) < uVar11)) {
      bVar4 = 2;
    }
    local_res20 = (ushort)bVar4 << 8;
    *param_1 = local_res20;
    if (uVar10 < 0x10000) {
      if (bVar4 == 1) {
        uVar15 = *(uint *)(param_3 + 2);
        uVar11 = *(uint *)(param_3 + 6);
        puVar13 = (ushort *)param_3[1];
        uVar17 = uVar11;
        if (uVar15 <= uVar11) {
          uVar17 = uVar15;
        }
        cVar5 = FUN_14040a460(param_1 + 1,param_2,uVar17,0);
        if (cVar5 != '\0') {
          if (uVar17 != 0) {
            uVar9 = 0;
            uVar10 = uVar11;
            do {
              if (uVar10 == 0) {
                DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
              }
              if (uVar15 == 0) {
                DAT_1404e4f20._0_2_ = (ushort)DAT_14045dd10;
                uVar1 = (ushort)DAT_14045dd10;
              }
              else {
                uVar1 = *puVar13;
              }
              param_1[uVar9 + 2] = uVar1;
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
              if (uVar15 != 0) {
                uVar15 = uVar15 - 1;
                puVar13 = puVar13 + 1;
              }
              if (uVar11 == 0) {
                uVar10 = 0;
              }
              else {
                uVar11 = uVar11 - 1;
                uVar10 = uVar11;
              }
            } while (uVar8 < uVar17);
          }
          return 1;
        }
      }
      else if (bVar4 == 2) {
        local_88 = *param_3;
        puStack_80 = (ushort *)param_3[1];
        local_78 = param_3[2];
        uStack_70 = param_3[3];
        local_68 = *(undefined4 *)(param_3 + 4);
        uStack_64 = *(undefined4 *)((longlong)param_3 + 0x24);
        uStack_60 = *(undefined4 *)(param_3 + 5);
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x2c);
        local_58 = *(uint *)(param_3 + 6);
        uStack_54 = *(undefined4 *)((longlong)param_3 + 0x34);
        uStack_50 = *(undefined4 *)(param_3 + 7);
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0x3c);
        uVar7 = FUN_14038ce60(param_1,param_2,&local_88);
        return uVar7;
      }
    }
    else if (*(int *)(param_2 + 0x2c) == 0) {
      *(undefined4 *)(param_2 + 0x2c) = 8;
    }
  }
  return 0;
}

