// Function: FUN_1402f5610
// Addr: 1402f5610
// Size: 589 bytes


int FUN_1402f5610(longlong *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  sbyte sVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (param_1 == (longlong *)0x0) {
    return 0x28;
  }
  iVar4 = 0;
  bVar3 = false;
  bVar2 = *param_2;
  puVar9 = (uint *)param_1[7];
  while (bVar2 - 4 < 0x16) {
    switch(bVar2 - 4) {
    case 0:
      iVar4 = FUN_1402f4fe0(param_1,*(undefined2 *)(param_2 + 2));
      if (iVar4 == 0) {
        puVar8 = (uint *)param_1[7];
        bVar3 = true;
        goto LAB_1402f57e9;
      }
      goto LAB_1402f5801;
    default:
      goto switchD_1402f56a0_caseD_1;
    case 4:
    case 5:
      uVar7 = (uint)(byte)*puVar9;
      sVar6 = 0x18;
      puVar8 = (uint *)((longlong)puVar9 + 1);
      break;
    case 8:
    case 9:
      puVar8 = (uint *)((longlong)puVar9 + 2);
      uVar5 = (uint)(byte)*puVar9 << 8;
      sVar6 = 0x10;
      uVar7 = (uint)*(byte *)((longlong)puVar9 + 1);
      goto LAB_1402f57ba;
    case 10:
    case 0xb:
      uVar7 = (uint)*(byte *)((longlong)puVar9 + 1);
      puVar8 = (uint *)((longlong)puVar9 + 2);
      sVar6 = 0x10;
      goto LAB_1402f57b3;
    case 0xc:
    case 0xd:
      puVar8 = puVar9 + 1;
      uVar7 = CONCAT31(CONCAT21(CONCAT11((byte)*puVar9,*(byte *)((longlong)puVar9 + 1)),
                                *(byte *)((longlong)puVar9 + 2)),*(byte *)((longlong)puVar9 + 3));
      sVar6 = 0;
      break;
    case 0xe:
    case 0xf:
      puVar8 = puVar9 + 1;
      uVar7 = *puVar9;
      sVar6 = 0;
      break;
    case 0x10:
    case 0x11:
      puVar8 = (uint *)((longlong)puVar9 + 3);
      sVar6 = 8;
      uVar7 = (uint)CONCAT11((byte)*puVar9,*(byte *)((longlong)puVar9 + 1));
      bVar2 = *(byte *)((longlong)puVar9 + 2);
      goto LAB_1402f57b7;
    case 0x12:
    case 0x13:
      puVar8 = (uint *)((longlong)puVar9 + 3);
      sVar6 = 8;
      uVar7 = (uint)*(ushort *)((longlong)puVar9 + 1);
LAB_1402f57b3:
      bVar2 = (byte)*puVar9;
LAB_1402f57b7:
      uVar5 = (uint)bVar2;
      uVar7 = uVar7 << 8;
LAB_1402f57ba:
      uVar7 = uVar7 | uVar5;
      break;
    case 0x14:
    case 0x15:
      bVar2 = param_2[1];
      if ((ulonglong)bVar2 <= (ulonglong)(param_1[8] - (longlong)puVar9)) {
        if (*param_2 == 0x18) {
          FUN_1404210f0((ulonglong)*(ushort *)(param_2 + 2) + param_3,puVar9,bVar2);
        }
        puVar8 = (uint *)((longlong)puVar9 + (ulonglong)bVar2);
        goto LAB_1402f57e9;
      }
      iVar4 = 0x55;
      goto LAB_1402f5801;
    }
    if ((*param_2 & 1) != 0) {
      uVar7 = (int)(uVar7 << sVar6) >> sVar6;
    }
    puVar9 = (uint *)((ulonglong)*(ushort *)(param_2 + 2) + param_3);
    if (param_2[1] == 1) {
      *(char *)puVar9 = (char)uVar7;
    }
    else if (param_2[1] == 2) {
      *(short *)puVar9 = (short)uVar7;
    }
    else {
      *puVar9 = uVar7;
    }
LAB_1402f57e9:
    pbVar1 = param_2 + 4;
    param_2 = param_2 + 4;
    puVar9 = puVar8;
    bVar2 = *pbVar1;
  }
switchD_1402f56a0_caseD_1:
  param_1[7] = (longlong)puVar9;
LAB_1402f5801:
  if (bVar3) {
    if (param_1[4] != 0) {
      if (*param_1 != 0) {
        (**(code **)(param_1[6] + 0x10))(param_1[6]);
      }
      *param_1 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return iVar4;
}

