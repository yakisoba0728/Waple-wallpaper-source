// Function: FUN_14016f740
// Addr: 14016f740
// Size: 94 bytes


ulonglong FUN_14016f740(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = FUN_1402c10d0((&PTR_s_g_bufStatic_140484b60)[uVar3],param_1);
    if (iVar1 == 0) {
      return uVar3;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
  } while ((int)uVar2 < 4);
  return 0xffffffff;
}

