// Function: FUN_1400f5110
// Addr: 1400f5110
// Size: 455 bytes


void FUN_1400f5110(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  size_t sVar4;
  longlong lVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_73 [3];
  undefined8 ***local_70 [2];
  undefined8 local_60;
  ulonglong local_58;
  
  FUN_1400532a0(param_2,"struct VS_INPUT\n{\n",0x12);
  uVar8 = 0;
  uVar9 = (uint)(param_1[1] - *param_1 >> 4);
  if (uVar9 != 0) {
    do {
      lVar5 = *param_1;
      uVar7 = (ulonglong)uVar8;
      pcVar2 = (&PTR_s_float_140482eb8)[(longlong)*(int *)(lVar5 + 4 + uVar7 * 0x10) * 2];
      sVar4 = strlen(pcVar2);
      FUN_1400532a0(param_2,pcVar2,sVar4);
      FUN_1400532a0(param_2,&DAT_1404738a8,1);
      pcVar2 = (&PTR_s_a_Position_140484a90)[*(int *)(lVar5 + uVar7 * 0x10)];
      sVar4 = strlen(pcVar2);
      FUN_1400532a0(param_2,pcVar2,sVar4);
      FUN_1400532a0(param_2,&DAT_1404789c4,3);
      pcVar2 = (&PTR_s_POSITION_140482e70)[*(int *)(lVar5 + 8 + uVar7 * 0x10)];
      sVar4 = strlen(pcVar2);
      FUN_1400532a0(param_2,pcVar2,sVar4);
      iVar1 = *(int *)(lVar5 + 0xc + uVar7 * 0x10);
      if (iVar1 < 0) {
        lVar5 = FUN_140053cb0(local_73,-iVar1);
        *(undefined1 *)(lVar5 + -1) = 0x2d;
        lVar5 = lVar5 + -1;
      }
      else {
        lVar5 = FUN_140053cb0(local_73);
      }
      FUN_140053d10(local_70,lVar5,local_73);
      ppppuVar6 = local_70;
      if (0xf < local_58) {
        ppppuVar6 = (undefined8 ****)local_70[0];
      }
      FUN_1400532a0(param_2,ppppuVar6,local_60);
      if (0xf < local_58) {
        uVar7 = local_58 + 1;
        ppppuVar6 = (undefined8 ****)local_70[0];
        if (0xfff < uVar7) {
          ppppuVar6 = (undefined8 ****)local_70[0][-1];
          if (0x1f < (ulonglong)((longlong)local_70[0] + (-8 - (longlong)ppppuVar6))) {
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)(5);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = local_58 + 0x28;
        }
        thunk_FUN_14028af80(ppppuVar6,uVar7);
      }
      FUN_1400532a0(param_2,&DAT_140487a64,2);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  FUN_1400532a0(param_2,&DAT_140487a54,4);
  return;
}

