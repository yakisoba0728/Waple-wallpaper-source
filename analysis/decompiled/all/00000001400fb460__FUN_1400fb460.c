// Function: FUN_1400fb460
// Addr: 1400fb460
// Size: 73 bytes


void FUN_1400fb460(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined1 auStack_28 [32];
  
  uStack_30 = 0x1400fb472;
  lVar4 = FUN_14004c490(param_1 + 2);
  if (lVar4 != 0) {
    return;
  }
  iVar1 = *(int *)(*param_1 + 4);
  uVar6 = 6;
  if (*(longlong *)((longlong)param_1 + (longlong)iVar1 + 0x48) != 0) {
    uVar6 = 2;
  }
  uVar2 = *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10);
  uVar5 = (uVar6 | uVar2) & *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x14);
  *(uint *)((longlong)param_1 + (longlong)iVar1 + 0x10) = uVar6 | uVar2 & 0x17;
  if ((uVar5 & 0x17) == 0) {
    return;
  }
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

