// Function: FUN_140368700
// Addr: 140368700
// Size: 247 bytes


void FUN_140368700(longlong param_1,longlong param_2,ulonglong param_3,ushort *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar1 = param_2;
  while (lVar1 < lVar4) {
    lVar5 = lVar1 * 2 + 2;
    if (*(ushort *)(lVar5 * 0xc + param_1) < *(ushort *)(lVar5 * 0xc + -0xc + param_1)) {
      lVar5 = lVar1 * 2 + 1;
    }
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0xc);
    *puVar2 = *(undefined8 *)(param_1 + lVar5 * 0xc);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8 + lVar5 * 0xc);
    lVar1 = lVar5;
  }
  if ((lVar1 == lVar4) && ((param_3 & 1) == 0)) {
    puVar2 = (undefined8 *)(param_1 + lVar1 * 0xc);
    *puVar2 = *(undefined8 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    lVar1 = param_3 - 1;
  }
  while (param_2 < lVar1) {
    lVar4 = lVar1 + -1 >> 1;
    puVar3 = (ushort *)(param_1 + lVar4 * 0xc);
    if (*param_4 <= *puVar3) break;
    *(undefined8 *)(param_1 + lVar1 * 0xc) = *(undefined8 *)puVar3;
    *(undefined4 *)(param_1 + lVar1 * 0xc + 8) = *(undefined4 *)(puVar3 + 4);
    lVar1 = lVar4;
  }
  puVar2 = (undefined8 *)(param_1 + lVar1 * 0xc);
  *puVar2 = *(undefined8 *)param_4;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_4 + 4);
  return;
}

