// Function: FUN_1400e13d0
// Addr: 1400e13d0
// Size: 88 bytes


char * FUN_1400e13d0(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  
  if (param_4 == "\n") {
    pcVar1 = (char *)thunk_FUN_14028cf70(param_1,param_2,&DAT_140486d0d);
    return pcVar1;
  }
  if ((longlong)param_2 - (longlong)param_1 < 0x10) {
    do {
      if (param_1 == param_2) {
        return param_1;
      }
      if (param_4 != "\r\n") {
        pcVar1 = "\r\n";
        do {
          if (*param_1 == *pcVar1) {
            return param_1;
          }
          pcVar1 = pcVar1 + 1;
        } while (pcVar1 != param_4);
      }
      param_1 = param_1 + 1;
    } while( true );
  }
  if (((byte)DAT_1404dc00c & 4) != 0) {
    pcVar1 = (char *)FUN_14028e070(param_1,(longlong)param_2 - (longlong)param_1,&DAT_140486de8,
                                   param_4 + -0x140486de8);
    return pcVar1;
  }
  do {
    if (param_1 == param_2) {
      return param_1;
    }
    if (param_4 != "\r\n") {
      pcVar1 = "\r\n";
      do {
        if (*param_1 == *pcVar1) {
          return param_1;
        }
        pcVar1 = pcVar1 + 1;
      } while (pcVar1 != param_4);
    }
    param_1 = param_1 + 1;
  } while( true );
}

