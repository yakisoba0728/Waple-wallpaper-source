// Function: FUN_1403f0250
// Addr: 1403f0250
// Size: 160 bytes


void FUN_1403f0250(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 local_res8 [2];
  
  fVar4 = (float)FUN_1403993a0(*(undefined8 *)(param_2 + 0x48),param_3,0);
  uVar2 = FUN_1403c6b30(param_2,(uint)*(byte *)(param_1 + 1) * 0x100 + (uint)*(byte *)(param_1 + 2),
                        ((float)(int)(short)((ushort)*(byte *)(param_1 + 4) +
                                            (ushort)*(byte *)(param_1 + 3) * 0x100) + fVar4) *
                        DAT_140471a5c,local_res8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar3 = 0;
  if (*(longlong *)(lVar1 + 0x98) != 0) {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x98) + 0x40);
  }
  (**(code **)(lVar1 + 0x50))(lVar1,*(undefined8 *)(param_2 + 0x18),local_res8[0],uVar2,uVar3);
  return;
}

