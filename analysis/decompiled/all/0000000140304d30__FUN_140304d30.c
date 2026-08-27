// Function: FUN_140304d30
// Addr: 140304d30
// Size: 530 bytes


undefined8 FUN_140304d30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar5;
  uint *puVar6;
  undefined8 uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  uint uVar11;
  undefined1 *puVar12;
  ushort uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 *local_50;
  
  puVar14 = (undefined1 *)
            ((ulonglong)CONCAT11(*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3)) +
            param_2);
  uVar1 = *puVar14;
  local_50 = puVar14 + 4;
  uVar2 = puVar14[1];
  uVar9 = (ulonglong)CONCAT11(puVar14[2],puVar14[3]);
  if (CONCAT11(uVar1,uVar2) != 1) {
    uVar9 = uVar9 * 3;
  }
  uVar8 = 0;
  uVar5 = 1;
  puVar12 = local_50;
  puVar15 = (undefined1 *)(param_2 + 6);
  uVar13 = 1;
  do {
    do {
      if (puVar14 + uVar9 * 2 + 4 <= puVar12) {
        return 0;
      }
      if (CONCAT11(uVar1,uVar2) == 1) {
        local_50 = puVar12 + 2;
        uVar10 = CONCAT11(*puVar12,puVar12[1]);
        puVar12 = local_50;
      }
      else {
        uVar10 = uVar13;
        if (uVar8 < uVar13) {
          uVar10 = CONCAT11(*puVar12,puVar12[1]);
          uVar8 = CONCAT11(puVar12[2],puVar12[3]);
          puVar12 = puVar12 + 6;
          local_50 = puVar12;
        }
        uVar13 = uVar10 + 1;
        uVar5 = uVar13;
      }
      puVar16 = puVar15 + 2;
      uVar11 = 0;
      puVar17 = (undefined1 *)((ulonglong)CONCAT11(*puVar15,puVar15[1]) + 2 + param_2);
      uVar18 = (uint)CONCAT11(*(undefined1 *)((ulonglong)CONCAT11(*puVar15,puVar15[1]) + param_2),
                              puVar17[-1]);
      puVar15 = puVar16;
    } while (uVar18 == 0);
    do {
      uVar3 = *puVar17;
      uVar4 = puVar17[1];
      puVar6 = (uint *)FUN_1402f7790(uVar10,param_1);
      if (puVar6 == (uint *)0x0) {
        uVar7 = FUN_1402f76e0(uVar10,CONCAT11(uVar3,uVar4),param_1,param_3);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
      }
      else {
        uVar7 = FUN_1402f76e0((*puVar6 & 0xffff0000) + 0x10000 | (uint)uVar10,CONCAT11(uVar3,uVar4),
                              param_1,param_3);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        *(longlong *)puVar6 = *(longlong *)puVar6 + 0x10000;
      }
      uVar11 = uVar11 + 1;
      puVar12 = local_50;
      puVar17 = puVar17 + 2;
      uVar13 = uVar5;
    } while (uVar11 < uVar18);
  } while( true );
}

