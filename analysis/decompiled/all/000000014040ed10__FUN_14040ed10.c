// Function: FUN_14040ed10
// Addr: 14040ed10
// Size: 288 bytes


undefined8 FUN_14040ed10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 2;
  }
  if (*(int *)(param_1 + 0x1c) == 2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x1c) == 3) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  FUN_1402fc370(&DAT_140470710,param_1,"bool __cdecl hb_blob_t::try_make_writable(void)",0,0,0,
                "current data is -> %p\n",*(undefined8 *)(param_1 + 0x10));
  lVar1 = _malloc_base(*(undefined4 *)(param_1 + 0x18));
  uVar2 = 0;
  if (lVar1 != 0) {
    FUN_1402fc370(&DAT_140470710,param_1,"bool __cdecl hb_blob_t::try_make_writable(void)",0,0,0,
                  "dupped successfully -> %p\n",*(undefined8 *)(param_1 + 0x10));
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_1404210f0(lVar1,*(undefined8 *)(param_1 + 0x10));
    }
    if (*(code **)(param_1 + 0x28) != (code *)0x0) {
      (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x1c) = 2;
    *(undefined1 **)(param_1 + 0x28) = &LAB_14035bf70;
    uVar2 = 0x14035bf01;
    *(longlong *)(param_1 + 0x10) = lVar1;
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return uVar2;
}

