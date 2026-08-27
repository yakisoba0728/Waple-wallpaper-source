// Function: FUN_1402f5300
// Addr: 1402f5300
// Size: 370 bytes


int FUN_1402f5300(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *param_3 = 0;
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  lVar1 = *param_1;
  uVar3 = *param_2 & 7;
  if (uVar3 == 1) {
    puVar5 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      uVar3 = param_2[4];
      *puVar5 = *(undefined8 *)(param_2 + 2);
      *(uint *)(puVar5 + 1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      puVar5[7] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = lVar1;
      *param_3 = puVar5;
      return 0;
    }
LAB_1402f537d:
    iVar4 = 0x40;
  }
  else {
    if (uVar3 == 4) {
      puVar5 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x48);
      if (puVar5 == (undefined8 *)0x0) goto LAB_1402f537d;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[6] = lVar1;
      iVar4 = FUN_1402fb2c0(puVar5,*(undefined8 *)(param_2 + 6));
      if (iVar4 != 0) {
        (**(code **)(lVar1 + 0x10))(lVar1,puVar5);
        return iVar4;
      }
    }
    else {
      if ((uVar3 != 2) || (puVar5 = *(undefined8 **)(param_2 + 8), puVar5 == (undefined8 *)0x0)) {
        if ((*param_2 & 2) == 0) {
          return 6;
        }
        if (*(longlong *)(param_2 + 8) == 0) {
          return 6;
        }
        pcVar2 = *(code **)(*(longlong *)(param_2 + 8) + 0x28);
        if (pcVar2 == (code *)0x0) {
          return 6;
        }
        (*pcVar2)();
        return 6;
      }
      puVar5[6] = lVar1;
    }
    iVar4 = 0;
    *param_3 = puVar5;
  }
  return iVar4;
}

