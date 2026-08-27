// Function: FUN_140305340
// Addr: 140305340
// Size: 515 bytes


void FUN_140305340(longlong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ushort uVar17;
  uint local_res10 [2];
  int local_res18 [2];
  uint local_res20;
  
  lVar4 = *param_1;
  lVar8 = 0;
  local_res18[0] = 0;
  lVar16 = 0;
  uVar5 = *(undefined8 *)(lVar4 + 0x98);
  param_1[5] = 0;
  param_1[7] = 0;
  local_res10[0] = 0;
  iVar7 = FUN_1402f1ad0(lVar4,0x47535542,0,0,local_res10);
  lVar9 = lVar8;
  if ((((iVar7 == 0) &&
       (lVar8 = FUN_1402f7fa0(uVar5,local_res10[0],local_res18), lVar9 = lVar16, local_res18[0] == 0
       )) && (iVar7 = FUN_1402f1ad0(lVar4,0x47535542,0,lVar8,local_res10), iVar7 == 0)) &&
     ((9 < local_res10[0] &&
      (uVar13 = (uint)CONCAT11(*(undefined1 *)(lVar8 + 8),*(undefined1 *)(lVar8 + 9)),
      uVar13 + 2 <= local_res10[0])))) {
    puVar14 = (undefined1 *)((ulonglong)uVar13 + lVar8);
    uVar17 = CONCAT11(*puVar14,puVar14[1]);
    local_res20 = (uint)uVar17;
    uVar1 = local_res20 * 2;
    if ((uVar1 + 2 + uVar13 <= local_res10[0]) &&
       (lVar9 = FUN_1402f80b0(uVar5,4,0,local_res20,0,local_res18), local_res18[0] == 0)) {
      uVar10 = (ulonglong)local_res10[0];
      puVar15 = puVar14 + 2;
      uVar12 = 0;
      puVar11 = puVar15 + uVar1;
      if (puVar15 < puVar11) {
        do {
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          puVar15 = puVar15 + 2;
          cVar6 = FUN_140306390(puVar14 + (uint)CONCAT11(uVar2,uVar3),uVar10 + lVar8);
          if (cVar6 != '\0') {
            *(uint *)(lVar9 + uVar12 * 4) = CONCAT11(uVar2,uVar3) + uVar13;
          }
          uVar12 = (ulonglong)((int)uVar12 + 1);
        } while (puVar15 < puVar11);
        uVar17 = (ushort)local_res20;
      }
      param_1[5] = lVar8;
      *(ushort *)(param_1 + 6) = uVar17;
      param_1[7] = lVar9;
      return;
    }
  }
  *(undefined2 *)(param_1 + 6) = 0;
  FUN_1402f7f90(uVar5,lVar8);
  FUN_1402f7f90(uVar5,lVar9);
  return;
}

