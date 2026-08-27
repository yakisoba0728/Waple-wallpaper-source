// Function: FUN_14035d060
// Addr: 14035d060
// Size: 287 bytes


void FUN_14035d060(undefined8 param_1,longlong param_2,int param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  
  lVar6 = *(longlong *)(param_2 + 0x70);
  uVar10 = param_3 + 2;
  while( true ) {
    if (param_4 <= uVar10) {
      return;
    }
    uVar11 = (ulonglong)(uVar10 - 1);
    uVar13 = *(ushort *)(lVar6 + 0x10 + uVar11 * 0x14);
    puVar1 = (undefined8 *)(lVar6 + uVar11 * 0x14);
    uVar3 = *(ushort *)(lVar6 + 0x10 + (ulonglong)(uVar10 - 2) * 0x14);
    uVar14 = (uint)(uVar13 >> 8);
    uVar4 = *(ushort *)(lVar6 + 0x10 + (ulonglong)uVar10 * 0x14);
    puVar2 = (undefined8 *)(lVar6 + (ulonglong)uVar10 * 0x14);
    if (2 < (uVar13 & 0x1f) - 10) {
      uVar14 = 0;
    }
    uVar13 = uVar4 >> 8;
    if (2 < (uVar4 & 0x1f) - 10) {
      uVar13 = 0;
    }
    uVar12 = (uint)(uVar3 >> 8);
    if (2 < (uVar3 & 0x1f) - 10) {
      uVar12 = 0;
    }
    if (((uVar12 - 0x14 < 2) && (uVar14 - 0x16 < 2)) && ((uVar13 == 0x19 || (uVar13 == 0xdc))))
    break;
    uVar10 = uVar10 + 1;
  }
  if (*(uint *)(param_2 + 0x1c) < 2) {
    FUN_1403ec280(param_2,uVar11,uVar10 + 1);
  }
  else {
    FUN_14040eef0();
  }
  uVar7 = puVar2[1];
  uVar5 = *(undefined4 *)(puVar1 + 2);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  *(undefined4 *)(puVar2 + 2) = uVar5;
  return;
}

