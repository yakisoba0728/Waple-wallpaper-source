// Function: FUN_1403f8a60
// Addr: 1403f8a60
// Size: 696 bytes


void FUN_1403f8a60(int *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  byte bVar4;
  uint3 uVar5;
  int *piVar6;
  undefined1 uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined1 uVar17;
  undefined8 *puVar18;
  bool bVar19;
  undefined2 local_res8;
  undefined1 local_res18 [2];
  byte bStackX_1a;
  byte bStackX_1b;
  
  if (param_1[0xb] == 0) {
    uVar13 = param_1[0x15] - 1;
    puVar18 = *(undefined8 **)(param_1 + 0x16) + 1;
    if (param_1[0x15] == 0) {
      uVar13 = 0;
      puVar18 = *(undefined8 **)(param_1 + 0x16);
    }
    puVar1 = puVar18 + uVar13;
    for (; puVar18 != puVar1; puVar18 = puVar18 + 1) {
      plVar3 = (longlong *)*puVar18;
      puVar11 = (uint *)plVar3[3];
      puVar2 = puVar11 + (ulonglong)*(uint *)((longlong)plVar3 + 0x14) * 3;
      piVar6 = DAT_1404e4f20;
      for (; puVar11 != puVar2; puVar11 = puVar11 + 3) {
        piVar14 = DAT_14045dd10;
        DAT_1404e4f20 = DAT_14045dd10;
        if (puVar11[2] < (uint)param_1[0x15]) {
          piVar14 = *(int **)(*(longlong *)(param_1 + 0x16) + (ulonglong)puVar11[2] * 8);
          DAT_1404e4f20 = piVar6;
        }
        if (piVar14 == (int *)0x0) {
          param_1[0xb] = param_1[0xb] | 1;
          return;
        }
        uVar13 = *puVar11;
        iVar9 = 0;
        uVar10 = uVar13 >> 4 & 3;
        if (uVar10 == 0) {
          iVar9 = *piVar14 - (int)*plVar3;
        }
        else if (uVar10 == 1) {
          iVar9 = *piVar14 - (int)plVar3[1];
        }
        else if (uVar10 == 2) {
          iVar9 = ((param_1[2] - param_1[4]) - *param_1) + *piVar14;
        }
        uVar12 = uVar13 & 7;
        uVar10 = iVar9 - (uVar13 >> 6);
        uVar15 = (ulonglong)puVar11[1];
        bVar8 = (byte)uVar10;
        uVar17 = (undefined1)(uVar10 >> 0x18);
        bVar4 = (byte)(uVar10 >> 8);
        uVar7 = (undefined1)(uVar10 >> 0x10);
        if ((uVar13 & 8) == 0) {
          if (uVar12 == 4) {
            uVar5 = CONCAT21(CONCAT11(bVar4,uVar7),uVar17);
            *(uint *)(uVar15 + *plVar3) = CONCAT13(bVar8,uVar5);
            bVar19 = ((uVar5 & 0xff00) >> 8) * 0x10000 + (uint)bVar4 * 0x100 + (uVar10 & 0xff000000)
                     + (uVar10 & 0xff) == uVar10;
          }
          else {
            puVar16 = (undefined2 *)(uVar15 + *plVar3);
            if (uVar12 == 3) {
              *(undefined1 *)puVar16 = uVar7;
              *(byte *)((longlong)puVar16 + 1) = bVar4;
              uVar13 = (uVar10 >> 8 & 0xff) * 0x100 + (uVar10 >> 0x10 & 0xff) * 0x10000 +
                       (uVar10 & 0xff);
              *(byte *)(puVar16 + 1) = bVar8;
            }
            else {
              uVar13 = (uint)bVar4 * 0x100 + (uVar10 & 0xff);
              *puVar16 = CONCAT11(bVar8,bVar4);
            }
            bVar19 = uVar13 == uVar10;
          }
        }
        else if (uVar12 == 4) {
          _local_res18 = CONCAT12(bVar4,CONCAT11(uVar7,uVar17));
          _local_res18 = CONCAT13(bVar8,_local_res18);
          *(undefined4 *)(uVar15 + *plVar3) = _local_res18;
          bVar19 = (longlong)
                   (int)(((((int)uVar10 >> 0x18 & 0xffU) * 0x100 + ((_local_res18 & 0xff00) >> 8)) *
                          0x100 + (uint)bVar4) * 0x100 + (uVar10 & 0xff)) == (ulonglong)uVar10;
        }
        else {
          local_res8 = CONCAT11(bVar8,bVar4);
          *(undefined2 *)(uVar15 + *plVar3) = local_res8;
          bVar19 = (longlong)(short)((ushort)bVar4 * 0x100 + (ushort)bVar8) == (ulonglong)uVar10;
        }
        if (!bVar19) {
          param_1[0xb] = param_1[0xb] | 2;
        }
        piVar6 = DAT_1404e4f20;
      }
      DAT_1404e4f20 = piVar6;
    }
  }
  return;
}

