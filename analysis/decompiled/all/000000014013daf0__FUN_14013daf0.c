// Function: FUN_14013daf0
// Addr: 14013daf0
// Size: 474 bytes


void FUN_14013daf0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong local_60 [3];
  ulonglong local_48;
  
  puVar9 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar9 = (undefined8 *)*param_2;
  }
  uVar6 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar9 + uVar6);
      uVar6 = uVar6 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_2[2]);
  }
  lVar4 = FUN_1400110a0(param_1 + 0x10,local_88,param_2,uVar10);
  lVar4 = *(longlong *)(lVar4 + 8);
  if ((lVar4 != 0) && (lVar4 != *(longlong *)(param_1 + 0x18))) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar4 + 0x30);
    return;
  }
  FUN_1400493a0(local_78);
  puVar9 = *(undefined8 **)(param_1 + 0x18);
  for (puVar3 = (undefined8 *)*puVar9; puVar3 != puVar9; puVar3 = (undefined8 *)*puVar3) {
    FUN_140130b20(local_78,local_88,puVar3 + 6);
  }
  lVar4 = *(longlong *)(param_1 + 0x60);
  for (lVar8 = *(longlong *)(param_1 + 0x58); lVar8 != lVar4; lVar8 = lVar8 + 0x48) {
    if (-1 < *(int *)(lVar8 + 0x40)) {
      FUN_140130b20(local_78,local_88,lVar8 + 0x40);
    }
  }
  uVar7 = 0;
  do {
    uVar6 = (((((ulonglong)(uVar7 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
              (ulonglong)((int)uVar7 >> 8 & 0xff)) * 0x100000001b3 ^
             (ulonglong)((int)uVar7 >> 0x10 & 0xff)) * 0x100000001b3 ^
            (ulonglong)((int)uVar7 >> 0x18 & 0xff)) * 0x100000001b3 & local_48;
    lVar4 = *(longlong *)(local_60[0] + 8 + uVar6 * 0x10);
    if (lVar4 == local_70[0]) {
LAB_14013dc83:
      lVar4 = local_70[0];
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0x10);
      while (uVar7 != uVar2) {
        if (lVar4 == *(longlong *)(local_60[0] + uVar6 * 0x10)) goto LAB_14013dc83;
        lVar4 = *(longlong *)(lVar4 + 8);
        uVar2 = *(uint *)(lVar4 + 0x10);
      }
      if (lVar4 == 0) goto LAB_14013dc83;
    }
    if (lVar4 == local_70[0]) {
      FUN_14000d9e0(local_60);
      FUN_140049340(local_70);
      *(uint *)(param_2 + 8) = uVar7;
      puVar5 = (uint *)FUN_1400ddcb0(param_1 + 0x10,param_2);
      *puVar5 = uVar7;
      return;
    }
    uVar7 = uVar7 + 1;
  } while( true );
}

