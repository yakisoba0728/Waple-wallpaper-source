// Function: FUN_1403787c0
// Addr: 1403787c0
// Size: 1469 bytes


undefined8 FUN_1403787c0(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  switch(*param_1) {
  case 1:
    func_0x0001403ef240(param_1,param_3);
    return param_2;
  case 2:
    FUN_1403f0320(param_1,param_3,0xffffffff);
    return param_2;
  case 3:
    FUN_1403f0320(param_1,param_3,
                  (uint)(byte)param_1[6] * 0x10000 + (uint)(byte)param_1[7] * 0x100 +
                  (uint)(byte)param_1[5] * 0x1000000 + (uint)(byte)param_1[8]);
    return param_2;
  case 4:
    FUN_1403ed850(param_1,param_3,0xffffffff);
    return param_2;
  case 5:
    FUN_1403edaf0(param_1,param_3,
                  (uint)(byte)param_1[0x11] * 0x10000 + (uint)(byte)param_1[0x12] * 0x100 +
                  (uint)(byte)param_1[0x10] * 0x1000000 + (uint)(byte)param_1[0x13]);
    return param_2;
  case 6:
    FUN_1403edd90(param_1,param_3,0xffffffff);
    return param_2;
  case 7:
    FUN_1403ee030(param_1,param_3,
                  (uint)(byte)param_1[0x11] * 0x10000 + (uint)(byte)param_1[0x12] * 0x100 +
                  (uint)(byte)param_1[0x10] * 0x1000000 + (uint)(byte)param_1[0x13]);
    return param_2;
  case 8:
    FUN_1403ee2d0(param_1,param_3,0xffffffff);
    return param_2;
  case 9:
    FUN_1403ee4c0(param_1,param_3,
                  (uint)(byte)param_1[0xd] * 0x10000 + (uint)(byte)param_1[0xe] * 0x100 +
                  (uint)(byte)param_1[0xc] * 0x1000000 + (uint)(byte)param_1[0xf]);
    return param_2;
  case 10:
    FUN_1403ef5a0(param_1,param_3);
    return param_2;
  case 0xb:
    FUN_1403eef50(param_1,param_3);
    return param_2;
  case 0xc:
    uVar3 = (uint)(byte)param_1[5] * 0x100 + (uint)(byte)param_1[4] * 0x10000 +
            (uint)(byte)param_1[6];
    if (uVar3 == 0) {
      puVar2 = &DAT_14045dde0;
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
      puVar2 = &DAT_14045dde0;
    }
    else {
      puVar2 = (undefined8 *)(param_1 + uVar3);
    }
    iVar5 = (uint)*(byte *)((longlong)puVar2 + 0x19) * 0x10000 +
            (uint)*(byte *)((longlong)puVar2 + 0x1a) * 0x100 +
            (uint)*(byte *)(puVar2 + 3) * 0x1000000 + (uint)*(byte *)((longlong)puVar2 + 0x1b);
    break;
  case 0xe:
    FUN_1403f03c0(param_1,param_3,0xffffffff);
    return param_2;
  case 0xf:
    FUN_1403f03c0(param_1,param_3,
                  (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                  (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb]);
    return param_2;
  case 0x10:
    FUN_1403ef9c0(param_1,param_3,0xffffffff);
    return param_2;
  case 0x11:
    FUN_1403ef9c0(param_1,param_3,
                  (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                  (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb]);
    return param_2;
  case 0x12:
    FUN_1403efb20(param_1,param_3,0xffffffff);
    return param_2;
  case 0x13:
    FUN_1403efb20(param_1,param_3,
                  (uint)(byte)param_1[0xd] * 0x10000 + (uint)(byte)param_1[0xe] * 0x100 +
                  (uint)(byte)param_1[0xc] * 0x1000000 + (uint)(byte)param_1[0xf]);
    return param_2;
  case 0x14:
    FUN_1403efcf0(param_1,param_3,0xffffffff);
    return param_2;
  case 0x15:
    FUN_1403efcf0(param_1,param_3,
                  (uint)(byte)param_1[7] * 0x10000 + (uint)(byte)param_1[8] * 0x100 +
                  (uint)(byte)param_1[6] * 0x1000000 + (uint)(byte)param_1[9]);
    return param_2;
  case 0x16:
    FUN_1403efe10(param_1,param_3,0xffffffff);
    return param_2;
  case 0x17:
    FUN_1403efe10(param_1,param_3,
                  (uint)(byte)param_1[0xb] * 0x10000 + (uint)(byte)param_1[0xc] * 0x100 +
                  (uint)(byte)param_1[10] * 0x1000000 + (uint)(byte)param_1[0xd]);
    return param_2;
  case 0x18:
    FUN_1403ef6e0(param_1,param_3,0xffffffff);
    return param_2;
  case 0x19:
    FUN_1403ef6e0(param_1,param_3,
                  (uint)(byte)param_1[7] * 0x10000 + (uint)(byte)param_1[8] * 0x100 +
                  (uint)(byte)param_1[6] * 0x1000000 + (uint)(byte)param_1[9]);
    return param_2;
  case 0x1a:
    FUN_1403ef840(param_1,param_3,0xffffffff);
    return param_2;
  case 0x1b:
    FUN_1403ef840(param_1,param_3,
                  (uint)(byte)param_1[0xb] * 0x10000 + (uint)(byte)param_1[0xc] * 0x100 +
                  (uint)(byte)param_1[10] * 0x1000000 + (uint)(byte)param_1[0xd]);
    return param_2;
  case 0x1c:
    FUN_1403eff90(param_1,param_3,0xffffffff);
    return param_2;
  case 0x1d:
    FUN_1403eff90(param_1,param_3,
                  (uint)(byte)param_1[9] * 0x10000 + (uint)(byte)param_1[10] * 0x100 +
                  (uint)(byte)param_1[8] * 0x1000000 + (uint)(byte)param_1[0xb]);
    return param_2;
  case 0x1e:
    FUN_1403f0150(param_1,param_3,0xffffffff);
    return param_2;
  case 0x1f:
    FUN_1403f0150(param_1,param_3,
                  (uint)(byte)param_1[0xd] * 0x10000 + (uint)(byte)param_1[0xe] * 0x100 +
                  (uint)(byte)param_1[0xc] * 0x1000000 + (uint)(byte)param_1[0xf]);
    return param_2;
  case 0x20:
    FUN_1403ef410(param_1,param_3);
  default:
    return param_2;
  }
  puVar4 = &DAT_14045dde0;
  FUN_1403ee6b0(puVar2,param_3,iVar5);
  uVar3 = (uint)(byte)param_1[2] * 0x100 + (uint)(byte)param_1[1] * 0x10000 + (uint)(byte)param_1[3]
  ;
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + uVar3);
  }
  func_0x0001403f6ff0(param_3,puVar4);
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

