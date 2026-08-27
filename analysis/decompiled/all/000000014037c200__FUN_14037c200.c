// Function: FUN_14037c200
// Addr: 14037c200
// Size: 446 bytes


undefined8 FUN_14037c200(byte *param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  do {
    switch(param_3) {
    case 1:
      iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1] + -1;
      if (iVar2 != 0) {
LAB_14037c23b:
        if (iVar2 != 1) {
          return 0;
        }
      }
      if (*(int *)(param_2 + 0x18) != 1) {
        return 0;
      }
      uVar5 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar5 == 0) {
        param_1 = (byte *)&DAT_14045dd10;
      }
      else {
        param_1 = param_1 + uVar5;
      }
      uVar4 = (uint)*param_1 << 8;
      uVar1 = **(undefined4 **)(param_2 + 0x10);
      uVar5 = (uint)param_1[1];
LAB_14037c390:
      if (uVar4 + uVar5 == 1) {
        iVar2 = FUN_1403c70f0(param_1,uVar1);
      }
      else {
        if (uVar4 + uVar5 != 2) {
          return 0;
        }
        iVar2 = FUN_1403c7170();
      }
      if (iVar2 == -1) {
        return 0;
      }
      return 1;
    case 2:
    case 8:
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
        return 0;
      }
      if (*(int *)(param_2 + 0x18) != 1) {
        return 0;
      }
      uVar5 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar5 == 0) {
        param_1 = (byte *)&DAT_14045dd10;
      }
      else {
        param_1 = param_1 + uVar5;
      }
      uVar4 = (uint)param_1[1];
      uVar1 = **(undefined4 **)(param_2 + 0x10);
      uVar5 = (uint)*param_1 << 8;
      goto LAB_14037c390;
    case 3:
      iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
      goto LAB_14037c23b;
    case 4:
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
        uVar3 = FUN_1404136b0(param_1);
        return uVar3;
      }
      return 0;
    case 5:
      uVar3 = FUN_14037c020(param_1);
      return uVar3;
    case 6:
      uVar3 = FUN_14037bd90(param_1);
      return uVar3;
    case 7:
      if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
        return 0;
      }
      param_3 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      uVar5 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar5 == 0) {
        param_1 = (byte *)&DAT_14045dd10;
      }
      else {
        param_1 = param_1 + uVar5;
      }
      break;
    default:
      return 0;
    }
  } while( true );
}

