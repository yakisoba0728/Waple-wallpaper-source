// Function: FUN_140041320
// Addr: 140041320
// Size: 209 bytes


void FUN_140041320(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 local_1e0 [8];
  uint local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 local_158 [304];
  
  if (*(char *)(param_1 + 0xe0) != '\0') {
    return;
  }
  plVar2 = (longlong *)(param_1 + 8);
  local_1d8 = (local_1d8 >> 8 & 0xfffffe) << 8;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  if (7 < *(ulonglong *)(param_1 + 0x20)) {
    plVar2 = (longlong *)*plVar2;
  }
  FUN_14003f880(local_158,plVar2);
  cVar1 = FUN_14003f2f0(local_158,local_1e0,0);
  if (cVar1 == '\0') {
    func_0x00014028aff0(0x10);
    return;
  }
  puVar3 = (undefined8 *)(param_1 + 0x28);
  if (0xf < *(ulonglong *)(param_1 + 0x40)) {
    puVar3 = (undefined8 *)*puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(local_1e0,puVar3,*(longlong *)(param_1 + 0x38) + (longlong)puVar3);
}

