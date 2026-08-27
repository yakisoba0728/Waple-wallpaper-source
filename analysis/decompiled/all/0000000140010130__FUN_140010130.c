// Function: FUN_140010130
// Addr: 140010130
// Size: 148 bytes


undefined4 *
FUN_140010130(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined2 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [72];
  
  iVar1 = FUN_1400162a0(local_68,0x40,&DAT_140473fb8,param_6);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  if (iVar1 < 0) {
    *param_2 = local_78;
    param_2[1] = uStack_74;
    param_2[2] = uStack_70;
    param_2[3] = uStack_6c;
    return param_2;
  }
  FUN_140012170(param_1,param_2,&local_78,param_4,param_5,local_68,(longlong)iVar1);
  return param_2;
}

