// Function: FUN_1401c0810
// Addr: 1401c0810
// Size: 75 bytes


void FUN_1401c0810(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char *pcVar2;
  
  FUN_1401c0170();
  pcVar2 = "0 0 0";
  if (param_2 != '\0') {
    pcVar2 = "0 -200 0";
  }
  FUN_1401d7f50(param_1,"origin",pcVar2);
  lVar1 = func_0x000140087560(param_1,"radius","");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1,"radius","");
  }
  return;
}

