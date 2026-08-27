// Function: FUN_140346990
// Addr: 140346990
// Size: 737 bytes


int FUN_140346990(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  ulonglong uVar16;
  int local_res8 [2];
  uint local_res18 [4];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x4e8);
  lVar3 = *(longlong *)(lVar2 + 8);
  if (*(ushort *)(lVar2 + 2) == 0) {
LAB_140346bd7:
    iVar7 = 8;
  }
  else {
    if (CONCAT11(*(undefined1 *)(lVar3 + 2),*(undefined1 *)(lVar3 + 3)) <= param_2) {
      uVar15 = *(ushort *)(lVar2 + 2) - 1;
      lVar12 = (ulonglong)(uVar15 * 0xc) + lVar3;
      if ((param_2 < CONCAT11(*(undefined1 *)(lVar12 + 2),*(undefined1 *)(lVar12 + 3))) ||
         (param_2 <= CONCAT11(*(undefined1 *)(lVar12 + 4),*(undefined1 *)(lVar12 + 5)))) {
        uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
        uVar13 = 0;
        do {
          uVar11 = uVar15 + uVar13 >> 1;
          uVar6 = uVar11 * 0xc;
          uVar16 = (ulonglong)uVar6;
          uVar9 = CONCAT11(*(undefined1 *)((ulonglong)uVar6 + 2 + lVar3),
                           *(undefined1 *)(lVar3 + 3 + (ulonglong)uVar6));
          if (param_2 < uVar9) {
            uVar15 = uVar11 - 1;
          }
          else {
            uVar10 = CONCAT11(*(undefined1 *)(lVar3 + 4 + uVar16),
                              *(undefined1 *)(lVar3 + 5 + uVar16));
            uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 6 + uVar16),
                                               *(undefined1 *)(lVar3 + 7 + uVar16)),
                                      *(undefined1 *)(uVar16 + 8 + lVar3)),
                             *(undefined1 *)(lVar3 + 9 + uVar16));
            uVar13 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar16 + 10 + lVar3),
                                                *(undefined1 *)(uVar16 + 0xb + lVar3)),
                                       *(undefined1 *)(lVar3 + 0xc + uVar16)),
                              *(undefined1 *)(uVar16 + 0xd + lVar3));
            if (param_2 <= uVar10) {
              local_res8[0] = 0;
              goto LAB_140346af1;
            }
            uVar13 = uVar11 + 1;
          }
        } while (uVar13 <= uVar15);
        local_res8[0]._0_2_ = 0;
        uVar13 = 0;
        uVar6 = 0;
        uVar9 = (ushort)local_res8[0];
        uVar10 = (ushort)local_res8[0];
        local_res8[0] = 0x10;
LAB_140346af1:
        if (local_res8[0] != 0) {
          return local_res8[0];
        }
        uVar15 = (*(int *)(lVar2 + 0x18) + *(int *)(lVar2 + 0x10)) - (int)lVar3;
        if ((uVar6 <= uVar15) && (uVar13 <= uVar15 - uVar6)) {
          puVar5 = *(undefined8 **)(param_1 + 0xe8);
          pcVar14 = (char *)(lVar3 + (ulonglong)uVar6);
          pcVar8 = pcVar14;
          local_res18[0] = uVar13;
          if ((uVar13 < 7) ||
             (((*pcVar14 != '\x1f' || (pcVar14[1] != -0x75)) || (pcVar14[2] != '\b')))) {
LAB_140346c09:
            *puVar5 = pcVar8;
            *(uint *)(puVar5 + 1) = local_res18[0];
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x80);
            uVar4 = *(undefined8 *)(lVar2 + 0x20);
            *(undefined8 *)((longlong)puVar5 + 0xc) = *(undefined8 *)(lVar2 + 0x18);
            *(undefined8 *)((longlong)puVar5 + 0x14) = uVar4;
            uVar4 = *(undefined8 *)(lVar2 + 0x2c);
            puVar5[3] = *(undefined8 *)(lVar2 + 0x24);
            puVar5[4] = uVar4;
            *(undefined2 *)(puVar5 + 5) = *(undefined2 *)(*(longlong *)(param_1 + 8) + 0x68);
            *(ushort *)((longlong)puVar5 + 0x2a) = uVar9;
            *(ushort *)((longlong)puVar5 + 0x2c) = uVar10;
            puVar5[6] = 0x10000;
            *(undefined4 *)(puVar5 + 7) = 0;
            *(undefined8 *)((longlong)puVar5 + 0x3c) = 0x10000;
            *(undefined4 *)((longlong)puVar5 + 0x44) = 0;
            *(undefined8 **)(param_1 + 0xe8) = puVar5;
            return 0;
          }
          local_res18[0] =
               CONCAT31(CONCAT21(CONCAT11(pcVar14[uVar13 - 1],pcVar14[uVar13 - 2]),
                                 pcVar14[uVar13 - 3]),pcVar14[uVar13 - 4]);
          if (0x3ffffff < local_res18[0]) {
            return 10;
          }
          pcVar8 = (char *)FUN_1402f7fa0(uVar4,local_res18[0],local_res8);
          if (local_res8[0] != 0) {
            return local_res8[0];
          }
          local_res8[0] = FUN_140356fd0(uVar4,pcVar8,local_res18,pcVar14,uVar13);
          if (local_res8[0] == 0) {
            puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 8);
            *puVar1 = *puVar1 | 2;
            goto LAB_140346c09;
          }
          FUN_1402f7f90(uVar4,pcVar8);
        }
        goto LAB_140346bd7;
      }
    }
    iVar7 = 0x10;
  }
  return iVar7;
}

