// Function: FUN_1400fb4b0
// Addr: 1400fb4b0
// Size: 89 bytes


void FUN_1400fb4b0(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [32];
  
  uStack_30 = 0x1400fb4c6;
  lVar4 = func_0x00014004c590(param_1 + 2,param_2,param_3 | 1);
  iVar1 = *(int *)(*param_1 + 4);
  lVar2 = *(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48);
  if (lVar4 == 0) {
    uVar6 = 6;
    if (lVar2 != 0) {
      uVar6 = 2;
    }
    uVar6 = uVar6 | *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10);
  }
  else {
    uVar6 = 4;
    if (lVar2 != 0) {
      uVar6 = 0;
    }
  }
  uVar5 = uVar6 & *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x14);
  *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) = uVar6 & 0x17;
  if ((uVar5 & 0x17) != 0) {
    if ((uVar5 & 4) == 0) {
      pcVar7 = "ios_base::failbit set";
      if ((uVar5 & 2) == 0) {
        pcVar7 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar7 = "ios_base::badbit set";
    }
    uVar3 = func_0x000140013bf0(auStack_38,1,0);
    uVar3 = FUN_140013a40(auStack_28,pcVar7,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_1400173d0(uVar3);
  }
  return;
}

