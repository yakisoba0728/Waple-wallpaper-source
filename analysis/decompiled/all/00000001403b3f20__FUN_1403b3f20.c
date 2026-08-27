// Function: FUN_1403b3f20
// Addr: 1403b3f20
// Size: 440 bytes


void FUN_1403b3f20(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined4 local_88;
  int iStack_84;
  byte *pbStack_80;
  uint local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  int iStack_54;
  byte *pbStack_50;
  uint local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  uVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
  if (uVar7 == 0) {
    puVar9 = &DAT_14045dd10;
  }
  else {
    puVar9 = (undefined8 *)((ulonglong)uVar7 + param_1);
  }
  cVar5 = FUN_14036f9e0(puVar9,*(undefined8 *)(param_2 + 0x18));
  if (cVar5 != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 4);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined1 *)(param_1 + 5);
    uVar7 = (uint)*(byte *)(param_1 + 2) * 0x100 + (uint)*(byte *)(param_1 + 3);
    if (uVar7 == 0) {
      pbStack_50 = (byte *)&DAT_14045dd10;
    }
    else {
      pbStack_50 = (byte *)((ulonglong)uVar7 + param_1);
    }
    iStack_84 = (uint)pbStack_50[1] + (uint)*pbStack_50 * 0x100;
    pbStack_80 = (byte *)0x0;
    local_88 = 0;
    uVar4 = local_88;
    local_88 = 0;
    local_78 = 0;
    uStack_74 = 0;
    iStack_70 = 0;
    uStack_6c = 0;
    if (iStack_84 == 1) {
      local_78 = 0;
    }
    else if (iStack_84 == 2) {
      FUN_1403e3ad0(&pbStack_80,pbStack_50);
      pbStack_50 = pbStack_80;
    }
    else {
      local_78 = 0;
      pbStack_50 = (byte *)0x0;
      local_88 = uVar4;
    }
    local_58 = local_88;
    uStack_44 = uStack_74;
    iStack_40 = iStack_70;
    uStack_3c = uStack_6c;
    pbStack_80 = pbStack_50;
    local_68 = (ulonglong)CONCAT11(uVar1,uVar2) | 0xffff00000000;
    iStack_54 = iStack_84;
    local_48 = local_78;
    while (((iStack_84 == 1 || (iStack_84 == 2)) &&
           (local_78 < (uint)pbStack_80[3] + (uint)pbStack_80[2] * 0x100))) {
      if (iStack_84 == 1) {
        if (local_78 < (uint)pbStack_80[3] + (uint)pbStack_80[2] * 0x100) {
          pbVar6 = pbStack_80 + ((ulonglong)local_78 + 2) * 2;
        }
        else {
          pbVar6 = (byte *)&DAT_14045dd10;
        }
        iVar8 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      }
      else {
        iVar8 = iStack_70;
        if (iStack_84 != 2) {
          iVar8 = 0;
        }
      }
      FUN_1403a29e0(uVar3,(int)local_68 + iVar8 & local_68._4_4_);
      FUN_140398f40(&local_88);
    }
  }
  return;
}

