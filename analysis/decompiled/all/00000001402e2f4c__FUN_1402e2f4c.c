// Function: FUN_1402e2f4c
// Addr: 1402e2f4c
// Size: 292 bytes


void FUN_1402e2f4c(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_788 [32];
  byte *local_768;
  undefined1 *local_760;
  undefined4 local_758;
  undefined4 local_750;
  undefined4 local_748;
  undefined8 local_738;
  byte abStack_730 [24];
  undefined1 local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 auStack_518 [256];
  byte local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_788;
  abStack_730[8] = 0;
  abStack_730[9] = 0;
  abStack_730[10] = 0;
  abStack_730[0xb] = 0;
  local_738 = 0;
  abStack_730[0] = 0;
  abStack_730[1] = 0;
  abStack_730[2] = 0;
  abStack_730[3] = 0;
  abStack_730[4] = 0;
  abStack_730[5] = 0;
  abStack_730[6] = 0;
  abStack_730[7] = 0;
  if ((*(int *)(param_1 + 4) == 0xfde9) || (iVar3 = (*DAT_140426540)(), iVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    puVar6 = local_718;
    lVar9 = 0x100;
    do {
      *puVar6 = (char)uVar4;
      uVar4 = uVar4 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar4 < 0x100);
    pbVar5 = (byte *)((longlong)&local_738 + 6);
    local_718[0] = 0x20;
    bVar2 = local_738._6_1_;
    while (bVar2 != 0) {
      bVar1 = pbVar5[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = 0x20;
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pbVar5 = pbVar5 + 2;
      bVar2 = *pbVar5;
    }
    local_758 = 0;
    local_760 = (undefined1 *)CONCAT44(local_760._4_4_,*(undefined4 *)(param_1 + 4));
    local_768 = local_418;
    FUN_1402e58d8(0,1,local_718,0x100);
    local_748 = 0;
    local_750 = *(undefined4 *)(param_1 + 4);
    local_760 = local_618;
    local_758 = 0x100;
    local_768._0_4_ = 0x100;
    FUN_1402d949c(0,*(undefined8 *)(param_1 + 0x220),0x100,local_718);
    local_748 = 0;
    local_750 = *(undefined4 *)(param_1 + 4);
    local_760 = auStack_518;
    local_758 = 0x100;
    local_768 = (byte *)CONCAT44(local_768._4_4_,0x100);
    FUN_1402d949c(0,*(undefined8 *)(param_1 + 0x220),0x200,local_718);
    pbVar8 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pbVar8 & 1) == 0) {
        if ((*pbVar8 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pbVar8 = pbVar8 + 2;
      pbVar5 = pbVar5 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_788);
  return;
}

