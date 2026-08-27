// Function: FUN_140061000
// Addr: 140061000
// Size: 175 bytes


void FUN_140061000(char *param_1,char *param_2)

{
  code *pcVar1;
  size_t sVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong local_28 [4];
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  sVar2 = strlen(param_1);
  FUN_140017480(local_28,param_1,sVar2);
  uVar3 = FUN_1400787e0(&DAT_1404e8ae0,local_28);
  sVar2 = strlen(param_2);
  FUN_14000f880(uVar3,param_2,sVar2);
  if (0xf < (ulonglong)local_28[3]) {
    uVar5 = local_28[3] + 1;
    lVar4 = local_28[0];
    if (0xfff < uVar5) {
      lVar4 = *(longlong *)(local_28[0] + -8);
      if (0x1f < (local_28[0] - lVar4) - 8U) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_28[3] + 0x28;
    }
    thunk_FUN_14028af80(lVar4,uVar5);
  }
  return;
}

