// Function: FUN_140279150
// Addr: 140279150
// Size: 396 bytes


ulonglong FUN_140279150(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  undefined8 ***local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined1 local_108 [16];
  undefined1 local_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_b8;
  ulonglong *local_b0;
  int *local_a0;
  ulonglong local_88;
  uint local_80;
  
  FUN_14000df80(local_108);
  uVar3 = FUN_14000d140(local_f8," -tex -i \"");
  uVar3 = FUN_1400300a0(uVar3,param_1);
  uVar3 = FUN_14000d140(uVar3,"\" -o \"");
  uVar3 = FUN_1400300a0(uVar3,param_2);
  FUN_14000d140(uVar3,&DAT_140474de4);
  local_138 = 0;
  local_130 = 7;
  uStack_140 = 0;
  local_148 = (undefined8 ****)0x0;
  if ((((byte)local_80 & 0x22) == 2) || (uVar4 = *local_b0, uVar4 == 0)) {
    if (((local_80 & 4) != 0) || (*local_b8 == 0)) goto LAB_140279246;
    lVar6 = *local_d8;
    uVar4 = *local_b8 + (longlong)*local_a0 * 2;
  }
  else {
    lVar6 = *local_d0;
    if (uVar4 < local_88) {
      uVar4 = local_88;
    }
  }
  if (lVar6 != 0) {
    FUN_140016ae0(&local_148,lVar6,(longlong)(uVar4 - lVar6) >> 1);
  }
LAB_140279246:
  ppppuVar5 = &local_148;
  if (7 < local_130) {
    ppppuVar5 = (undefined8 ****)local_148;
  }
  uVar2 = FUN_1402789e0(ppppuVar5,0);
  if (7 < local_130) {
    uVar4 = local_130 * 2 + 2;
    ppppuVar5 = (undefined8 ****)local_148;
    if (0xfff < uVar4) {
      ppppuVar5 = (undefined8 ****)local_148[-1];
      if (0x1f < (ulonglong)((longlong)local_148 + (-8 - (longlong)ppppuVar5))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
      uVar4 = local_130 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppuVar5,uVar4);
  }
  local_138 = 0;
  local_130 = 7;
  local_148 = (undefined8 ***)((ulonglong)local_148 & 0xffffffffffff0000);
  FUN_140005b50(local_108);
  return (ulonglong)uVar2;
}

