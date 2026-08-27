// Function: FUN_14028ed40
// Addr: 14028ed40
// Size: 69 bytes


void FUN_14028ed40(char *param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  
  if (((byte)DAT_1404dc00c & 4) != 0) {
    FUN_14028e070(param_1,(longlong)param_2 - (longlong)param_1,param_3,
                  (longlong)param_4 - (longlong)param_3);
    return;
  }
  do {
    if (param_1 == param_2) {
      return;
    }
    if (param_3 != param_4) {
      pcVar1 = param_3;
      do {
        if (*param_1 == *pcVar1) {
          return;
        }
        pcVar1 = pcVar1 + 1;
      } while (pcVar1 != param_4);
    }
    param_1 = param_1 + 1;
  } while( true );
}

