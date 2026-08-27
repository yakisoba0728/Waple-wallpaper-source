// Function: FUN_1401e01f0
// Addr: 1401e01f0
// Size: 198 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401e01f0(longlong *param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48 [64];
  
  local_88 = _DAT_140492a60;
  uStack_80 = _UNK_140492a68;
  local_78 = _DAT_140492a90;
  uStack_70 = _UNK_140492a98;
  local_68 = _DAT_140492b40;
  uStack_60 = _UNK_140492b48;
  local_58 = _DAT_140492de0;
  uStack_50 = _UNK_140492de8;
  if ((*param_3 & 8) == 0) {
    if ((*param_3 >> 9 & 1) != 0) {
      uVar1 = (**(code **)(*param_1 + 0x70))(_DAT_140492b40,*param_4);
      (**(code **)(*param_1 + 0x78))(param_1,uVar1,&local_88);
    }
  }
  else {
    (**(code **)(*param_1 + 0x78))(_DAT_140492b40,*(undefined4 *)*param_4,&local_88);
  }
  uVar2 = (**(code **)(*param_1 + 0x80))(param_1);
  puVar3 = (undefined8 *)FUN_14005ecb0(local_48,uVar2,&local_88);
  uVar2 = puVar3[1];
  *param_5 = *puVar3;
  param_5[1] = uVar2;
  uVar2 = puVar3[3];
  param_5[2] = puVar3[2];
  param_5[3] = uVar2;
  uVar2 = puVar3[5];
  param_5[4] = puVar3[4];
  param_5[5] = uVar2;
  uVar2 = puVar3[7];
  param_5[6] = puVar3[6];
  param_5[7] = uVar2;
  return;
}

