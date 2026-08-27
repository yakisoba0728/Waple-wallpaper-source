// Function: FUN_1402fb4f0
// Addr: 1402fb4f0
// Size: 99 bytes


undefined8 FUN_1402fb4f0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(uint *)(param_1 + 0x40) = (uint)*(ushort *)(param_2 + 0x68);
  iVar2 = FUN_1402f4b80(param_2,0x756e6963);
  if (iVar2 == 0) {
    FUN_1402fe640(param_1,param_2);
    FUN_1402fe090(param_1,param_2);
  }
  *(undefined8 *)(param_2 + 0x88) = uVar1;
  return 0;
}

