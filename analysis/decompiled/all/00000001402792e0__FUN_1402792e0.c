// Function: FUN_1402792e0
// Addr: 1402792e0
// Size: 399 bytes


undefined8 FUN_1402792e0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 local_res18 [2];
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
  uVar3 = FUN_14000d140(local_f8,"-tex -i \"");
  uVar3 = FUN_1400300a0(uVar3,param_1);
  uVar3 = FUN_14000d140(uVar3,"\" -o \"");
  uVar3 = FUN_1400300a0(uVar3,param_2);
  FUN_14000d140(uVar3,&DAT_140474de4);
  local_138 = 0;
  uStack_140 = 0;
  local_148 = (undefined8 ****)0x0;
  local_130 = 7;
  if ((((byte)local_80 & 0x22) == 2) || (uVar6 = *local_b0, uVar6 == 0)) {
    if (((local_80 & 4) != 0) || (*local_b8 == 0)) goto LAB_1402793da;
    lVar5 = *local_d8;
    uVar6 = *local_b8 + (longlong)*local_a0 * 2;
  }
  else {
    lVar5 = *local_d0;
    if (uVar6 < local_88) {
      uVar6 = local_88;
    }
  }
  if (lVar5 != 0) {
    FUN_140016ae0(&local_148,lVar5,(longlong)(uVar6 - lVar5) >> 1);
  }
LAB_1402793da:
  ppppuVar4 = &local_148;
  if (7 < local_130) {
    ppppuVar4 = (undefined8 ****)local_148;
  }
  iVar2 = FUN_1402789e0(ppppuVar4,local_res18);
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
    thunk_FUN_14028af80(ppppuVar4,uVar6);
  }
  uVar3 = 0;
  if (iVar2 == 0) {
    uVar3 = local_res18[0];
  }
  FUN_140005b50(local_108);
  return uVar3;
}

