// Function: FUN_140368430
// Addr: 140368430
// Size: 282 bytes


void FUN_140368430(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar5) {
    lVar6 = lVar1 * 2 + 2;
    uVar4 = *(uint *)(param_1 + -0xc + lVar6 * 0xc);
    puVar2 = (uint *)(param_1 + lVar6 * 0xc);
    if ((*puVar2 < uVar4) ||
       ((*puVar2 == uVar4 &&
        ((puVar2[2] < puVar2[-1] || ((puVar2[2] == puVar2[-1] && (puVar2[1] < puVar2[-2])))))))) {
      lVar6 = lVar1 * 2 + 1;
    }
    puVar3 = (undefined8 *)(param_1 + lVar1 * 0xc);
    *puVar3 = *(undefined8 *)(param_1 + lVar6 * 0xc);
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 8 + lVar6 * 0xc);
    lVar1 = lVar6;
  }
  if ((lVar1 == lVar5) && ((param_3 & 1) == 0)) {
    puVar3 = (undefined8 *)(param_1 + lVar1 * 0xc);
    *puVar3 = *(undefined8 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar5 = lVar1 + -1 >> 1;
    uVar4 = *(uint *)(param_1 + lVar5 * 0xc);
    puVar3 = (undefined8 *)(param_1 + lVar5 * 0xc);
    if ((*param_4 <= uVar4) &&
       ((uVar4 != *param_4 ||
        ((param_4[2] <= *(uint *)(puVar3 + 1) &&
         ((*(uint *)(puVar3 + 1) != param_4[2] || (param_4[1] <= *(uint *)((longlong)puVar3 + 4)))))
        )))) break;
    *(undefined8 *)(param_1 + lVar1 * 0xc) = *puVar3;
    *(undefined4 *)(param_1 + lVar1 * 0xc + 8) = *(undefined4 *)(puVar3 + 1);
    lVar1 = lVar5;
  }
  puVar3 = (undefined8 *)(param_1 + lVar1 * 0xc);
  *puVar3 = *(undefined8 *)param_4;
  *(uint *)(puVar3 + 1) = param_4[2];
  return;
}

