// Function: FUN_1403cabd0
// Addr: 1403cabd0
// Size: 197 bytes


ulonglong FUN_1403cabd0(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = (param_2 & 0xff) * 2 + 0x18;
  uVar2 = *(ushort *)(lVar1 + (longlong)param_1);
  if ((uVar2 != 0xffff) && ((((uint)((param_2 & 0xffffffff) >> 5) ^ (uint)uVar2) & 0xfffffff8) == 0)
     ) {
    return (ulonglong)(uVar2 & 7);
  }
  puVar5 = &DAT_14045dde0;
  puVar4 = &DAT_14045dde0;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (3 < *(uint *)(puVar4 + 3)) {
    puVar5 = (undefined8 *)puVar4[2];
  }
  uVar3 = FUN_1403caae0(puVar5,param_2 & 0xffffffff);
  if (((*param_1 != 0) && ((uint)param_2 < 0x200000)) && ((uint)uVar3 < 8)) {
    *(ushort *)(lVar1 + (longlong)param_1) = (ushort)((uint)param_2 >> 5) & 0xfff8 | (ushort)uVar3;
  }
  return uVar3;
}

