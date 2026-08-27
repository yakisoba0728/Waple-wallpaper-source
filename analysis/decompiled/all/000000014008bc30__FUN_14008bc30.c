// Function: FUN_14008bc30
// Addr: 14008bc30
// Size: 192 bytes


void FUN_14008bc30(longlong param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 local_res8;
  
  if (*(ulonglong *)(param_1 + 0x38) < *(ulonglong *)(param_1 + 0x60)) {
    FID_conflict__assert
              (L"indentString_.size() >= indentation_.size()",
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
    FUN_1404217a0(uVar1 + (longlong)puVar2,0,uVar4);
    *(undefined1 *)(uVar1 + (longlong)puVar2 + uVar4) = 0;
    return;
  }
  FUN_140016cc0(puVar2,uVar4,local_res8,uVar4,0);
  return;
}

