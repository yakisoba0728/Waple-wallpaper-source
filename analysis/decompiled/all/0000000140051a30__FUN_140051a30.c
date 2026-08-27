// Function: FUN_140051a30
// Addr: 140051a30
// Size: 270 bytes


void FUN_140051a30(undefined8 param_1,undefined8 param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  bool bVar4;
  uint local_74;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 **local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140016600(local_48,param_1);
  *param_4 = 0;
  pppuVar2 = local_48;
  if (7 < local_30) {
    pppuVar2 = (undefined8 ***)local_48[0];
  }
  *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
  uVar3 = 0x3e;
  uVar1 = FUN_140290230(pppuVar2,&local_68,0x3e,0xffffffff);
  if (uVar1 == 0) {
    if ((local_58 & 0x400) != 0) {
      uVar3 = 6;
    }
    uStack_50 = CONCAT44(uVar3,(undefined4)uStack_50);
  }
  else {
    uStack_50 = uStack_50 & 0xffffffff;
    if (uVar1 < 0x41) {
      if (((uVar1 != 0x40) && (uVar1 != 2)) && (uVar1 != 3)) {
        bVar4 = uVar1 == 0x35;
LAB_140051adf:
        if (!bVar4) {
          param_4[1] = local_74;
          *param_4 = uVar1;
          *(undefined ***)(param_4 + 2) = &PTR_PTR_1404df530;
        }
      }
    }
    else if ((uVar1 != 0x7b) && (uVar1 != 0xa1)) {
      bVar4 = uVar1 == 0x10b;
      goto LAB_140051adf;
    }
  }
  if (*param_4 != 0) {
    local_38 = 0;
    pppuVar2 = local_48;
    if (7 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    *(undefined2 *)pppuVar2 = 0;
    if (*param_4 != 0) goto LAB_140051b29;
  }
  FUN_140051290(&local_68,param_2,param_3,param_4);
LAB_140051b29:
  FUN_140016770(local_48);
  return;
}

