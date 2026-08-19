// Function: FUN_140346f10
// Addr: 140346f10
// Size: 43 bytes


int FUN_140346f10(longlong param_1,longlong param_2,undefined4 *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte bVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  lVar5 = *(longlong *)(param_1 + 0x80);
  *param_3 = 0;
  if ((*(char *)(param_1 + 0x4c0) == '\0') &&
     (iVar3 = func_0x00014034d790(param_1,*(undefined8 *)(param_1 + 0xa0)), iVar3 != 0)) {
    return iVar3;
  }
  if (lVar5 == 0) {
    return 6;
  }
  if (param_2 != 0) {
    uVar4 = func_0x000140421ed0(param_2);
    if (uVar4 == 0) {
      return 6;
    }
    iVar3 = *(int *)(param_1 + 0x4bc);
    if (iVar3 == 0) {
      return 6;
    }
    puVar7 = (undefined1 *)(*(longlong *)(param_1 + 0x4a0) + 8);
    puVar10 = puVar7 + (uint)(iVar3 * 4);
    while( true ) {
      uVar9 = (uint)CONCAT11(puVar7[2],puVar7[3]);
      if (CONCAT11(*puVar7,puVar7[1]) == *(short *)(lVar5 + 0x1a)) break;
      puVar7 = puVar7 + 4;
      puVar10 = puVar10 + uVar9 * 10;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return 6;
      }
    }
    if (CONCAT11(puVar7[2],puVar7[3]) == 0) {
      return 6;
    }
    do {
      bVar1 = puVar10[5];
      if ((bVar1 & 0x10) != 0) {
        uVar2 = *(uint *)(param_1 + 0x4b8);
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar10,puVar10[1]),puVar10[2]),puVar10[3]);
        if ((uVar6 < uVar2) && (uVar4 < uVar2 - uVar6)) {
          lVar5 = *(longlong *)(param_1 + 0x4b0);
          iVar3 = func_0x000140421dc0(param_2,(ulonglong)uVar6 + lVar5);
          if (iVar3 == 0) {
            uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar10[6],puVar10[7]),puVar10[8]),puVar10[9]);
            bVar8 = bVar1 & 0xf;
            if (((bVar1 & 0xf) == 0) || (bVar8 == 1)) {
              if ((uVar6 < uVar2) &&
                 (lVar5 = FUN_140421020((ulonglong)uVar6 + lVar5,0,uVar2), lVar5 != 0)) {
                *param_3 = 1;
                *(ulonglong *)(param_3 + 2) = *(longlong *)(param_1 + 0x4b0) + (ulonglong)uVar6;
                return 0;
              }
            }
            else {
              if (bVar8 == 2) {
                *param_3 = 2;
                param_3[2] = uVar6;
                return 0;
              }
              if (bVar8 == 3) {
                *param_3 = 3;
                param_3[2] = uVar6;
                return 0;
              }
            }
          }
        }
      }
      puVar10 = puVar10 + 10;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 6;
      }
    } while( true );
  }
  return 6;
}

