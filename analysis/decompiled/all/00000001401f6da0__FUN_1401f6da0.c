// Function: FUN_1401f6da0
// Addr: 1401f6da0
// Size: 172 bytes


ulonglong FUN_1401f6da0(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar3 = 0;
  if (*(char *)(param_1 + 0x30c) == '\x02') {
    fVar1 = *(float *)(param_1 + 0x300);
LAB_1401f6dd7:
    if (fVar1 <= 0.0) goto LAB_1401f6e1d;
  }
  else if (*(char *)(param_1 + 0x30c) == '\x01') {
    fVar1 = *(float *)(param_1 + 0x2fc);
    goto LAB_1401f6dd7;
  }
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  for (lVar4 = *(longlong *)(param_1 + 0x2c0); lVar4 != lVar2; lVar4 = lVar4 + 0x38) {
    if ((*(longlong *)(lVar4 + 0x28) != 0) &&
       (uVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + 0x158) + 0xb0))(),
       (char)uVar3 == '\0')) {
      return (ulonglong)(byte)~(byte)((uint)*(undefined4 *)(param_1 + 0x310) >> 0x1e) &
             0xffffffffffffff01;
    }
  }
LAB_1401f6e1d:
  return uVar3 & 0xffffffffffffff00;
}

