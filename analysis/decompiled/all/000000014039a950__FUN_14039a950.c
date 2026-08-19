// Function: FUN_14039a950
// Addr: 14039a950
// Size: 98 bytes


ulonglong FUN_14039a950(longlong param_1,ulonglong param_2,uint *param_3)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = (param_2 & 0xff) * 4;
  uVar2 = *(uint *)(lVar1 + *(longlong *)(param_1 + 0x50));
  uVar5 = (uint)param_2;
  if ((uVar2 != 0xffffffff) && (uVar4 = uVar2 >> 0xb ^ uVar5, (uVar4 & 0xffffff00) == 0)) {
    *param_3 = uVar2 & 0x7ffff;
    return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
  }
  bVar3 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_2 & 0xffffffff);
  if ((bVar3 != 0) && ((uVar5 < 0x200000 && (*param_3 < 0x80000)))) {
    *(uint *)(lVar1 + *(longlong *)(param_1 + 0x50)) = (uVar5 & 0x1fff00) << 0xb | *param_3;
  }
  return (ulonglong)bVar3;
}

