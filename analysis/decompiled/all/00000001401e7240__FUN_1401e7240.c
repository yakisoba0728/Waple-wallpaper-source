// Function: FUN_1401e7240
// Addr: 1401e7240
// Size: 168 bytes


undefined8 FUN_1401e7240(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined1 local_68 [48];
  
  func_0x000140084ea0(local_68,0);
  func_0x0001400d4050(&local_b0,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x1898),param_2,1);
  cVar3 = func_0x000140017910(&local_b0,local_68,0);
  if (cVar3 != '\0') {
    uVar4 = func_0x00014028aff0(0x148);
    return uVar4;
  }
  FUN_140098830("Failed loading effect: %s\n",param_2);
  if (0xf < uStack_98) {
    lVar2 = CONCAT71(uStack_af,local_b0);
    uVar6 = uStack_98 + 1;
    lVar5 = lVar2;
    if (0xfff < uVar6) {
      lVar5 = *(longlong *)(lVar2 + -8);
      if (0x1f < (lVar2 - lVar5) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
                    /* WARNING: Subroutine does not return */
        FUN_1400173b0();
      }
      uVar6 = uStack_98 + 0x28;
    }
    func_0x00014028b040(lVar5,uVar6);
  }
  uStack_a0 = 0;
  uStack_98 = 0xf;
  local_b0 = 0;
  func_0x000140085510(local_68);
  return 0;
}

