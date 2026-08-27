// Function: FUN_140304f50
// Addr: 140304f50
// Size: 385 bytes


undefined8 FUN_140304f50(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  undefined1 *puVar13;
  
  uVar1 = *(undefined1 *)(param_2 + 5);
  puVar13 = (undefined1 *)
            ((ulonglong)CONCAT11(*(undefined1 *)(param_2 + 2),*(undefined1 *)(param_2 + 3)) +
            param_2);
  uVar2 = *(undefined1 *)(param_2 + 4);
  uVar3 = *puVar13;
  puVar8 = puVar13 + 4;
  uVar4 = puVar13[1];
  uVar7 = (ulonglong)CONCAT11(puVar13[2],puVar13[3]);
  if (CONCAT11(uVar3,uVar4) != 1) {
    uVar7 = uVar7 * 3;
  }
  uVar9 = 0;
  uVar10 = 1;
  while( true ) {
    while( true ) {
      if (puVar13 + uVar7 * 2 + 4 <= puVar8) {
        return 0;
      }
      if (CONCAT11(uVar3,uVar4) == 1) {
        uVar11 = CONCAT11(*puVar8,puVar8[1]);
        puVar8 = puVar8 + 2;
      }
      else {
        uVar11 = uVar10;
        if (uVar9 < uVar10) {
          uVar11 = CONCAT11(*puVar8,puVar8[1]);
          uVar9 = CONCAT11(puVar8[2],puVar8[3]);
          puVar8 = puVar8 + 6;
        }
        uVar10 = uVar11 + 1;
      }
      puVar5 = (uint *)FUN_1402f7790(uVar11,param_1);
      sVar12 = CONCAT11(uVar2,uVar1) + uVar11;
      if (puVar5 != (uint *)0x0) break;
      uVar6 = FUN_1402f76e0(uVar11,sVar12,param_1,param_3);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    uVar6 = FUN_1402f76e0((*puVar5 & 0xffff0000) + 0x10000 | (uint)uVar11,sVar12,param_1,param_3);
    if ((int)uVar6 != 0) break;
    *(longlong *)puVar5 = *(longlong *)puVar5 + 0x10000;
  }
  return uVar6;
}

