// Function: FUN_1402d949c
// Addr: 1402d949c
// Size: 5 bytes


void FUN_1402d949c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  longlong lStack_28;
  undefined1 auStack_20 [16];
  char cStack_10;
  
  func_0x0001402bf8e8(&lStack_28,param_1);
  func_0x0001402d9168(auStack_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (cStack_10 != '\0') {
    *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

