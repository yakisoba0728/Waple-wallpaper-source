// Function: FUN_14039ee40
// Addr: 14039ee40
// Size: 352 bytes


void FUN_14039ee40(uint *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar1 = *param_1;
  uVar3 = (**(code **)(lVar2 + 0x28))(lVar2,uVar1,*(undefined8 *)(lVar2 + 0x68));
  if (uVar1 < 0x80) {
    *(short *)(param_1 + 4) = (short)uVar3;
    return;
  }
  iVar4 = FUN_1403e6900(uVar1);
  uVar6 = uVar3;
  if (iVar4 != 0) {
    *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 2;
    uVar6 = uVar3 | 0x20;
    if (uVar1 == 0x200c) {
      uVar6 = uVar3 | 0x220;
    }
    else if (uVar1 == 0x200d) {
      uVar6 = uVar3 | 0x120;
    }
    else {
      if (((2 < uVar1 - 0x180b) && (uVar1 != 0x180f)) && (0x5f < uVar1 - 0xe0020)) {
        if (uVar1 != 0x34f) goto LAB_14039eed9;
        *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x10;
      }
      uVar6 = uVar3 | 0x60;
    }
  }
LAB_14039eed9:
  uVar5 = (ushort)uVar6;
  uVar6 = 1 << ((byte)uVar3 & 0x1f);
  if (0x1f < uVar3) {
    uVar6 = 0;
  }
  if ((uVar6 & 0x1c00) != 0) {
    *(uint *)(param_2 + 0xd8) = *(uint *)(param_2 + 0xd8) | 0x80;
    if ((uVar1 == 0x1a60) || (uVar1 == 0xfc6)) {
      *(ushort *)(param_1 + 4) = uVar5 | 0xfe80;
      return;
    }
    if (uVar1 == 0xf39) {
      *(ushort *)(param_1 + 4) = uVar5 | 0x7f80;
      return;
    }
    iVar4 = (**(code **)(lVar2 + 0x18))(lVar2,uVar1,*(undefined8 *)(lVar2 + 0x58));
    uVar5 = uVar5 | (ushort)(byte)(&DAT_14045c1a0)[iVar4] << 8 | 0x80;
  }
  *(ushort *)(param_1 + 4) = uVar5;
  return;
}

