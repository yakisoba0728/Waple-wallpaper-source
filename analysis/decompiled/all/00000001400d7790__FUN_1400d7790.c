// Function: FUN_1400d7790
// Addr: 1400d7790
// Size: 973 bytes


void FUN_1400d7790(longlong param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  ushort uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  ushort uVar8;
  uint local_78 [6];
  ulonglong local_60 [4];
  
  puVar5 = (undefined8 *)*param_3;
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)FUN_14028af20(0x60);
    *puVar5 = &PTR_FUN_140486f28;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    *(undefined2 *)(puVar5 + 0xb) = 0;
    *param_3 = (longlong)puVar5;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xbfffffff;
  local_60[2] = 0;
  local_60[0] = 0;
  local_60[1] = 4;
  local_78[0] = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[2] = 4;
  local_78[3] = 0x10000;
  local_78[1] = 2;
  if ((puVar5[1] == 0) && (*(ushort *)(param_1 + 0xf8) != 0)) {
    local_60[0] = (ulonglong)*(ushort *)(param_1 + 0xf8);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_60,0,puVar5 + 1);
    if (puVar5[1] == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
    }
  }
  if ((puVar5[3] == 0) && (*(ushort *)(param_1 + 0xfc) != 0)) {
    local_60[0] = CONCAT44(local_60[0]._4_4_,(uint)*(ushort *)(param_1 + 0xfc));
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_60,0,puVar5 + 3);
    if (puVar5[3] == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
    }
  }
  if ((puVar5[5] == 0) && (*(ushort *)(param_1 + 0x100) != 0)) {
    local_60[0] = CONCAT44(local_60[0]._4_4_,(uint)*(ushort *)(param_1 + 0x100));
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_60,0,puVar5 + 5);
    if (puVar5[5] == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
    }
  }
  if ((puVar5[7] == 0) && (*(ushort *)(param_1 + 0xfa) != 0)) {
    local_78[0] = (uint)*(ushort *)(param_1 + 0xfa);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_78,0,puVar5 + 7);
    pvVar6 = _aligned_malloc((ulonglong)local_78[0],0x10);
    puVar5[2] = pvVar6;
    if (puVar5[7] == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
    }
  }
  if ((puVar5[8] == 0) && (*(ushort *)(param_1 + 0xfe) != 0)) {
    local_78[0] = (uint)*(ushort *)(param_1 + 0xfe);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_78,0,puVar5 + 8);
    pvVar6 = _aligned_malloc((ulonglong)local_78[0],0x10);
    puVar5[4] = pvVar6;
    if (puVar5[8] == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
    }
  }
  if ((puVar5[9] == 0) && (*(ushort *)(param_1 + 0x102) != 0)) {
    local_78[0] = (uint)*(ushort *)(param_1 + 0x102);
    (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0xd0) + 0x18))
              ((longlong *)**(undefined8 **)(param_1 + 0xd0),local_78,0,puVar5 + 9);
    pvVar6 = _aligned_malloc((ulonglong)local_78[0],0x10);
    puVar5[6] = pvVar6;
    if (puVar5[9] == 0) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000000;
    }
  }
  uVar1 = *(ushort *)(param_1 + 0xfc);
  uVar2 = *(ushort *)(param_1 + 0x100);
  uVar4 = uVar2;
  if (uVar2 <= uVar1) {
    uVar4 = uVar1;
  }
  uVar8 = *(ushort *)(param_1 + 0xf8);
  if ((*(ushort *)(param_1 + 0xf8) < uVar4) && (uVar8 = uVar2, uVar2 <= uVar1)) {
    uVar8 = uVar1;
  }
  if (*(ushort *)(puVar5 + 0xb) < uVar8) {
    *(ushort *)(puVar5 + 0xb) = uVar8;
    thunk_FUN_14028af80(puVar5[10]);
    uVar7 = thunk_FUN_14028af20(uVar8);
    puVar5[10] = uVar7;
  }
  if (puVar5[1] != 0) {
    FUN_1400d8300(param_1,param_2,*(undefined1 *)(param_1 + 0x104),*(undefined8 *)(param_1 + 0x108),
                  puVar5[10]);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
    (**(code **)(*plVar3 + 0x180))(plVar3,puVar5[1],0,0,puVar5[10],0,0);
  }
  if (puVar5[3] != 0) {
    FUN_1400d8300(param_1,param_2,*(undefined1 *)(param_1 + 0x118),*(undefined8 *)(param_1 + 0x120),
                  puVar5[10]);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
    (**(code **)(*plVar3 + 0x180))(plVar3,puVar5[3],0,0,puVar5[10],0,0);
  }
  if (puVar5[5] != 0) {
    FUN_1400d8300(param_1,param_2,*(undefined1 *)(param_1 + 0x130),*(undefined8 *)(param_1 + 0x138),
                  puVar5[10]);
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xd0) + 8);
    (**(code **)(*plVar3 + 0x180))(plVar3,puVar5[5],0,0,puVar5[10],0,0);
  }
  return;
}

