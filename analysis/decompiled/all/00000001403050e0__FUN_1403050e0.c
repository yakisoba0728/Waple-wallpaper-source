// Function: FUN_1403050e0
// Addr: 1403050e0
// Size: 414 bytes


undefined8 FUN_1403050e0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ushort uVar13;
  
  puVar11 = (undefined1 *)
            ((ulonglong)CONCAT11(*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3)) +
            param_2);
  uVar1 = *puVar11;
  puVar10 = puVar11 + 4;
  uVar2 = puVar11[1];
  uVar8 = (ulonglong)CONCAT11(puVar11[2],puVar11[3]);
  if (CONCAT11(uVar1,uVar2) != 1) {
    uVar8 = uVar8 * 3;
  }
  uVar13 = 0;
  uVar9 = 1;
  puVar12 = (undefined1 *)(param_2 + 6);
  while( true ) {
    while( true ) {
      if (puVar11 + uVar8 * 2 + 4 <= puVar10) {
        return 0;
      }
      if (CONCAT11(uVar1,uVar2) == 1) {
        uVar7 = CONCAT11(*puVar10,puVar10[1]);
        puVar10 = puVar10 + 2;
      }
      else {
        uVar7 = uVar9;
        if (uVar13 < uVar9) {
          uVar7 = CONCAT11(*puVar10,puVar10[1]);
          uVar13 = CONCAT11(puVar10[2],puVar10[3]);
          puVar10 = puVar10 + 6;
        }
        uVar9 = uVar7 + 1;
      }
      uVar3 = puVar12[1];
      uVar4 = *puVar12;
      puVar5 = (uint *)FUN_1402f7790(uVar7,param_1);
      if (puVar5 != (uint *)0x0) break;
      uVar6 = FUN_1402f76e0(uVar7,CONCAT11(uVar4,uVar3),param_1,param_3);
      puVar12 = puVar12 + 2;
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    uVar6 = FUN_1402f76e0((*puVar5 & 0xffff0000) + 0x10000 | (uint)uVar7,CONCAT11(uVar4,uVar3),
                          param_1,param_3);
    if ((int)uVar6 != 0) break;
    *(longlong *)puVar5 = *(longlong *)puVar5 + 0x10000;
    puVar12 = puVar12 + 2;
  }
  return uVar6;
}

