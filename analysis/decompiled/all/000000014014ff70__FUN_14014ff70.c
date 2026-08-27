// Function: FUN_14014ff70
// Addr: 14014ff70
// Size: 407 bytes


undefined8 FUN_14014ff70(longlong param_1,char *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_48 = 0;
  local_40 = 0;
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  sVar5 = strlen(param_2);
  FUN_140017480(&local_58,param_2,sVar5);
  FUN_1400187b0(&local_58);
  uVar13 = local_40;
  uVar11 = local_48;
  ppppuVar14 = (undefined8 ****)local_58;
  uVar8 = 0xcbf29ce484222325;
  ppppuVar9 = &local_58;
  if (0xf < local_40) {
    ppppuVar9 = (undefined8 ****)local_58;
  }
  uVar10 = 0;
  if (local_48 != 0) {
    do {
      pbVar1 = (byte *)((longlong)ppppuVar9 + uVar10);
      uVar10 = uVar10 + 1;
      uVar8 = (uVar8 ^ *pbVar1) * 0x100000001b3;
    } while (uVar10 < local_48);
  }
  uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x30);
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar8 * 0x10);
  if (lVar12 != *(longlong *)(param_1 + 8)) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar8 * 0x10);
    while( true ) {
      puVar6 = (undefined8 *)(lVar12 + 0x10);
      if (0xf < *(ulonglong *)(lVar12 + 0x28)) {
        puVar6 = (undefined8 *)*puVar6;
      }
      ppppuVar9 = &local_58;
      if (0xf < uVar13) {
        ppppuVar9 = ppppuVar14;
      }
      if ((uVar11 == *(ulonglong *)(lVar12 + 0x20)) &&
         ((uVar11 == 0 || (iVar4 = memcmp(ppppuVar9,puVar6,uVar11), iVar4 == 0))))
      goto LAB_140150073;
      if (lVar12 == lVar2) break;
      lVar12 = *(longlong *)(lVar12 + 8);
    }
  }
  lVar12 = 0;
LAB_140150073:
  if ((lVar12 == 0) || (lVar12 == *(longlong *)(param_1 + 8))) {
    ppppuVar9 = &local_58;
    if (0xf < uVar13) {
      ppppuVar9 = ppppuVar14;
    }
    uVar7 = FUN_1401515b0(param_1,ppppuVar9,0,0);
    puVar6 = (undefined8 *)FUN_140151f40(param_1,&local_58);
    *puVar6 = uVar7;
    uVar13 = local_40;
    ppppuVar14 = (undefined8 ****)local_58;
  }
  else {
    uVar7 = *(undefined8 *)(lVar12 + 0x30);
  }
  if (0xf < uVar13) {
    uVar11 = uVar13 + 1;
    ppppuVar9 = ppppuVar14;
    if (0xfff < uVar11) {
      ppppuVar9 = (undefined8 ****)ppppuVar14[-1];
      if (0x1f < (ulonglong)((longlong)ppppuVar14 + (-8 - (longlong)ppppuVar9))) {
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar11 = uVar13 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar11);
  }
  return uVar7;
}

