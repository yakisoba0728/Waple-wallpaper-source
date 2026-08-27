// Function: FUN_1403786f0
// Addr: 1403786f0
// Size: 1528 bytes


undefined8 FUN_1403786f0(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  switch(*param_1) {
  case 1:
    FUN_1403ef170(param_1,param_3);
    return param_2;
  case 2:
    FUN_1403f0250(param_1,param_3,0xffffffff);
    return param_2;
  case 3:
    FUN_1403f0250(param_1,param_3,
                  (uint)(byte)param_1[6] * 0x10000 + (uint)(byte)param_1[7] * 0x100 +
                  (uint)(byte)param_1[5] * 0x1000000 + (uint)(byte)param_1[8]);
    return param_2;
  case 4:
    FUN_1403ed780(param_1,param_3,0xffffffff);
    return param_2;
  case 5:
    FUN_1403eda20(param_1,param_3,
                  (uint)(byte)param_1[0x11] * 0x10000 + (uint)(byte)param_1[0x12] * 0x100 +
                  (uint)(byte)param_1[0x10] * 0x1000000 + (uint)(byte)param_1[0x13]);
    return param_2;
  case 6:
    FUN_1403edcc0(param_1,param_3,0xffffffff);
    return param_2;
  case 7:
    FUN_1403edf60(param_1,param_3,
                  (uint)(byte)param_1[0x11] * 0x10000 + (uint)(byte)param_1[0x12] * 0x100 +
                  (uint)(byte)param_1[0x10] * 0x1000000 + (uint)(byte)param_1[0x13]);
    return param_2;
  case 8:
    FUN_1403ee200(param_1,param_3,0xffffffff);
    return param_2;
  case 9:
    FUN_1403ee3f0(param_1,param_3,
                  (uint)(byte)param_1[0xd] * 0x10000 + (uint)(byte)param_1[0xe] * 0x100 +
                  (uint)(byte)param_1[0xc] * 0x1000000 + (uint)(byte)param_1[0xf]);
    return param_2;
  case 10:
    FUN_1403ef4d0(param_1,param_3);
    return param_2;
  case 0xb:
    FUN_1403eee80(param_1,param_3);
    return param_2;
  case 0xc:
    uVar3 = (uint)(byte)param_1[5] * 0x100 + (uint)(byte)param_1[4] * 0x10000 +
            (uint)(byte)param_1[6];
    if (uVar3 == 0) {
      puVar2 = &DAT_14045dd10;
    }
    else {
      puVar2 = (undefined8 *)(param_1 + uVar3);
    }
    iVar5 = -1;
    break;
  case 0xd:
    uVar3 = (uint)(byte)param_1[5] * 0x100 + (uint)(byte)param_1[4] * 0x10000 +
            (uint)(byte)param_1[6];
    if (uVar3 == 0) {
      puVar2 = &DAT_14045dd10;
    }
    else {
      puVar2 = (undefined8 *)(param_1 + uVar3);
    }
    iVar5 = (uint)*(byte *)((longlong)puVar2 + 0x19) * 0x10000 +
            (uint)*(byte *)((longlong)puVar2 + 0x1a) * 0x100 +
            (uint)*(byte *)(puVar2 + 3) * 0x1000000 + (uint)*(byte *)((longlong)puVar2 + 0x1b);
    break;
  case 0xe:
    FUN_1403f02f0(param_1,param_3,0xffffffff);
    return param_2;
  case 0xf:
    FUN_1403f02f0(param_1,param_3,
                  (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                  (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb]);
    return param_2;
  case 0x10:
    FUN_1403ef8f0(param_1,param_3,0xffffffff);
    return param_2;
  case 0x11:
    FUN_1403ef8f0(param_1,param_3,
                  (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                  (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb]);
    return param_2;
  case 0x12:
    FUN_1403efa50(param_1,param_3,0xffffffff);
    return param_2;
  case 0x13:
    FUN_1403efa50(param_1,param_3,
                  (uint)(byte)param_1[0xd] * 0x10000 + (uint)(byte)param_1[0xe] * 0x100 +
                  (uint)(byte)param_1[0xc] * 0x1000000 + (uint)(byte)param_1[0xf]);
    return param_2;
  case 0x14:
    FUN_1403efc20(param_1,param_3,0xffffffff);
    return param_2;
  case 0x15:
    FUN_1403efc20(param_1,param_3,
                  (uint)(byte)param_1[7] * 0x10000 + (uint)(byte)param_1[8] * 0x100 +
                  (uint)(byte)param_1[6] * 0x1000000 + (uint)(byte)param_1[9]);
    return param_2;
  case 0x16:
    FUN_1403efd40(param_1,param_3,0xffffffff);
    return param_2;
  case 0x17:
    FUN_1403efd40(param_1,param_3,
                  (uint)(byte)param_1[0xb] * 0x10000 + (uint)(byte)param_1[0xc] * 0x100 +
                  (uint)(byte)param_1[10] * 0x1000000 + (uint)(byte)param_1[0xd]);
    return param_2;
  case 0x18:
    FUN_1403ef610(param_1,param_3,0xffffffff);
    return param_2;
  case 0x19:
    FUN_1403ef610(param_1,param_3,
                  (uint)(byte)param_1[7] * 0x10000 + (uint)(byte)param_1[8] * 0x100 +
                  (uint)(byte)param_1[6] * 0x1000000 + (uint)(byte)param_1[9]);
    return param_2;
  case 0x1a:
    FUN_1403ef770(param_1,param_3,0xffffffff);
    return param_2;
  case 0x1b:
    FUN_1403ef770(param_1,param_3,
                  (uint)(byte)param_1[0xb] * 0x10000 + (uint)(byte)param_1[0xc] * 0x100 +
                  (uint)(byte)param_1[10] * 0x1000000 + (uint)(byte)param_1[0xd]);
    return param_2;
  case 0x1c:
    FUN_1403efec0(param_1,param_3,0xffffffff);
    return param_2;
  case 0x1d:
    FUN_1403efec0(param_1,param_3,
                  (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                  (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb]);
    return param_2;
  case 0x1e:
    FUN_1403f0080(param_1,param_3,0xffffffff);
    return param_2;
  case 0x1f:
    FUN_1403f0080(param_1,param_3,
                  (uint)(byte)param_1[0xd] * 0x10000 + (uint)(byte)param_1[0xe] * 0x100 +
                  (uint)(byte)param_1[0xc] * 0x1000000 + (uint)(byte)param_1[0xf]);
    return param_2;
  case 0x20:
    FUN_1403ef340(param_1,param_3);
  default:
    return param_2;
  }
  puVar4 = &DAT_14045dd10;
  FUN_1403ee5e0(puVar2,param_3,iVar5);
  uVar3 = (uint)(byte)param_1[2] * 0x100 + (uint)(byte)param_1[1] * 0x10000 + (uint)(byte)param_1[3]
  ;
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + uVar3);
  }
  FUN_1403f6f20(param_3,puVar4);
  lVar1 = *(longlong *)(param_3 + 0x10);
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    (**(code **)(lVar1 + 0x18))
              (lVar1,*(undefined8 *)(param_3 + 0x18),
               *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 8));
    return param_2;
  }
  (**(code **)(lVar1 + 0x18))(lVar1,*(undefined8 *)(param_3 + 0x18));
  return param_2;
}

