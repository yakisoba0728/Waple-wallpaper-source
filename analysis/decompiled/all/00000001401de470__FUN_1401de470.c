// Function: FUN_1401de470
// Addr: 1401de470
// Size: 719 bytes


void FUN_1401de470(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  bool bVar20;
  
  FUN_1401730d0(*(longlong *)(param_1 + 200) + 0x1708,param_1,param_2);
  lVar8 = FUN_140087490(param_2,"parent","");
  if (lVar8 == 0) {
    plVar14 = (longlong *)(param_1 + 0x180);
    lVar8 = *plVar14;
    if (lVar8 != 0) {
      lVar10 = thunk_FUN_14028d250(*(undefined8 *)(lVar8 + 0x198),*(undefined8 *)(lVar8 + 0x1a0),
                                   param_1);
      lVar8 = *plVar14;
      lVar4 = *(longlong *)(lVar8 + 0x1a0);
      if (lVar10 != lVar4) {
        FUN_1404210f0(lVar10,lVar10 + 8,lVar4 - (lVar10 + 8));
        plVar16 = (longlong *)(lVar8 + 0x1a0);
        *plVar16 = *plVar16 + -8;
        (**(code **)(*(longlong *)*plVar14 + 0xa0))();
      }
      *(undefined4 *)(param_1 + 400) = 0xffffffff;
LAB_1401de678:
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
  }
  else {
    lVar8 = FUN_140086de0(param_2,"parent","");
    if (*(byte *)(lVar8 + 8) - 1 < 3) {
      uVar18 = FUN_140086de0(param_2,"parent","");
      uVar18 = FUN_140086000(uVar18);
      *(undefined8 *)(param_1 + 0x188) = uVar18;
      plVar14 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1510);
      lVar8 = (**(code **)(*plVar14 + 8))(plVar14,uVar18);
      *(longlong *)(param_1 + 0x180) = lVar8;
      if (lVar8 != 0) {
        uVar12 = 0;
        if (param_1 != lVar8) {
          do {
            pbVar1 = (byte *)(lVar8 + 0x120);
            lVar8 = *(longlong *)(lVar8 + 0x180);
            uVar5 = (uint)uVar12 + 1;
            if ((*pbVar1 & 4) == 0) {
              uVar5 = (uint)uVar12;
            }
            uVar12 = (ulonglong)uVar5;
          } while (lVar8 != 0);
          bVar20 = (*(byte *)(param_1 + 0x120) & 4) != 0;
          puVar19 = *(undefined8 **)(param_1 + 0x1a0);
          puVar15 = *(undefined8 **)(param_1 + 0x198);
          uVar13 = (ulonglong)bVar20;
          uVar11 = (uint)bVar20;
          uVar17 = uVar13;
          if (puVar15 != puVar19) {
            do {
              iVar6 = FUN_1401ddb50(*puVar15);
              uVar5 = (uint)uVar12;
              uVar11 = iVar6 + (int)uVar17;
              iVar6 = (int)uVar13;
              uVar13 = uVar13 & 0xffffffff;
              if (iVar6 < (int)uVar11) {
                uVar13 = (ulonglong)uVar11;
              }
              uVar11 = (uint)uVar13;
              puVar15 = puVar15 + 1;
            } while (puVar15 != puVar19);
          }
          if ((int)(uVar11 + uVar5) < 4) {
            puVar9 = (ulonglong *)FUN_140086de0(param_2,"attachment","");
            if ((char)(uint)puVar9[1] == '\x04') {
              plVar14 = *(longlong **)(param_1 + 0x180);
              uVar17 = *puVar9;
              uVar12 = 0;
              if ((uVar17 != 0) && (uVar12 = uVar17, ((uint)puVar9[1] >> 8 & 1) != 0)) {
                uVar12 = uVar17 + 4;
              }
              uVar7 = (**(code **)(*plVar14 + 0x70))(plVar14,uVar12);
              *(undefined4 *)(param_1 + 400) = uVar7;
            }
            FUN_1401dda60(param_1);
            goto LAB_1401de67b;
          }
        }
        *(undefined8 *)(param_1 + 0x188) = 0;
        goto LAB_1401de678;
      }
    }
  }
LAB_1401de67b:
  uVar18 = 0xfffd;
  if ((*(longlong *)(param_1 + 0x180) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x120) & 6) == 0)) {
    uVar3 = *(ushort *)(param_1 + 0x120);
    *(ushort *)(param_1 + 0x120) = uVar3 & 0xfffd;
    if ((uVar3 & 4) == 0) {
      bVar20 = false;
      goto LAB_1401de6ab;
    }
  }
  else {
    *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) | 2;
  }
  bVar20 = true;
LAB_1401de6ab:
  plVar14 = *(longlong **)(param_1 + 0x198);
  plVar16 = *(longlong **)(param_1 + 0x1a0);
  if (plVar14 != plVar16) {
    if (bVar20) {
      do {
        lVar8 = *plVar14;
        puVar2 = (ushort *)(lVar8 + 0x120);
        *puVar2 = *puVar2 | 2;
        FUN_1401dd900(lVar8,1);
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar16);
      return;
    }
    do {
      lVar8 = *plVar14;
      uVar3 = *(ushort *)(lVar8 + 0x120);
      *(ushort *)(lVar8 + 0x120) = uVar3 & (ushort)uVar18;
      FUN_1401dd900(lVar8,CONCAT11((char)(uVar3 >> 8),(uVar3 & 4) != 0));
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar16);
  }
  return;
}

