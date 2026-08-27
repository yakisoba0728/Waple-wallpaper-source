// Function: FUN_140364690
// Addr: 140364690
// Size: 384 bytes


void FUN_140364690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar7 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  uVar8 = (lVar7 >> 1) - (lVar7 >> 0x3f);
  lVar7 = (longlong)uVar8 >> 1;
  if (0 < lVar7) {
    lVar9 = (longlong)(uVar8 - 1) >> 1;
    do {
      lVar7 = lVar7 + -1;
      uVar4 = *(ushort *)(param_1 + lVar7 * 0xc);
      uVar3 = *(undefined8 *)(param_1 + 2 + lVar7 * 0xc);
      uVar5 = *(undefined2 *)(param_1 + 10 + lVar7 * 0xc);
      lVar1 = lVar7;
      while (lVar1 < lVar9) {
        lVar6 = lVar1 * 2 + 2;
        if (*(ushort *)(lVar6 * 0xc + param_1) < *(ushort *)(lVar6 * 0xc + -0xc + param_1)) {
          lVar6 = lVar1 * 2 + 1;
        }
        puVar2 = (undefined8 *)(param_1 + lVar1 * 0xc);
        *puVar2 = *(undefined8 *)(param_1 + lVar6 * 0xc);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8 + lVar6 * 0xc);
        lVar1 = lVar6;
      }
      if ((lVar1 == lVar9) && ((uVar8 & 1) == 0)) {
        puVar2 = (undefined8 *)(param_1 + lVar1 * 0xc);
        lVar1 = uVar8 - 1;
        *puVar2 = *(undefined8 *)(param_1 + -0xc + uVar8 * 0xc);
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + -4 + uVar8 * 0xc);
      }
      while (lVar7 < lVar1) {
        lVar6 = lVar1 + -1 >> 1;
        puVar2 = (undefined8 *)(param_1 + lVar6 * 0xc);
        if (uVar4 <= *(ushort *)(param_1 + lVar6 * 0xc)) break;
        *(undefined8 *)(param_1 + lVar1 * 0xc) = *puVar2;
        *(undefined4 *)(param_1 + lVar1 * 0xc + 8) = *(undefined4 *)(puVar2 + 1);
        lVar1 = lVar6;
      }
      *(undefined8 *)(param_1 + 2 + lVar1 * 0xc) = uVar3;
      *(undefined2 *)(param_1 + 10 + lVar1 * 0xc) = uVar5;
      *(ushort *)(param_1 + lVar1 * 0xc) = uVar4;
    } while (0 < lVar7);
  }
  return;
}

