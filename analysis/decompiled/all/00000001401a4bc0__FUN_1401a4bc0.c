// Function: FUN_1401a4bc0
// Addr: 1401a4bc0
// Size: 320 bytes


void FUN_1401a4bc0(undefined8 *param_1,longlong param_2,char *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  size_t sVar4;
  ulonglong uVar5;
  longlong lVar6;
  char *_Str;
  longlong local_48 [3];
  ulonglong local_30;
  
  lVar6 = (longlong)*(int *)(param_2 + 4) + param_1[1];
  if (param_3[8] == '\x04') {
    _Str = param_3;
    uVar2 = FUN_140085cc0(param_3,local_48);
    FUN_14000de40(lVar6,uVar2);
    if (0xf < local_30) {
      uVar5 = local_30 + 1;
      lVar3 = local_48[0];
      if (0xfff < uVar5) {
        lVar3 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar3) - 8U) goto LAB_1401a4cf9;
        uVar5 = local_30 + 0x28;
      }
      thunk_FUN_14028af80(lVar3,uVar5);
    }
  }
  if (*(char *)(param_1 + 2) != '\0') {
    FUN_140176f70(*param_1,param_1[1],param_2);
    if (param_3[8] == '\a') {
      _Str = "";
      lVar3 = FUN_140087490(param_3,"value");
      if (lVar3 == 0) {
        lVar3 = FUN_140084ac0();
      }
      if (*(char *)(lVar3 + 8) == '\x04') {
        uVar2 = FUN_140085cc0(lVar3,local_48);
        FUN_14000de40(lVar6,uVar2);
        if (0xf < local_30) {
          uVar5 = local_30 + 1;
          lVar6 = local_48[0];
          if (0xfff < uVar5) {
            lVar6 = *(longlong *)(local_48[0] + -8);
            if (0x1f < (local_48[0] - lVar6) - 8U) {
LAB_1401a4cf9:
              lVar6 = 5;
              pcVar1 = (code *)swi(0x29);
              (*pcVar1)(5);
              if (_Str != (char *)0x0) {
                sVar4 = strlen(_Str);
                FUN_14000f880(*(int *)(uVar5 + 4) + lVar6,_Str,sVar4);
              }
              if (*(code **)(uVar5 + 0x28) != (code *)0x0) {
                (**(code **)(uVar5 + 0x28))(lVar6,uVar5);
              }
              return;
            }
            uVar5 = local_30 + 0x28;
          }
          thunk_FUN_14028af80(lVar6,uVar5);
        }
      }
      FUN_1401a4db0(param_2,param_1,param_3);
    }
  }
  if (*(code **)(param_2 + 0x28) != (code *)0x0) {
    (**(code **)(param_2 + 0x28))(param_1[1],param_2);
  }
  return;
}

