// Function: FUN_1402763e0
// Addr: 1402763e0
// Size: 15 bytes


void FUN_1402763e0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined1 auStackX_10 [8];
  undefined8 ***pppuStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  undefined8 ***pppuStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  puVar3 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar3 = (undefined8 *)*param_2;
  }
  uStack_18 = 0;
  pppuStack_28 = (undefined8 ****)0x0;
  uStack_20 = 0;
  uStack_10 = 0;
  FUN_140016240(&pppuStack_28,puVar3,param_2[2]);
  lStack_38 = 0;
  ppppuVar5 = &pppuStack_28;
  if (7 < uStack_10) {
    ppppuVar5 = (undefined8 ****)pppuStack_28;
  }
  uStack_30 = 0;
  pppuStack_48 = (undefined8 ****)0x0;
  uStack_40 = 0;
  uVar4 = FUN_1402d6b70(ppppuVar5);
  FUN_140016240(&pppuStack_48,ppppuVar5,uVar4);
  if (7 < uStack_10) {
    uVar6 = uStack_10 * 2 + 2;
    ppppuVar5 = (undefined8 ****)pppuStack_28;
    if (0xfff < uVar6) {
      ppppuVar5 = (undefined8 ****)pppuStack_28[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_28 + (-8 - (longlong)ppppuVar5)))
      goto code_r0x000140276592;
      uVar6 = uStack_10 * 2 + 0x29;
    }
    func_0x00014028b040(ppppuVar5,uVar6);
  }
  if (7 < uStack_30 - lStack_38) {
    ppppuVar5 = &pppuStack_48;
    if (7 < uStack_30) {
      ppppuVar5 = (undefined8 ****)pppuStack_48;
    }
    lVar1 = lStack_38 * 2;
    lStack_38 = lStack_38 + 8;
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0((longlong)ppppuVar5 + lVar1,L"\\assets\\",0x10);
  }
  FUN_1400163e0(&pppuStack_48,8,auStackX_10[0],L"\\assets\\",8);
  func_0x0001402765a0(param_1,auStackX_10,&pppuStack_48);
  if (7 < uStack_30) {
    uVar6 = uStack_30 * 2 + 2;
    ppppuVar5 = (undefined8 ****)pppuStack_48;
    if (0xfff < uVar6) {
      ppppuVar5 = (undefined8 ****)pppuStack_48[-1];
      if (0x1f < (ulonglong)((longlong)pppuStack_48 + (-8 - (longlong)ppppuVar5))) {
code_r0x000140276592:
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = uStack_30 * 2 + 0x29;
    }
    func_0x00014028b040(ppppuVar5,uVar6);
  }
  return;
}

