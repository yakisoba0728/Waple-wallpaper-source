// Function: FUN_14001e2c0
// Addr: 14001e2c0
// Size: 549 bytes


void FUN_14001e2c0(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  LPCWSTR pWVar4;
  longlong lVar5;
  ulonglong uVar6;
  LPCWSTR ***lpFile;
  undefined4 uVar7;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  ulonglong local_150;
  LPCWSTR **local_148 [3];
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
  
  uVar3 = FUN_140005ee0(&local_168);
  uVar3 = FUN_140005d20(uVar3,"installer.exe");
  FUN_140016600(local_148,uVar3);
  FUN_140016770(&local_168);
  cVar2 = FUN_140018f30(local_148);
  if (cVar2 == '\0') goto LAB_14001e4c2;
  FUN_14000df80(local_108);
  uVar7 = FUN_1400300a0(local_f8,L"-x64");
  uStack_160 = 0;
  local_158 = 7;
  local_150 = 0xf;
  local_168 = (LPCWSTR)(ulonglong)
                       CONCAT16(s__silent_140473a48[6],
                                CONCAT24(s__silent_140473a48._4_2_,s__silent_140473a48._0_4_));
  cVar2 = FUN_14000dc20(uVar7,&local_168);
  if (cVar2 != '\0') {
    FUN_1400300a0(local_f8,L" -silentupdate");
  }
  local_158 = 0;
  local_150 = 7;
  uStack_160 = 0;
  local_168 = (LPCWSTR)0x0;
  if ((((byte)local_80 & 0x22) == 2) || (uVar6 = *local_b0, uVar6 == 0)) {
    if (((local_80 & 4) == 0) && (*local_b8 != 0)) {
      lVar5 = *local_d8;
      uVar6 = *local_b8 + (longlong)*local_a0 * 2;
      goto LAB_14001e3f8;
    }
  }
  else {
    lVar5 = *local_d0;
    if (uVar6 < local_88) {
      uVar6 = local_88;
    }
LAB_14001e3f8:
    if (lVar5 != 0) {
      FUN_140016ae0(&local_168,lVar5,(longlong)(uVar6 - lVar5) >> 1);
    }
  }
  pWVar4 = (LPCWSTR)&local_168;
  if (7 < local_150) {
    pWVar4 = local_168;
  }
  lpFile = local_148;
  if (7 < local_130) {
    lpFile = (LPCWSTR ***)local_148[0];
  }
  ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)lpFile,pWVar4,(LPCWSTR)0x0,1);
  if (7 < local_150) {
    uVar6 = local_150 * 2 + 2;
    pWVar4 = local_168;
    if (0xfff < uVar6) {
      pWVar4 = *(LPCWSTR *)(local_168 + -4);
      if (0x1f < (ulonglong)((longlong)local_168 + (-8 - (longlong)pWVar4))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = local_150 * 2 + 0x29;
    }
    thunk_FUN_14028af80(pWVar4,uVar6);
  }
  local_158 = 0;
  local_150 = 7;
  local_168 = (LPCWSTR)((ulonglong)local_168 & 0xffffffffffff0000);
  PostMessageW(DAT_1404e5280,0x12,0,0);
  FUN_140005b50(local_108);
LAB_14001e4c2:
  FUN_140016770(local_148);
  return;
}

