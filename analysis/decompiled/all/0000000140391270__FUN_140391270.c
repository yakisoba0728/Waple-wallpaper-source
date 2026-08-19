// Function: FUN_140391270
// Addr: 140391270
// Size: 399 bytes


undefined8 * FUN_140391270(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  int local_40;
  undefined2 local_3c;
  
  *param_1 = 0;
  local_78[0] = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0x10000;
  local_3c = 0;
  iVar4 = *(int *)(param_2 + 0x18);
  if (iVar4 == -1) {
    lVar1 = FUN_140398ae0(param_2 + 0x80);
    iVar4 = (uint)*(byte *)(lVar1 + 5) + (uint)*(byte *)(lVar1 + 4) * 0x100;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar4;
  }
  local_3c = CONCAT11(local_3c._1_1_,1);
  local_40 = iVar4;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    puVar5 = &DAT_14045dde0;
  }
  else {
    puVar2 = (undefined8 *)
             (**(code **)(param_2 + 0x20))(param_2,0x67766172,*(undefined8 *)(param_2 + 0x28));
    puVar5 = &DAT_14045dde0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar5 = puVar2;
    }
  }
  pbVar6 = (byte *)&DAT_14045dde0;
  uVar3 = FUN_14038c4f0(local_78,puVar5);
  *param_1 = uVar3;
  if (local_48 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402fc440("SANITIZE",local_70,0,1,0,0xffffffff,"end [%p..%p]",local_70,uStack_68);
  }
  puVar5 = &DAT_14045dde0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
  }
  if (0x13 < *(uint *)(puVar5 + 3)) {
    pbVar6 = (byte *)puVar5[2];
  }
  if ((((uint)pbVar6[1] + (uint)*pbVar6 * 0x100) * 0x100 + (uint)pbVar6[2]) * 0x100 +
      (uint)pbVar6[3] == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    iVar4 = *(int *)(param_2 + 0x18);
    if (iVar4 == -1) {
      lVar1 = FUN_140398ae0(param_2 + 0x80);
      iVar4 = (uint)*(byte *)(lVar1 + 5) + (uint)*(byte *)(lVar1 + 4) * 0x100;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      *(int *)(param_2 + 0x18) = iVar4;
    }
    *(int *)(param_1 + 1) = iVar4;
  }
  return param_1;
}

