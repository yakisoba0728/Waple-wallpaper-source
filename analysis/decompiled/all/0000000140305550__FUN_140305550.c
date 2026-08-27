// Function: FUN_140305550
// Addr: 140305550
// Size: 1040 bytes


int FUN_140305550(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  short sVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  longlong lVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  int local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  
  plVar9 = (longlong *)param_2[6];
  lVar20 = *plVar9;
  uVar22 = *(undefined8 *)(lVar20 + 0x98);
  local_50 = *(undefined8 *)(lVar20 + 0x88);
  local_60 = uVar22;
  local_58 = lVar20;
  local_res10[0] = FUN_1402f6cf0(lVar20);
  if (local_res10[0] == 0) {
    *param_1 = 0;
    lVar13 = FUN_1402f7fa0(uVar22,0x28,local_res10);
    *param_1 = lVar13;
    if ((local_res10[0] == 0) &&
       (local_res10[0] = FUN_1402f7650(lVar13,uVar22), local_res10[0] == 0)) {
      uVar18 = 0;
      do {
        uVar7 = (&DAT_1404dcf90)[uVar18 * 2];
        iVar12 = FUN_1402f0060(lVar20,uVar7);
        if ((iVar12 != 0) &&
           (local_res10[0] = FUN_1402f76e0(iVar12,uVar7,*param_1,uVar22), local_res10[0] != 0))
        goto LAB_1403058f5;
        uVar18 = uVar18 + 1;
      } while (uVar18 < 0x3a7);
      local_80 = 0;
      local_84 = 1;
      uVar14 = FUN_140416410(plVar9[3]);
      uVar15 = FUN_140418e30();
      local_78 = uVar15;
      FUN_140417f00(*(undefined4 *)
                     ("mldAbarAnmrAtsvAumaBgneBdhuBmkaCsnaCiraCrehCtpoCtrpClryCaveDtrsDihtEroeG" +
                     (longlong)*(int *)(*param_2 + 8) * 4),0,&local_84,&local_80,0,0);
      FUN_1404172a0(uVar14,0x47535542,&local_80,0,0,uVar15);
      uVar14 = FUN_1402f7fa0(uVar22,0x28,local_res10);
      if ((local_res10[0] == 0) &&
         (local_res10[0] = FUN_1402f7650(uVar14,uVar22), local_res10[0] == 0)) {
        local_res18[0] = 0xffffffff;
        iVar12 = FUN_140418f50(local_78,local_res18);
        while (iVar12 != 0) {
          if ((local_res18[0] < *(ushort *)(plVar9 + 6)) &&
             (uVar8 = *(uint *)(plVar9[7] + (ulonglong)local_res18[0] * 4), uVar8 != 0)) {
            puVar21 = (undefined1 *)((ulonglong)uVar8 + plVar9[5]);
            uVar22 = *(undefined8 *)(*plVar9 + 0x98);
            uVar3 = *puVar21;
            uVar4 = puVar21[1];
            uVar5 = puVar21[4];
            uVar6 = puVar21[5];
            puVar10 = puVar21 + 6;
            do {
              if (puVar21 + 6 + (ulonglong)CONCAT11(uVar5,uVar6) * 2 <= puVar10) break;
              puVar19 = puVar21 + CONCAT11(*puVar10,puVar10[1]);
              sVar17 = CONCAT11(uVar3,uVar4);
              if (CONCAT11(uVar3,uVar4) == 7) {
                puVar1 = puVar19 + 3;
                puVar2 = puVar19 + 2;
                puVar19 = puVar19 + CONCAT31(CONCAT21(CONCAT11(puVar19[4],puVar19[5]),puVar19[6]),
                                             puVar19[7]);
                sVar17 = CONCAT11(*puVar2,*puVar1);
              }
              if (sVar17 == 1) {
                if (CONCAT11(*puVar19,puVar19[1]) == 1) {
                  iVar12 = FUN_140304f50();
                }
                else {
                  iVar12 = FUN_1403050e0(uVar14);
                }
              }
              else {
                iVar12 = FUN_140304d30(uVar14,puVar19,uVar22);
              }
              puVar10 = puVar10 + 2;
            } while (iVar12 == 0);
          }
          iVar12 = FUN_140418f50(local_78,local_res18);
          lVar20 = local_58;
          uVar22 = local_60;
        }
        local_88 = 0;
        cVar11 = FUN_1402f7720(&local_88,local_res20,local_70,uVar14);
        while ((cVar11 != '\0' &&
               ((((local_res20[0] & 0xffff0000) != 0 ||
                 (puVar16 = (undefined4 *)FUN_1402f7790(local_res20[0],*param_1),
                 puVar16 == (undefined4 *)0x0)) ||
                (local_res10[0] =
                      FUN_1402fc9a0(local_res20[0],local_70[0],*puVar16,*param_1,uVar14,uVar22),
                local_res10[0] == 0))))) {
          cVar11 = FUN_1402f7720(&local_88,local_res20,local_70,uVar14);
        }
      }
      FUN_140418ec0(local_78);
      FUN_1402f77c0(uVar14,uVar22);
      FUN_1402f7f90(uVar22,uVar14);
    }
  }
LAB_1403058f5:
  *(undefined8 *)(lVar20 + 0x88) = local_50;
  if (local_res10[0] != 0) {
    if (*param_1 != 0) {
      FUN_1402f77c0(*param_1,uVar22);
    }
    FUN_1402f7f90(uVar22,*param_1);
    *param_1 = 0;
    return local_res10[0];
  }
  return 0;
}

