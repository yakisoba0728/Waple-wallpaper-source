// Function: FUN_140045d10
// Addr: 140045d10
// Size: 305 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_140045d10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  char cVar8;
  longlong local_d0 [3];
  ulonglong local_b8;
  undefined1 local_90 [40];
  uint local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  if (*(char *)(param_1 + 0x50) != '\a') {
    return;
  }
  uVar2 = func_0x000140053f10(local_d0,*(undefined4 *)(param_1 + 0x98));
  FUN_14002fdf0(local_90,&DAT_140476cd8,uVar2);
  if (0xf < local_b8) {
    uVar7 = local_b8 + 1;
    lVar5 = local_d0[0];
    if (0xfff < uVar7) {
      lVar5 = *(longlong *)(local_d0[0] + -8);
      uVar4 = (local_d0[0] - lVar5) - 8;
      if (0x1f < uVar4) {
LAB_140046590:
        cVar6 = (char)uVar7;
        cVar8 = uVar4 < 0x1f;
        lVar5 = 5;
        pcVar1 = (code *)swi(0x29);
        pcVar3 = (char *)(*pcVar1)();
        *(char *)(lVar5 + 4) = *(char *)(lVar5 + 4) + (char)((ulonglong)pcVar3 >> 8) + cVar8;
        *pcVar3 = *pcVar3 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar7 = local_b8 + 0x28;
    }
    func_0x00014028b040(lVar5,uVar7);
    return;
  }
  uVar2 = func_0x000140053f10(local_d0,param_3);
  FUN_14002fdf0(local_48,&DAT_140476cd8,uVar2);
  if (local_b8 < 0x10) {
    local_68 = CONCAT31(local_68._1_3_,7);
    local_68 = local_68 & 0xfffffeff;
    local_50 = 0;
    local_60 = 0;
    uStack_58 = 0;
    func_0x00014028aff0(0x10);
    return;
  }
  uVar7 = local_b8 + 1;
  lVar5 = local_d0[0];
  if (0xfff < uVar7) {
    lVar5 = *(longlong *)(local_d0[0] + -8);
    uVar4 = (local_d0[0] - lVar5) - 8;
    if (0x1f < uVar4) goto LAB_140046590;
    uVar7 = local_b8 + 0x28;
  }
  func_0x00014028b040(lVar5,uVar7);
  return;
}

