// Function: FUN_140369bf0
// Addr: 140369bf0
// Size: 783 bytes


void FUN_140369bf0(char *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *local_68;
  char *pcStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar10 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar10 & 0xffffffffffffffe0) < 0x401) {
      puVar13 = (undefined8 *)param_1;
      if (param_1 != (char *)param_2) {
        while (puVar13 = puVar13 + 4, puVar13 != param_2) {
          uVar2 = puVar13[2];
          uVar1 = *(uint *)((longlong)param_1 + 0x10);
          uVar15 = (uint)uVar2;
          pcVar3 = (char *)puVar13[1];
          puVar4 = (undefined8 *)*puVar13;
          puVar14 = (uint *)&local_58;
          if (uVar1 < uVar15) {
            puVar14 = (uint *)((longlong)param_1 + 0x10);
          }
          uVar5 = puVar13[3];
          local_58 = uVar2;
          uStack_50 = uVar5;
          local_68 = puVar4;
          pcStack_60 = pcVar3;
          iVar9 = strncmp(pcVar3,*(char **)((longlong)param_1 + 8),(ulonglong)*puVar14);
          iVar11 = uVar15 - uVar1;
          if (iVar9 != 0) {
            iVar11 = iVar9;
          }
          puVar12 = puVar13;
          if (iVar11 < 0) {
            FUN_1404210f0((undefined8 *)((longlong)param_1 + 0x20),param_1,
                          (longlong)puVar13 - (longlong)param_1);
            *(undefined8 **)param_1 = puVar4;
            *(undefined8 *)((longlong)param_1 + 0x10) = uVar2;
            *(char **)((longlong)param_1 + 8) = pcVar3;
            *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
          }
          else {
            while( true ) {
              uVar1 = *(uint *)(puVar12 + -2);
              puVar14 = (uint *)&local_58;
              if (uVar1 < uVar15) {
                puVar14 = (uint *)(puVar12 + -2);
              }
              iVar9 = strncmp(pcVar3,(char *)puVar12[-3],(ulonglong)*puVar14);
              iVar11 = uVar15 - uVar1;
              if (iVar9 != 0) {
                iVar11 = iVar9;
              }
              if (-1 < iVar11) break;
              *puVar12 = puVar12[-4];
              puVar12[1] = puVar12[-3];
              puVar12[2] = puVar12[-2];
              puVar12[3] = puVar12[-1];
              puVar12 = puVar12 + -4;
            }
            *puVar12 = local_68;
            puVar12[1] = pcStack_60;
            puVar12[2] = local_58;
            puVar12[3] = uStack_50;
          }
        }
      }
      return;
    }
    uVar10 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    puVar4 = (undefined8 *)((longlong)param_1 + ((longlong)uVar10 >> 6) * 4 * 8);
    puVar13 = param_2 + -4;
    lVar16 = (longlong)puVar13 - (longlong)param_1 >> 5;
    puVar12 = (undefined8 *)param_1;
    if (0x28 < lVar16) {
      lVar16 = lVar16 + 1 >> 3;
      puVar12 = (undefined8 *)((longlong)param_1 + lVar16 * 4 * 8);
      FUN_140364f60(param_1,puVar12,(undefined8 *)((longlong)param_1 + lVar16 * 8 * 8),param_4);
      FUN_140364f60(puVar4 + lVar16 * -4,puVar4,puVar4 + lVar16 * 4,param_4);
      puVar13 = puVar13 + lVar16 * -4;
      FUN_140364f60(param_2 + -4 + lVar16 * -8,puVar13,param_2 + -4,param_4);
    }
    FUN_140364f60(puVar12,puVar4,puVar13,param_4);
    FUN_140366c80(&local_68,param_1,puVar4,param_2,param_4);
    pcVar3 = pcStack_60;
    puVar13 = local_68;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_68 - (longlong)param_1 & 0xffffffffffffffe0U) <
        (longlong)((longlong)param_2 - (longlong)pcStack_60 & 0xffffffffffffffe0U)) {
      FUN_140369bf0(param_1,local_68,param_3,param_4);
      param_1 = pcVar3;
      puVar13 = param_2;
    }
    else {
      FUN_140369bf0(pcStack_60,param_2,param_3,param_4);
    }
    uVar10 = (longlong)puVar13 - (longlong)param_1;
    param_2 = puVar13;
  }
  FUN_140364030(param_1,param_2,param_4);
  while (0x3f < (longlong)(uVar10 & 0xffffffffffffffe0)) {
    puVar13 = param_2 + -4;
    if (0x3f < (longlong)((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0U)) {
      local_68 = (undefined8 *)*puVar13;
      pcStack_60 = (char *)param_2[-3];
      local_58 = param_2[-2];
      uStack_50 = param_2[-1];
      uVar6 = *(undefined4 *)((longlong)param_1 + 4);
      uVar7 = *(undefined4 *)((longlong)param_1 + 8);
      uVar8 = *(undefined4 *)((longlong)param_1 + 0xc);
      *(undefined4 *)puVar13 = *(undefined4 *)param_1;
      *(undefined4 *)((longlong)param_2 + -0x1c) = uVar6;
      *(undefined4 *)(param_2 + -3) = uVar7;
      *(undefined4 *)((longlong)param_2 + -0x14) = uVar8;
      uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
      uVar7 = *(undefined4 *)((longlong)param_1 + 0x18);
      uVar8 = *(undefined4 *)((longlong)param_1 + 0x1c);
      *(undefined4 *)(param_2 + -2) = *(undefined4 *)((longlong)param_1 + 0x10);
      *(undefined4 *)((longlong)param_2 + -0xc) = uVar6;
      *(undefined4 *)(param_2 + -1) = uVar7;
      *(undefined4 *)((longlong)param_2 + -4) = uVar8;
      FUN_140368270(param_1,0,(longlong)puVar13 - (longlong)param_1 >> 5,&local_68,param_4);
    }
    param_2 = puVar13;
    uVar10 = (longlong)puVar13 - (longlong)param_1;
  }
  return;
}

