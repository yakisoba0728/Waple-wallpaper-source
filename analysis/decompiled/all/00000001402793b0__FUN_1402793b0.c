// Function: FUN_1402793b0
// Addr: 1402793b0
// Size: 189 bytes


undefined8 FUN_1402793b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 auStackX_18 [2];
  undefined8 ***local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined1 local_108 [16];
  undefined1 local_f8 [32];
  longlong *plStack_d8;
  longlong *local_d0;
  longlong *plStack_b8;
  ulonglong *local_b0;
  int *piStack_a0;
  ulonglong local_88;
  uint local_80;
  
  FUN_14000e050(local_108);
  uVar3 = FUN_14000d210(local_f8,"-tex -i \"");
  uVar3 = FUN_140030170(uVar3,param_1);
  uVar3 = FUN_14000d210(uVar3,"\" -o \"");
  uVar3 = FUN_140030170(uVar3,param_2);
  FUN_14000d210(uVar3,&DAT_140474eb4);
  local_138 = 0;
  uStack_140 = 0;
  local_148 = (undefined8 ****)0x0;
  local_130 = 7;
  if ((((byte)local_80 & 0x22) == 2) || (uVar6 = *local_b0, uVar6 == 0)) {
    if (((local_80 & 4) != 0) || (*plStack_b8 == 0)) goto code_r0x0001402794aa;
    lVar5 = *plStack_d8;
    uVar6 = *plStack_b8 + (longlong)*piStack_a0 * 2;
  }
  else {
    lVar5 = *local_d0;
    if (uVar6 < local_88) {
      uVar6 = local_88;
    }
  }
  if (lVar5 != 0) {
    FUN_140016bb0(&local_148,lVar5,(longlong)(uVar6 - lVar5) >> 1);
  }
code_r0x0001402794aa:
  ppppuVar4 = &local_148;
  if (7 < local_130) {
    ppppuVar4 = (undefined8 ****)local_148;
  }
  iVar2 = FUN_140278ab0(ppppuVar4,auStackX_18);
  if (7 < local_130) {
    uVar6 = local_130 * 2 + 2;
    ppppuVar4 = (undefined8 ****)local_148;
    if (0xfff < uVar6) {
      ppppuVar4 = (undefined8 ****)local_148[-1];
      if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppuVar4))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return uVar3;
      }
      uVar6 = local_130 * 2 + 0x29;
    }
    func_0x00014028b040(ppppuVar4,uVar6);
  }
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = auStackX_18[0];
  }
  func_0x000140005c20(local_108);
  return uVar3;
}

