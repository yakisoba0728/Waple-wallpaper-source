// Function: FUN_1402e28fc
// Addr: 1402e28fc
// Size: 216 bytes


void FUN_1402e28fc(char *param_1,char *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined1 auStack_378 [56];
  ulonglong local_340;
  undefined1 local_298 [592];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2fU) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2fU) & 0x3fU) & 1) == 0))))) {
    param_2 = (char *)func_0x0001402eaf38(param_1);
  }
  if ((*param_2 == ':') && (param_2 != param_1 + 1)) {
    FUN_1402e2778(param_1,0,0,param_3);
    func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_378);
    return;
  }
  bVar2 = *param_2 - 0x2f;
  if ((0x2d < bVar2) || (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0))
  {
    bVar1 = 0;
  }
  local_340 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
  func_0x000140421870(local_298,0,0x250);
  return;
}

