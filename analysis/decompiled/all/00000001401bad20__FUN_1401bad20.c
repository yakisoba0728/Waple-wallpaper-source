// Function: FUN_1401bad20
// Addr: 1401bad20
// Size: 78 bytes


void FUN_1401bad20(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  pcVar2 = "-1 -1 -1";
  if (param_2 != '\0') {
    pcVar2 = "-32 -32 0";
  }
  FUN_1401d7f50(param_1,&DAT_140488bc0,pcVar2);
  pcVar2 = "1 1 1";
  if (param_2 != '\0') {
    pcVar2 = "32 32 0";
  }
  FUN_1401d7f50(param_1,&DAT_140488bc4,pcVar2);
  lVar1 = func_0x000140087560(param_1,"exponent","");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,"exponent","");
  }
  return;
}

