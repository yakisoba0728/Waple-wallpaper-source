// Function: FUN_140378060
// Addr: 140378060
// Size: 637 bytes


undefined8 FUN_140378060(byte *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined1 local_res20 [8];
  
  switch(param_4) {
  case 1:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return param_2;
      }
      uVar4 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar4 == 0) {
        FUN_14036f9e0(&DAT_14045dd10,*(undefined8 *)(param_3 + 0x18));
        return param_2;
      }
      goto LAB_1403781b4;
    }
    goto LAB_140378186;
  case 2:
    iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (iVar2 == 1) {
      FUN_1403b3d20(param_1,param_3);
      return param_2;
    }
    if (iVar2 == 2) {
      pbVar5 = (byte *)&DAT_14045dd10;
      uVar4 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar4 == 0) {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar3 = param_1 + uVar4;
      }
      cVar1 = FUN_14036f9e0(pbVar3,*(undefined8 *)(param_3 + 0x18));
      if (cVar1 != '\0') {
        uVar4 = (uint)param_1[10] * 0x100 + (uint)param_1[0xb];
        if (uVar4 != 0) {
          pbVar5 = param_1 + uVar4;
        }
        FUN_14036f820(pbVar5,*(undefined8 *)(param_3 + 0x18));
        return param_2;
      }
    }
    break;
  case 3:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] != 1) {
      return param_2;
    }
LAB_140378186:
    uVar4 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
    if (uVar4 == 0) {
      FUN_14036f9e0(&DAT_14045dd10,*(undefined8 *)(param_3 + 0x18));
      return param_2;
    }
LAB_1403781b4:
    FUN_14036f9e0(param_1 + uVar4,*(undefined8 *)(param_3 + 0x18));
    return param_2;
  case 4:
  case 5:
  case 6:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      pbVar5 = (byte *)&DAT_14045dd10;
      uVar4 = (uint)param_1[3] + (uint)param_1[2] * 0x100;
      if (uVar4 == 0) {
        pbVar3 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar3 = param_1 + uVar4;
      }
      cVar1 = FUN_14036f9e0(pbVar3,*(undefined8 *)(param_3 + 0x18));
      if (cVar1 != '\0') {
        uVar4 = (uint)param_1[4] * 0x100 + (uint)param_1[5];
        if (uVar4 != 0) {
          pbVar5 = param_1 + uVar4;
        }
        FUN_14036f9e0(pbVar5,*(undefined8 *)(param_3 + 0x18));
        return param_2;
      }
    }
    break;
  case 7:
    FUN_140377e20(param_1,local_res20);
    return param_2;
  case 8:
    FUN_140377b70(param_1,local_res20);
    return param_2;
  case 9:
    if ((uint)*param_1 * 0x100 + (uint)param_1[1] == 1) {
      uVar4 = (uint)param_1[5] * 0x10000 + (uint)param_1[6] * 0x100 + (uint)param_1[4] * 0x1000000 +
              (uint)param_1[7];
      if (uVar4 == 0) {
        pbVar5 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar5 = param_1 + uVar4;
      }
      FUN_140378060(pbVar5,local_res20,param_3,(uint)param_1[3] + (uint)param_1[2] * 0x100);
    }
  }
  return param_2;
}

