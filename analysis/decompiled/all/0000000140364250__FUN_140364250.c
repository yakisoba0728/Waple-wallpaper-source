// Function: FUN_140364250
// Addr: 140364250
// Size: 401 bytes


void FUN_140364250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  lVar9 = (param_2 - param_1) / 6 + (param_2 - param_1 >> 0x3f);
  uVar11 = (lVar9 >> 1) - (lVar9 >> 0x3f);
  lVar9 = (longlong)uVar11 >> 1;
  if (0 < lVar9) {
    lVar10 = (longlong)(uVar11 - 1) >> 1;
    do {
      lVar9 = lVar9 + -1;
      uVar4 = *(uint *)(param_1 + lVar9 * 0xc);
      uVar5 = *(uint *)(param_1 + 4 + lVar9 * 0xc);
      uVar6 = *(uint *)(param_1 + 8 + lVar9 * 0xc);
      lVar1 = lVar9;
      while (lVar1 < lVar10) {
        lVar8 = lVar1 * 2 + 2;
        uVar7 = *(uint *)(param_1 + -0xc + lVar8 * 0xc);
        puVar2 = (uint *)(param_1 + lVar8 * 0xc);
        if ((*puVar2 < uVar7) ||
           ((*puVar2 == uVar7 &&
            ((puVar2[2] < puVar2[-1] || ((puVar2[2] == puVar2[-1] && (puVar2[1] < puVar2[-2]))))))))
        {
          lVar8 = lVar1 * 2 + 1;
        }
        puVar3 = (undefined8 *)(param_1 + lVar1 * 0xc);
        *puVar3 = *(undefined8 *)(param_1 + lVar8 * 0xc);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 8 + lVar8 * 0xc);
        lVar1 = lVar8;
      }
      if ((lVar1 == lVar10) && ((uVar11 & 1) == 0)) {
        puVar3 = (undefined8 *)(param_1 + lVar1 * 0xc);
        lVar1 = uVar11 - 1;
        *puVar3 = *(undefined8 *)(param_1 + -0xc + uVar11 * 0xc);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + -4 + uVar11 * 0xc);
      }
      while (lVar9 < lVar1) {
        lVar8 = lVar1 + -1 >> 1;
        uVar7 = *(uint *)(param_1 + lVar8 * 0xc);
        puVar3 = (undefined8 *)(param_1 + lVar8 * 0xc);
        if ((uVar4 <= uVar7) &&
           ((uVar7 != uVar4 ||
            ((uVar6 <= *(uint *)(puVar3 + 1) &&
             ((*(uint *)(puVar3 + 1) != uVar6 || (uVar5 <= *(uint *)((longlong)puVar3 + 4)))))))))
        break;
        *(undefined8 *)(param_1 + lVar1 * 0xc) = *puVar3;
        *(undefined4 *)(param_1 + lVar1 * 0xc + 8) = *(undefined4 *)(puVar3 + 1);
        lVar1 = lVar8;
      }
      *(uint *)(param_1 + lVar1 * 0xc) = uVar4;
      *(uint *)(param_1 + 4 + lVar1 * 0xc) = uVar5;
      *(uint *)(param_1 + 8 + lVar1 * 0xc) = uVar6;
    } while (0 < lVar9);
  }
  return;
}

