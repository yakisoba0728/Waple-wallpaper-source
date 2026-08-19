// Function: FUN_14008bd00
// Addr: 14008bd00
// Size: 39 bytes


void FUN_14008bd00(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uStackX_8;
  
  if (*(ulonglong *)(param_1 + 0x38) < *(ulonglong *)(param_1 + 0x60)) {
    func_0x0001402cba34(L"indentString_.size() >= indentation_.size()",
                        L"D:\\dev\\we\\windows\\src\\json\\src\\json_writer.cpp",0x41c);
  }
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  puVar2 = (undefined8 *)(param_1 + 0x28);
  uVar3 = uVar1 - *(longlong *)(param_1 + 0x60);
  if (uVar3 <= uVar1) {
    *(ulonglong *)(param_1 + 0x38) = uVar3;
    if (0xf < *(ulonglong *)(param_1 + 0x40)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    *(undefined1 *)((longlong)puVar2 + uVar3) = 0;
    return;
  }
  uVar4 = uVar3 - uVar1;
  if (uVar4 <= *(ulonglong *)(param_1 + 0x40) - uVar1) {
    *(ulonglong *)(param_1 + 0x38) = uVar3;
    if (0xf < *(ulonglong *)(param_1 + 0x40)) {
      puVar2 = (undefined8 *)*puVar2;
    }
    func_0x000140421870(uVar1 + (longlong)puVar2,0,uVar4);
    *(undefined1 *)(uVar1 + (longlong)puVar2 + uVar4) = 0;
    return;
  }
  FUN_140016d90(puVar2,uVar4,uStackX_8,uVar4,0);
  return;
}

