// Function: FUN_1402decf4
// Addr: 1402decf4
// Size: 232 bytes


void FUN_1402decf4(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined1 local_228 [528];
  ulonglong local_18;
  
  local_18 = DAT_1404dc110 ^ (ulonglong)auStack_2a8;
  iVar1 = (*DAT_140426720)(param_1,local_228,0x105);
  if (iVar1 == 0) {
    uVar2 = (*DAT_1404266a8)();
    FUN_1402caf94(uVar2);
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    func_0x0001402bf8e8(&local_280,0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      iVar1 = func_0x0001402dc004();
      if (iVar1 == 0) {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_1402c86b8(local_228,&local_260,local_288,uVar3);
  }
  func_0x0001402ed2f0(local_18 ^ (ulonglong)auStack_2a8);
  return;
}

