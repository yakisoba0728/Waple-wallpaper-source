// Function: FUN_1401165f0
// Addr: 1401165f0
// Size: 291 bytes


undefined8 * FUN_1401165f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x400;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  if (param_1[2] == 0) {
    puVar1 = (undefined8 *)FUN_14028af20(0x18);
    *puVar1 = 0x10000;
    uVar2 = FUN_14028af20(1);
    puVar1[1] = uVar2;
    uVar2 = _malloc_base(0x38);
    puVar1[2] = uVar2;
    if (puVar1[1] == 0) {
      FID_conflict__assert
                (L"baseAllocator_ != 0",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h",
                 0xaf);
    }
    if (puVar1[2] == 0) {
      FID_conflict__assert
                (L"shared_ != 0",
                 L"D:\\dev\\we\\windows\\src\\json\\include\\rapidjson\\internal\\../allocators.h",
                 0xb0);
    }
    *(undefined8 *)(puVar1[2] + 8) = puVar1[1];
    *(longlong *)puVar1[2] = (longlong)((longlong *)puVar1[2] + 4);
    **(undefined8 **)puVar1[2] = 0;
    *(undefined8 *)(*(longlong *)puVar1[2] + 8) = 0;
    *(undefined8 *)(*(longlong *)puVar1[2] + 0x10) = 0;
    *(undefined1 *)(puVar1[2] + 0x18) = 1;
    *(undefined8 *)(puVar1[2] + 0x10) = 1;
    param_1[2] = puVar1;
    param_1[3] = puVar1;
  }
  return param_1;
}

