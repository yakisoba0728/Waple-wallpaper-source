// Function: FUN_1400e14a0
// Addr: 1400e14a0
// Size: 157 bytes


char * FUN_1400e14a0(char *param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [16];
  ulonglong uStack_58;
  
  if (param_4 == "\n") {
    pcVar1 = (char *)thunk_FUN_14028d040(param_1,param_2,&DAT_140486e0d);
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
  if (((byte)DAT_1404dc0dc & 4) != 0) {
    param_4 = param_4 + -0x140486eb8;
    uStack_58 = DAT_1404dc110 ^ (ulonglong)auStack_88;
    if (&DAT_00000010 < param_4) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(auStack_68,&DAT_140486eb8 + ((ulonglong)param_4 & 0xfffffffffffffff0),
                    (uint)param_4 & 0xf);
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(auStack_68,&DAT_140486eb8,param_4);
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

