// Function: FUN_140394160
// Addr: 140394160
// Size: 427 bytes


undefined8 * FUN_140394160(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  int *local_48;
  int local_40;
  undefined2 local_3c;
  
  *param_1 = 0;
  local_78[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = (int *)0x0;
  local_40 = 0x10000;
  local_3c = 0;
  iVar6 = *(int *)(param_2 + 0x18);
  if (iVar6 == -1) {
    lVar3 = FUN_140398a10(param_2 + 0x80);
    iVar6 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar6;
  }
  local_3c = CONCAT11(local_3c._1_1_,1);
  local_40 = iVar6;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    puVar7 = &DAT_14045dd10;
  }
  else {
    puVar4 = (undefined8 *)
             (**(code **)(param_2 + 0x20))(param_2,0x73626978,*(undefined8 *)(param_2 + 0x28));
    puVar7 = &DAT_14045dd10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar7 = puVar4;
    }
  }
  uVar5 = FUN_14038c7e0(local_78,puVar7);
  piVar2 = local_48;
  *param_1 = uVar5;
  if (local_48 != (int *)0x0) {
    iVar8 = -1;
    iVar6 = 1;
    FUN_1402fc370("SANITIZE",local_70,0,1,0,0xffffffff,"end [%p..%p]",local_70,uStack_68);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + iVar8;
      UNLOCK();
      if (iVar1 == iVar6) {
        *piVar2 = -0xdead;
        lVar3 = *(longlong *)(piVar2 + 2);
        if (lVar3 != 0) {
          FUN_1403c3220(lVar3);
          thunk_FUN_1402d9040(lVar3);
          piVar2[2] = 0;
          piVar2[3] = 0;
        }
        if (*(code **)(piVar2 + 10) != (code *)0x0) {
          (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
          piVar2[8] = 0;
          piVar2[9] = 0;
          piVar2[10] = 0;
          piVar2[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar2);
      }
    }
  }
  if (*(int *)(param_2 + 0x18) == -1) {
    lVar3 = FUN_140398a10(param_2 + 0x80);
    iVar6 = (uint)*(byte *)(lVar3 + 5) + (uint)*(byte *)(lVar3 + 4) * 0x100;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar6;
    *(int *)(param_1 + 1) = iVar6;
  }
  else {
    *(int *)(param_1 + 1) = *(int *)(param_2 + 0x18);
  }
  return param_1;
}

